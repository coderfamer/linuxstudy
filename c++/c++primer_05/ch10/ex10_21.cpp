#include <iostream>


int main()
{
    int a = 10;
    auto f = [&]()mutable->bool{
        if (a-- > 0) return true;else return false;
    };

    while (f()){
        std::cout << a << std::endl;
    }


    return 0;
}