#include "StdAfx.h"

using std::string;
using std::istream;
using std::ostream;



//Sales_data::Sales_data(std::istream &is)
//{
//    std::cout << "is canshu" << std::endl;
//    read(is, *this);
//}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    m_units_sold += rhs.m_units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.m_bookNo >> item.m_units_sold >> price;
    item.revenue = price * item.m_units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.m_units_sold << " "
        << item.revenue << "" << item.avg_price();
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data &rhs)
{
    Sales_data sales_add;
    if (lhs.m_bookNo == rhs.m_bookNo)
    {
        sales_add.m_bookNo = lhs.m_bookNo;
        sales_add.m_units_sold = lhs.m_units_sold + rhs.m_units_sold;
        sales_add.revenue = lhs.revenue + rhs.revenue;
    }
    else
    {
        sales_add.m_units_sold = lhs.m_units_sold + rhs.m_units_sold;
        sales_add.revenue = lhs.revenue + rhs.revenue;
    }
    return sales_add;
}