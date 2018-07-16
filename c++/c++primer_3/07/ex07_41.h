#pragma once

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;
using namespace std;
class Sales_data
{
    friend istream& read(istream&, Sales_data &);
    friend ostream& print(ostream&, const Sales_data &);
    friend Sales_data add(const Sales_data&, const Sales_data &);
public:
    Sales_data(const string &s, unsigned n , double p ) :
        bookNo(s), units_sold(n), revenue(p*n) 
    { cout << "sales_data(const string, unisgned, double)" << endl;  }
    Sales_data() : Sales_data("", 0, 0)
    { cout << "sales_data()" << endl; }
    Sales_data(const string &s) : Sales_data(s, 0, 0)
    { cout << "salesZ_date(const string)" << endl; }
    Sales_data(istream &is) : Sales_data() 
    { read(is, *this); cout << "Sales_data(istream &)" << endl; }

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


istream& read(istream& is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold  >> price;
    item.revenue = price * item.units_sold;
    return is;
}


