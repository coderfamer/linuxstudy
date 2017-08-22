/*查看函数输出*/

#include <iostream>

using namespace std;

int f(char *s)
{
   char *p = s;
   while (*p != '\0')
   {
       p++;
   }
   return (p-s);

}

int main()
{
    cout << f("good") << endl;

    return 0;
}
