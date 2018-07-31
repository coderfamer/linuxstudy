#pragma once

#include "quote.h"

class Bulk_quote : public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string &b, double p, size_t q, double disc) : 
        Quote(b, p), min_qty(q), discount(disc) 
    {  }

    double net_price(size_t n ) const override;

private:
    size_t min_qty = 0;
    double discount = 0.0;
};
