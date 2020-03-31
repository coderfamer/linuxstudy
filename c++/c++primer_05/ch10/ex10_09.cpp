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


int main()
{
    vector<string> vec = {"chen", "xi", "chen", "quan", "min", "jing", "min"};
    cout << "begin:" << endl;
    print(vec);


    elm_dups(vec);
    cout << "end:" << endl;
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