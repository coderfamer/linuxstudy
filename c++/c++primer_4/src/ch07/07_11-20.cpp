#include "StdAfx.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

void exe_712_add()
{
    
    if (cin)
    {
        Sales_data total(cin);
        
        while (cin)
        {
            Sales_data trans(cin);
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
    }
    else {
        cerr << "No_data!!" << endl;
    }
}