#ifndef _EX07_06_SALES_DATA_H_
#define _EX07_06_SALES_DATA_H_

#include <iostream>
#include <string>

struct Sales_data {
    std::string isbn() const { return m_bookNo; }
    Sales_data &combine(const Sales_data &);
    //double avg_price() const;


    std::string m_bookNo;
    unsigned m_units_sold = 0;
    double m_revenue = 0.0;
};

// double Sales_data::avg_price() const 
// {
//     if (m_units_sold) {
//         return m_revenue / m_units_sold;
//     } else {
//         return 0;
//     }
// }

Sales_data & Sales_data::combine(const Sales_data &rhs) 
{
    m_units_sold += rhs.m_units_sold;
    m_revenue += rhs.m_revenue;
    return *this;
}


// Sales_data add(const Sales_data &, const Sales_data &);
// std::ostream &print(std::ostream &, const Sales_data &);
// std::istream &read(std::istream &, Sales_data &);

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.m_bookNo >> item.m_units_sold >> price;
    item.m_revenue = price * item.m_units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.m_units_sold << " " << item.m_revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) 
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif