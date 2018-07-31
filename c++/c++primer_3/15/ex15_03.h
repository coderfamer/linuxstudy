#pragma once

#include <string>

using namespace std;

class Quote
{
public:
    Quote() = default;
    Quote(const string &b, double p) : bookNo(b), price(p)
    {  }

    string isbn() { return bookNo; }
    virtual double net_price(size_t n) const
    { return n*price; }

    virtual ~Quote() = default;

private:
    string bookNo;

protected:
    double price = 0.0;
};
