#include <iostream>
#include <string>

#include "quote.h"
#include "bulk_quote.h"
#include "limit_quote.h"

void print_debug(const Quote &);
double print_taotal(ostream &os, const Quote& item, size_t n);

int main()
{
    Quote q("aaa", 10.60);
    Bulk_quote bq("bbb", 111, 10, 0.3);
    Limit_quote lq("ccc", 222, 10, 0.3);

    Quote &r = q;
    r.debug();
    cout << endl;
    r = bq;
    r.debug();
    cout << endl;
    r = lq;
    r.debug();
    cout << endl;

    cout << "==========================================" << endl;

    print_debug(q);
    cout << endl;
    print_debug(lq);
    cout << endl;
    print_debug(bq);
    cout << endl;


    return 0;
}

double print_taotal(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
        << " #sold: " << n << " total due: " << ret << endl;

    return ret;
}


void print_debug(const Quote &q)
{
    q.debug();
}
