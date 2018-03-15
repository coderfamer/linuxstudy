#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "the argument is not enough!!" << endl;
        cout << "Usage: a.out argu[1] argu[2]";
        return 0;
    }

    string str;
    for (int i = 0; i < argc; i++)
    {
        str += argv[i];
    }
    cout << "after connect: " <<  str <<  endl;

    return 0;
}
