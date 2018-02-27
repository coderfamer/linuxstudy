#include <iostream>

using namespace std;

int reused = 42;//全局变量

int main(int argc, char *argv[])
{
    int unique = 0;
    cout << reused << " " << unique << endl;
    int reused = 1;
    cout << reused << " " << unique << endl;
    cout << ::reused << " " << unique << endl;


    return 0;
}
