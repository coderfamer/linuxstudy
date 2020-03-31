#include <iostream>
#include <map>
#include <string>
//#include <iterator>


using std::cout;
using std::endl;
using std::multimap;
using std::string;

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

    string find = "chenzq";

    multimap<string, string>::iterator iter= autor.find(find); 
    multimap<string, string>::size_type num= autor.count(find);

    while (num) {
        iter = autor.erase(iter);
        //++iter;
        --num;
    }

    cout << "after:" << endl;
    print(autor);


    return 0;
}