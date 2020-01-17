#include <iostream>

#include "ex07_41_sales_data.h"

Sales_data& Sales_data::combine(const Sales_data &rhs) 
{
    m_units_sold += rhs.m_units_sold;
    m_revenue += rhs.m_revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &item) 
{
    double price = 0;
    is >> item.m_bookNo >> item.m_units_sold >> price;
    item.m_revenue = price * item.m_units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) 
{
    os << item.isbn() << " " << item.m_units_sold << " " << item.m_revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) 
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}