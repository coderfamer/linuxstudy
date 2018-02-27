#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    char p1[] = "hello quan";
    char p2[] = "hello xi";

    cout << "p1's length is " << strlen(p1) << endl;
    cout << "p2's length is " << strlen(p2) << endl;

    if (strcmp(p1, p2) != 0)
    {
        cout << "p1 and p2 is not equal" << endl;
    }

    cout << strcat(p1, p2) << endl;
    cout << strcpy(p1, p2) << endl;
    return 0;
}
