#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(const vector<string> &vec);
void elm_dups(vector<string> &vec) ;
void biggies(vector<string> &words, vector<string>::size_type sz);


int main()
{
    vector<string> vec = {"chen", "xi", "chen", "quan", "min", "jing", "min"};
    cout << "begin:" << endl;
    print(vec);


    elm_dups(vec);
    print(vec);
    biggies(vec, 4);

    return 0;
}

void print(const vector<string> &vec)
{
    // for (auto c : vec) {
    //     cout << c << " ";
    // }
    // cout << endl;

    std::for_each(vec.begin(), vec.end(), [](const string &v) {
        cout << v << " ";
    });
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

bool check_size(const string & s, vector<string>::size_type sz)
{
    return s.size() < sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elm_dups(words);
    std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b){ 
        return a.size() < b.size(); 
    });

    auto iter = std::stable_partition(words.begin(), words.end(), 
        std::bind(check_size,std::placeholders::_1, sz));
    print(words);
    
    std::for_each(words.begin(), iter, [](const string &s){
        cout << s << " ";
    });
    cout << endl;
}