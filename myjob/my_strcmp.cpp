#include <iostream>

using namespace std;

int my_strcmp1(const char *str1, const char *str2)
{
    while ((*str1 == *str2) && str1 != '\0')
    {
        str1++;
        str2++;
    }

    if (*str1 == '\0' && str2 == '\0')
    {
        return 1;
    }else{
        return -1;
    }
}

int my_strcmp2(const char *str1, const char *str2)
{
    while (str1 != NULL && str2 != NULL)
    {
        while(*str1++ == *str2++)
        {
            if (*str1 == '\0' && str2 == '\0')
            {
                return 1;
            }
        }
        return -1;
    }
    return -2;
}

int main()
{
    char *str1 = "abcdefg";
    char *str2 = "abcdefgh";

    printf((my_strcmp1(str1, str2));
    cout << my_strcmp2(str1, str2) << endl;

    char *str3 = "12345";
    char *str4 = "1234";

    cout << my_strcmp1(str3, str4) << endl;
    cout << my_strcmp2(str3, str4) << endl;


    return 0;
}
















