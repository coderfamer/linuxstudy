#pragma once

#include <iostream>
#include <string>

using namespace std;

class Sales_data{
    //友元函数
    friend std::istream& operator >> (std::istream&, Sales_data&);
    //友元函数
    friend std::ostream& operator << (std::ostream&, const Sales_data&);
    //友元函数
    friend bool operator < (const Sales_data&, const Sales_data&);
    //友元函数
    friend bool operator == (const Sales_data&, const Sales_data&);
public://构造函数三种形式
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {  }
    Sales_data(std::istream &is) { is >> *this; }
public:
    Sales_data& operator += (const Sales_data&);
    //std::string isbn() const { return this->bookNo;  }
    std::string isbn() const { return bookNo; }
    double avg_price() const;
    Sales_data& combine(const Sales_data&);

    friend istream &read(istream &, Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);
    friend Sales_data add(const Sales_data &, const Sales_data &);
private:
    std::string bookNo;             //书籍编号，隐式初始化为空串
    unsigned units_sold = 0;        //销售量，显示初始化为0
    double sellingprice = 0.0;      //原始价格，显示初始化为0.0
    double saleprice = 0.0;         //实售价格，显示初始化为0.0
    double discount = 0.0;          //折扣，显示初始化为0.0
    double revenue = 0.0;           //
};

inline bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{ return lhs.isbn() == rhs.isbn();  }

//Sales_data operator + (const Sales_data&, const Sales_data&);

inline bool operator == (const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.units_sold == rhs.units_sold &&
        lhs.sellingprice == rhs.sellingprice &&
        lhs.saleprice == rhs.saleprice &&
  
        lhs.isbn() == rhs.isbn();
}

inline bool operator != (const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs);
}

Sales_data& Sales_data::operator += (const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
        / (rhs.units_sold + units_sold);
    if (sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }

    return *this;
}

Sales_data operator + (const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data ret(lhs);
    ret += rhs;
    return ret;
}

std::istream& operator >> (std::istream &in, Sales_data &s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if (in && s.sellingprice != 0)
    {
        s.discount = s.saleprice / s.sellingprice;
    }
    else
    {
        s = Sales_data();
    }
    return in;
}

std::ostream& operator << (std::ostream &out, const Sales_data &s)
{
    out << s.isbn() << " " << s.units_sold << " " 
        << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}

double Sales_data::avg_price() const 
{
    if (units_sold)
    {
        return revenue/units_sold;
    }
    else
    {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;

    //revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    //double price = 0;
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    //item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice
        << " " << item.saleprice << " " << item.discount;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
