#pragma once
#include "StdAfx.h"


class Sales_data
{
    friend Sales_data add(const Sales_data&, const Sales_data &);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
public:
    Sales_data() = default;
    Sales_data(const std::string &s) : m_bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p) :
        m_bookNo(s), m_units_sold(n), revenue(p*n) { }
    Sales_data(std::istream &);

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
