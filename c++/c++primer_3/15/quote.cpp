#include <iostream>

#include "quote.h"


void Quote::debug() const
{
    cout << "data members of this class: " << endl
        << "bookNo = " << this->bookNo << " " 
        << "price = " << this->price << " ";
}
