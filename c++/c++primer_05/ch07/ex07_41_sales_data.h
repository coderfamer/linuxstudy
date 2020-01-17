#ifndef _EX07_41_SALES_DATA_H_
#define _EX07_41_SALES_DATA_H_

#include <iostream>
#include <string>
class Sales_data;

std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

class Sales_data {
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    
public:
    
    Sales_data(std::string s, unsigned us, double r) :
        m_bookNo(s), m_units_sold(us), m_revenue(r) { 
            std::cout << "Sales_data(string, unsigned, double)" << std::endl; }
    Sales_data() : Sales_data("", 0, 0) {
        std::cout << "Sales_data()" << std::endl;
    };
    Sales_data(std::string s) : Sales_data(s, 0, 0){
        std::cout << "Sales_data(string)" << std::endl;
    }
    Sales_data(std::istream &is) : Sales_data(){
        std::cout << "Sales_data(istream)" << std::endl;
        read(is, *this);
        
    }
    std::string isbn() const { return m_bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;

private:
    std::string m_bookNo;
    unsigned m_units_sold = 0;
    double m_revenue = 0.0;
};

inline double Sales_data::avg_price() const 
{
    if (m_units_sold) {
        return m_revenue / m_units_sold;
    } else {
        return 0;
    }
}



#endif