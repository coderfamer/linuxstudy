#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
using Map = map<string, size_t>;

auto strip(string &str) -> string const&
{
    for (auto &ch : str)
        ch = tolower(ch);
    str.erase(remove_if(str.begin(), 
                        str.end(), 
                       // [](char x){ return ispunct(x);}));
                        [](char x){ return ispunct(x);}), str.end());
    return str;
}

Map strip_and_count()
{
    Map counts;
    string w;
    while (cin >> w)
    {
        ++counts[strip(w)];
    }

    return counts;
}


void print(Map const &m)
{
    for (auto const & kv : m)
    {
        cout << kv.first << " : " << kv.second << endl;
    }
}

int main()
{
    print(strip_and_count());


    return 0;
}
