#include <iostream>

using namespace std;


istream &func(istream &);


int main()
{
    istream &is = func(cin);
    cout << is.rdstate() << endl;

    return 0;
}


istream &func(istream &is)
{
    string buf;
    while (is >> buf)
    {
        cout << buf << endl;
    }
    is.clear();
    return is;
}
