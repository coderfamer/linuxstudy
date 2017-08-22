/*************************************************************************
	> File Name: vec_string.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年07月20日 星期四 18时57分10秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>

using namespace std;


int main1()
{
    vector<string> svec;
    string word;
    while (cin >> word)
    {
        svec.push_back(word);
    }

    for (auto i : svec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

int main()
{
    vector<string> svec;
    string word;
    while(cin >> word)
    {
        svec.push_back(word);
    }

    for (vector<string>::iterator i=svec.begin(); i!=svec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
   
    vector<string>::size_type tvec;
    tvec = svec.size();
    cout << tvec << endl;
    return 0;
}
