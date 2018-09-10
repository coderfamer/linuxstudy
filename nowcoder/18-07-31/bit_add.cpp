#include <iostream>

using namespace std;

int add_without_arithmetic(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    int sum = num1 ^ num2;
    int carry = (num1 & num2) << 1;
    return add_without_arithmetic(sum, carry);
}

int main()
{
    for (int num1, num2; cout << "please enter two number:\n", cin >> num1 >> num2;)
    {
        cout << add_without_arithmetic(num1, num2) << endl;
    }
    return 0;
}