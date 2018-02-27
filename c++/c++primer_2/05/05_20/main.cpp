#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string str = "hello quan";
    string temp;
    auto it = str.begin();
    while (it != str.end())
    {
        temp = *it;
        it++;
        if (temp == *it)
        {
            cout << "the repeated word is:" << temp << endl;
            break;
        }
        else if (*it == str.length()-1)
        {
            cout << "no repeat" << endl;
        }
    }
    cout << endl;
    return 0;
}
