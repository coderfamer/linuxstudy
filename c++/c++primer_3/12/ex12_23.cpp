#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{
    char *concatenate_string = new char[strlen("hello" "world") + 1]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");

    cout << concatenate_string << endl;
    delete [] concatenate_string;

    return 0;
}
