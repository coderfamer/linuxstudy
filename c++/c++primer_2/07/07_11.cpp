#include <iostream>
#include "../include/Sales_data.h"

using namespace std;

int main()
{

    Sales_data datal;
    Sales_data data2("978-7-121-15535-2");
    Sales_data data3("978-7-121-15535-2", 100, 128, 109);
    Sales_data data4(cin);

    cout << "书籍销售情况是: " << endl;
    cout << datal << endl;
    cout << data2 << endl;
    cout << data3 << endl;
    cout << data4 << endl;

    return 0;
}
