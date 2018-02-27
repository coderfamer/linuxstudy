#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade/10];
        }
    }

    for (auto s : scores)
    {
        cout << s << " ";
    }
    cout << endl;

    int length = sizeof(scores)/sizeof(scores[0]);
    cout << length  << endl;
    for (int i=0; i<length; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    return 0;
}
