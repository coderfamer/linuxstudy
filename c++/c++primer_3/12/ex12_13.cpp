#include <iostream>
#include <memory>

/*
 *sp 和 p 指向的内存同时被释放
 * */
using namespace std;

int main()
{
    shared_ptr<int> sp(new int(42));
    auto sp2 = make_shared<int>(42);
    auto p = sp.get();

    delete p;

    cout << "sp point to value = " << *sp << endl;
    cout << "sp point to value = " << *sp2 << endl;

    return 0;
}
