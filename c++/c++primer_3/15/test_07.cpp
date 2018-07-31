#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

using namespace std;

double print_total (ostream &os, const Quote& item, size_t n);

int main()
{
    Quote q("textbook", 10.60);
    Bulk_quote bq("textbook", 10.60, 10, 0.3);
    Limit_quote lq("Bible", 10.60, 10, 0.3);

    print_total(cout, q, 5);
    print_total(cout, bq, 5);
    print_total(cout, lq, 5);


    return 0;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN: " << item.isbn() << "# sold: " << n 
        << " tootal due: " << ret << endl;
    return ret;
}
