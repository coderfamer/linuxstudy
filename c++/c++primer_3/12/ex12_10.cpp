#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << "inside the process function: " << ptr.use_count() << endl;
}

int main()
{
    //make_shared<int> q(new int(42));
    shared_ptr<int> p(new int(42));
    //process(shared_ptr<int>(p));
    process(p);

    cout << p.use_count() << endl;
    auto q = p;
    cout << p.use_count() << endl;
    cout << "the int p now points to is: " << *p << endl;


    return 0;
}
