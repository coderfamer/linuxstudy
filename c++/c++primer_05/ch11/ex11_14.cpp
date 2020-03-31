#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::map;

class Families
{
    using Child = std::pair<string, string>;
    using Children = vector<Child>;
    using Family = map<string, Children>;
public:
    void add(string const &l_name, string const &f_name, string &birth){
        auto child = std::make_pair(f_name, birth);
        m_families[l_name].push_back(child);
    }

    void print() const
    {
        for (auto const &pair : m_families) {
            cout << pair.first << ":\n";
            for (auto const &c : pair.second) {
                cout << c.first << " " << c.second << endl;
            }
        }    
    } 

private:
    Family m_families;
};

int main()
{
    Families family;
    auto msg = "Enter your last_name:\n";
    auto msg2 = "Enter your first_name and birthday:\n";
    for (string l ; cout << msg,cin >> l;) {
        for (string f,b; cout << msg2, cin >> f >> b;) {
            if (l == "@q") {
                break;
            }
            family.add(l, f, b);
        }    
    }

    family.print();

    return 0;
}