#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<string> p1(new string("fuck"));

    //unique_ptr<string> p2(p1);
    //unique_ptr(const unique_ptr&) = delete;
    
   // unique_ptr<string> p3 = p1;

    
    cout <<*p1 << endl;


    return 0;
}
