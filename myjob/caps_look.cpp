#include <iostream>

using namespace std;

int main()
{
    char a[] = "Hello,word";
    char *ptr = a;
    while (*ptr)
    {
        if (*ptr >='a' && *ptr <= 'z')
        {
            cout << char(*ptr + 'A' - 'a' );
        }else{
            cout << *ptr;
        }
        ptr++;
    }
    cout << endl


    return 0;
}
