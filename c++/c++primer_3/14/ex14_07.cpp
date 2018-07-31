#include <iostream>
#include <algorithm>

#include "ex14_07.h"

pair<char *, char *>
String::alloc_n_copy(const char *b, const char *e)
{
    auto str = alloc.allocate(e - b);
    return {str, uninitialized_copy(b, e, str)};
}

void String::range_initializer(const char *first, const char *last)
{
    auto newstr = alloc_n_copy(first, last);
    elements = newstr.first;
    end = newstr.second;
}

String::String(const char *s)
{
    char *s1 = const_cast<char *>(s);
    while (*s1)
    {
        ++s1;
    }
    range_initializer(s, ++s1);
}

String::String(const String &rhs)
{
    range_initializer(rhs.elements, rhs.end);
    cout << "copy constructor" << endl;
}

void String::free()
{
    if (elements)
    {
        for_each(elements, end, [this](char &c){
                 alloc.destroy(&c);
                 });
    }
}

String::~String()
{
    free();
}

String& String::operator=(const String &rhs)
{
    auto newstr = alloc_n_copy(rhs.elements, rhs.end);
    free();
    elements = newstr.first;
    end = newstr.second;
    cout << "copy-assignment" << endl;
    return *this;
}

ostream &operator<<(ostream &os, const String &s)
{
    char *c = const_cast<char *>(s.c_str());
    while (*c)
        os << *c++;
    return os;
}
