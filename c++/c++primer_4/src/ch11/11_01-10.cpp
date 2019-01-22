#include "StdAfx.h"

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;
using std::list;

void exe1103_word_count()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        word_count[word]++;
    }

    for (const auto &mword : word_count)
    {
        cout << mword.first << " occurs " << mword.second
            << ((mword.second > 1) ? " times." : " time." ) << endl;
    }
}

void check_word(string &word)
{
    string new_word;
    for (auto &s : word)
    {
        if (!ispunct(s))
            new_word.push_back(tolower(s));  
    }
    word = new_word;
}

void exe1104_word_count()
{
    map<string, size_t> word_count;
    string word;
    while (cin >> word)
    {
        check_word(word);
        word_count[word]++;
    }

    for (const auto &mword : word_count)
    {
        cout << mword.first << " occurs " << mword.second
            << ((mword.second > 1) ? " times." : " time.") << endl;
    }
}

void exe1107_family()
{
    map<string, vector<string> > family;
    string first_name;
    string last_name;
    while (cin >> first_name)
    {
        while (cin >> last_name && last_name != "!q")
        {
            family[first_name].push_back(last_name);
        }
    }

    for (auto &f : family)
    {
        cout << f.first << endl;
        for (auto &v : f.second)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}

void exe1108_word()
{
    vector<string> words;
    string word;
    while (cin >> word)
    {
        check_word(word);
        if (find(words.cbegin(), words.cend(), word) == words.end())
            words.push_back(word);
    }
    for (auto &v : words)
    {
        cout << v << " ";
    }
    cout << endl;
}

void split_line(string words, vector<std::string>& vstr)
{
    string str;
    for (auto &s : words)
    {
        if (!isgraph(s))
        {
            str.push_back(s);
        }
        else if (isgraph(s))
        {
            vstr.push_back(str);
            str = "";
        }
    }
}
void exe1109_words()
{
    string words;
    int line = 1;
    map<string, list<int>> word_line;
    while (getline(cin, words))
    {
        vector<string> vwords;
        split_line(words, vwords);
        for (auto &s : vwords)
        {
            word_line[s].push_back(line);
        }
        line++;
    }

    for (auto &m : word_line)
    {
        cout << m.first << endl << "line number :";
        for (auto &l : m.second)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}