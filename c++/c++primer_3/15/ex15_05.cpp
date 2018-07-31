#include <iostream>

#include "ex15_05.h"


double Bulk_quote::net_price(size_t n) const
{
    return n * price * (n >= min_qty ? 1 - discount : 1);
}
