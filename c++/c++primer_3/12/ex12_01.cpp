#include <iostream>
#include "strblob.h"

/*
 *b1 有4个元素，因为两个对象指向同一个指针，b2增加新的元素，b1同样会改变
 *b2离开作用域之后会被自动释放，所以b2无元素
 * */

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        cout << "b2's size = " << b2.size() << endl;
        b1 = b2;
        cout << "b1's size = " << b1.size() << endl;
        b2.push_back("about");
        cout << "b2's size = " << b2.size() << endl;
    }
    cout << "b1's size = " << b1.size() << endl;
    //cout << "b2 empty: " << b2.empty() << endl;//use of undeclared identifier 'b2' 


    return 0;
}
