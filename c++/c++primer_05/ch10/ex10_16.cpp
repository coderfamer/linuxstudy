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
void biggies(vector<string> &words, vector<string>::size_type sz);


int main()
{
    vector<string> vec = {"chen", "xi", "chen", "quan", "min", "jing", "min"};
    cout << "begin:" << endl;
    print(vec);


    elm_dups(vec);
    print(vec);
    biggies(vec, 3);

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

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elm_dups(words);
    std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b){ 
        return a.size() < b.size(); 
    });
    
    auto wc = std::find_if(words.begin(), words.end(), [sz](const string &s){
                return s.size() > sz;
    });

    std::for_each(wc, words.end(), [](const string &s){
        cout << s << " ";
    });
    cout << endl;
}