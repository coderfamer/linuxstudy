#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "the sum of " << v1 << " and " << v2
              << " is " << v1+v2 << std::endl;
    return 0;
}
