#include <iostream>
#include <vector>
#include <algorithm>

#include "../ch07/ex07_26_sales_data.h"

using std::cout;
using std::endl;
using std::vector;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn().size() < rhs.isbn().size();
}

int main()
{
    Sales_data sd1("dsfdsd"), sd2("aab"), sd3("cbad"), sd4("dd");
    vector<Sales_data> vec_sd = {sd1, sd2, sd3, sd4};

    std::sort(vec_sd.begin(), vec_sd.end(), compareIsbn);


    for (auto c : vec_sd) {
        cout << c.isbn() << " ";
    }
    cout << endl;

    return 0;
}