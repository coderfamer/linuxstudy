#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << "**********输出地址*************" << endl;
    cout << a << endl;
    cout << a+sizeof(int) << endl;
    cout << &a[0] + 1 << endl;
    cout << (int *)(&a +1) << endl;
    cout << (int *)(char *)&a+sizeof(int) << endl;

    cout << "***********输出值**************" << endl;
    cout << *a << endl;
    cout << *(a+sizeof(int)) << endl;
    cout << *(&a[0] + 1) << endl;
    cout << *((int *)&a + 1) << endl;
    cout << *((int *)(char *)&a+sizeof(int)) << endl;//数据地址先变成指向char类型指针，然后就是+4，根据指针运算公式，向前移动
                                                        //4*sizeof(char)之后被转换为int*，为a[1]的地址


    return 0;
}
