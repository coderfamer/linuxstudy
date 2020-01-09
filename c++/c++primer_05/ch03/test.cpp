#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s = "hello world!!!";
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s) {
        if (ispunct(c))
            ++punct_cnt;
    }
    cout << punct_cnt << " punctuation characters in " << s << endl;

    for (auto &c : s) {
        c = toupper(c);
    }
    cout << s << endl;
    return 0;
}