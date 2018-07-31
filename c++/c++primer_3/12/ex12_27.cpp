#include <iostream>
#include <sstream>
#include <algorithm>

#include "ex12_27.h"

TextQuery::TextQuery(ifstream &ifs) : input(new vector<string>)
{
    LineNo lineNo{0};
    for (string line; getline(ifs, line); ++lineNo)
    {
        input->push_back(line);
        istringstream line_stream(line);
        for (string text,word; line_stream >> text; word.clear())
        {
            std::remove_copy_if(text.begin(), text.end(), back_inserter(word), ispunct);
            auto &nos = result[word];
            if (!nos)
                nos.reset(new set<LineNo>);
            nos->insert(lineNo);
        }
    }
}


