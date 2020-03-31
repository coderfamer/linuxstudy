#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;
using Map = std::map<std::string, std::vector<std::string>>;

int main()
{
    Map family;

    string f_name;
    string l_name;
    

    for (;cout << "Enter your f_name:" <<endl,cin >> f_name;){
        vector<string> vl_name;
        //family.insert(std::pair(f_name, vl_name));
        for (;cout << "Enter your l_name:" << endl, cin >> l_name;){
            if (l_name == "quit"){
                break;
            }
            family[f_name].push_back(l_name);
        }
    }

    for (const auto &c: family) {
        cout << c.first << ":" << endl;
        for (const auto &v : c.second) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}