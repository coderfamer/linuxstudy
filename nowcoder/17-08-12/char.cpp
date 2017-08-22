#include <iostream>

using namespace std;

void example(char acWeclome[])
{
    cout << sizeof(acWeclome) << endl;
    return;
}

int main()
{
    char acWecome[] = "Welcome to Huawei Test";
    example(acWecome);
    cout << sizeof(acWecome) << endl;


    return 0;
}
