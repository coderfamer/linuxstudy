#include <iostream>
#include "../include/Sales_data.h"

using namespace std;

int main()
{
    cout << "请输入交易记录(ISBN,销售量，原价，实际售价)" << endl;
    Sales_data total;
    //读入第一条交易记录
    if (cin >> total)
    {
        Sales_data trans;
        //读入并处理剩余交易记录
        while (cin >> trans)
        {
            //如果我们仍在处理相同的书
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                //打印前一本书的结果
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "no data!!!" << endl;
        return -1;
    }



    return 0;
}
