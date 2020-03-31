#include <iostream>
#include <map>
#include <string>
#include <set>
//#include <iterator>


using std::cout;
using std::endl;
using std::multimap;
using std::map;
using std::string;
using std::multiset;

auto print(const multimap<string, string> &autor)
{
    for (const auto &c : autor) {
        cout << c.first << " " << c.second << endl;
    }
}
int main()
{   
    multimap<string, string> autor = {
        {"chenx", "renleijianshi"},
        {"chenx", "c++_primer"},
        {"chenx", "xitiji"},
        {"chenzq", "effective_c++"},
        {"chenzq", "effective_STL"}
    };

    cout << "begin:" << endl;
    print(autor);

    map<string, multiset<string>> s_autor;
    for (const auto &f : autor) {
        s_autor[f.first].insert(f.second);
    }


    cout << "after:" << endl;
    for (const auto &m : s_autor) {
        for (const auto &s : m.second) {
            cout << m.first << " " << s << endl;
        }
    }


    return 0;
}