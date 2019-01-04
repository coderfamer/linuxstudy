#include "common.h"

// assumes that both objects refer to the same ISBN
Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
	//bookNo = rhs.bookNo;
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// assumes that both objects refer to the same ISBN
Sales_item
operator+(const Sales_item& lhs, const Sales_item& rhs)
{
	Sales_item ret(lhs);  // copy (|lhs|) into a local object that we'll return
	ret += rhs;           // add in the contents of (|rhs|) 
	return ret;           // return (|ret|) by value
}

std::istream&
operator>>(std::istream& in, Sales_item& s)
{
	double price;
	in >> s.bookNo >> s.units_sold >> price;
	// check that the inputs succeeded
	if (in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();  // input failed: reset object to default state
	return in;
}

std::ostream&
operator<<(std::ostream& out, const Sales_item& s)
{
	out << s.isbn() << " " << s.units_sold << " "
		<< s.revenue << " " << s.avg_price();
	return out;
}

double Sales_item::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}