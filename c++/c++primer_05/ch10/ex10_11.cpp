#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(const vector<string> &vec);
void elm_dups(vector<string> &vec) ;

bool isShort(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}


int main()
{
    vector<string> vec = {"chen", "xi", "chen", "quan", "min", "jing", "min"};
    cout << "begin:" << endl;
    print(vec);


    elm_dups(vec);
    cout << "elm_dups:" << endl;
    print(vec);
    cout << "stable sort:" << endl;
    std::stable_sort(vec.begin(), vec.end(), isShort);
    print(vec);

    return 0;
}

void print(const vector<string> &vec)
{
    for (auto c : vec) {
        cout << c << " ";
    }
    cout << endl;

}

void elm_dups(vector<string> &vec) 
{
    std::sort(vec.begin(), vec.end());
    print(vec);
    auto unique = std::unique(vec.begin(), vec.end());
    cout << "unique" << endl;
    print(vec);

    vec.erase(unique, vec.end());

}