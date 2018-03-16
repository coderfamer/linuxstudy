#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << "success's singular is : " << make_plural(1, "success", "es") << endl;
    cout << "success's plural is :" << make_plural(2, "success", "es") << endl;
    cout << "failure's singular is: " << make_plural(1, "faliure") << endl;
    cout << "failure's plural is: " << make_plural(2, "failure") << endl;

    return 0;
}
