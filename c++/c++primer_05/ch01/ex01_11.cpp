#include <iostream>

void print_num(int val1, int val2) {
    if (val1 > val2) {
        print_num(val2, val1);
        return;
    }

    while (val1 <= val2) {
        std::cout << val1++ << " ";
    }
    std::cout << '\n';
}

int main()
{
    int val1 = 0, val2 = 0;

    std::cout << "Please enter two number:"  << std::endl;

    std::cin >> val1 >> val2;

    print_num(val1, val2);
 
    return 0;
}