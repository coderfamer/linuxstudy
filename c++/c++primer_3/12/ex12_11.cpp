#include <iostream>
#include <memory>

using namespace std;
/*
 *两个shared_ptr指向同一块内存，process结束会释放内存，p变为空指针
 * */

void process(shared_ptr<int> ptr)
{
    cout << "inside the process function: " << ptr.use_count() << endl;
}

int main()
{
    //make_shared<int> q(new int(42));
    shared_ptr<int> p(new int(42));
    //process(shared_ptr<int>(p));
    //process(p);
    process(shared_ptr<int>(p.get()));

    cout << p.use_count() << endl;
    auto q = p;
    cout << p.use_count() << endl;
    cout << "the int p now points to is: " << *p << endl;


    return 0;
}
