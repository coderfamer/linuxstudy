#include <iostream>

#include "limit_quote.h"

double Limit_quote::net_price(size_t n) const
{
    return n*price * (n < quantity ? 1 - discount : 1);
}

void Limit_quote::debug() const
{
    Quote::debug();

    cout << "max_qty = " << this->quantity << " "
        << "discount = " << this->discount << " ";
}
