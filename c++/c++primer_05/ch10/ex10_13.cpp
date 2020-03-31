#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

bool is_long(const string &word)
{
    return word.size() > 5;
}

int main()
{
    vector<string> words = {"quan", "xi", "min", "jing", "baoping", "xiuying"};

    auto iter = std::partition(words.begin(), words.end(), is_long);

    auto beg = words.begin();

    while (beg != iter)
    {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
    

    return 0;
}