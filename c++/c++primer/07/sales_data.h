#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
using std::string;
class Sales_data
{
private:
    string bookNo;
    unsigned units_sold = 0;
    double selingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold)
                     /(rhs.units_sold + units_sold);
        if (selingprice != 0)
        {
            discount = saleprice / selingprice;
        }
        return *this;
    }
};
#endif // SALES_DATA_H
