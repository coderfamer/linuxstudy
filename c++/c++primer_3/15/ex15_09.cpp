#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

using namespace std;

double print_total (ostream &os, const Quote& item, size_t n);

int main()
{

    Bulk_quote bulk_quote("bulk_quote_1", 10.10, 10, 0.5);

    Quote *quote_pointer = &bulk_quote;
    quote_pointer->net_price(5);

    Quote &quote_referevce = bulk_quote;
    quote_referevce.net_price(5);

    Quote quote = bulk_quote;
    quote.net_price(5);


    return 0;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << "# sold: " << n 
        << " tootal due: " << ret << endl;
    return ret;
}
