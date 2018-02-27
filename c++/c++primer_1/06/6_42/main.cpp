#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return ((ctr > 1) ? word + ending : word);
}

int main()
{
    cout << make_plural(1, "success", "es") << endl
    cout << make_plural(2, "success", "es") << endl;


    //cout << "Hello World!" << endl;
    return 0;
}
