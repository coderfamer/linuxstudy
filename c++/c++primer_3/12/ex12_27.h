#pragma once

#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <string>
#include <memory>


using namespace std;

class QueryResult;

class TextQuery
{
public:
    using LineNo = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> input;
    map<string, shared_ptr<set<LineNo>>> result;
};

class QueryResult
{
    friend ostream &print(ostream &, const QueryResult &);
public:
    QueryResult(const string &s, shared_ptr<set<TextQuery::LineNo>> set, shared_ptr<vector<string>> v)
        : word(s), nos(set), input(v) 
    {  }
private:
    string word;
    shared_ptr<set<TextQuery::LineNo>> nos;
    shared_ptr<vector<string>> input;
};

ostream &print(ostream &, const QueryResult &);
