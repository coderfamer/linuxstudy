#pragma once
#include "StdAfx.h"


class Sales_data
{
    friend Sales_data add(const Sales_data&, const Sales_data &);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
public:
    //Sales_data() = default;
    //Sales_data(const std::string &s) : m_bookNo(s) { }
    //Sales_data(const std::string &s, unsigned n, double p) :
    //    m_bookNo(s), m_units_sold(n), revenue(p*n) { }
    //Sales_data(std::istream &);
    Sales_data(const std::string &s, unsigned cnt, double price) :
        m_bookNo(s), m_units_sold(cnt), revenue(cnt * price) {
        std::cout << "3 canshu" << std::endl;
    }
    Sales_data() : Sales_data("", 0, 0) { std::cout << "no canshu" << std::endl; }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0) { std::cout << "1 canshu" << std::endl; }
    Sales_data(std::istream &is) : Sales_data()
    {
        std::cout << "is canshu" << std::endl;
        read(is, *this);
    }

public:
    std::string isbn() const { return m_bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
private:
    std::string m_bookNo;
    unsigned int m_units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data &);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);


inline double Sales_data::avg_price() const
{
    if (m_units_sold)
        return revenue / m_units_sold;
    else
        return 0;
}
