#pragma once

#include <iostream>
#include <string>

using namespace std;

class Book
{
    friend istream &operator>>(istream &, Book &);
    friend ostream &operator<<(ostream &, const Book &);
    friend bool operator==(const Book &, const Book &);
    friend bool operator!=(const Book &, const Book &);
    friend bool operator<(const Book &, const Book &);
    friend bool operator>(const Book &, const Book &);
    friend Book operator*(const Book &, const Book &);

public:
    Book() = default;
    Book(unsigned no, string name, string author, string pubdate, unsigned number)
        : m_no(no), m_name(name), m_author(author), m_pubdate(pubdate), m_number(number)
    {  }
    Book(istream &is) { is >> *this; }

    Book &operator+=(const Book &);

private:
    unsigned m_no;
    string m_name;
    string m_author;
    string m_pubdate;
    unsigned m_number;
};


    istream &operator>>(istream &, Book &);
    ostream &operator<<(ostream &, const Book &);
    bool operator==(const Book &, const Book &);
    bool operator!=(const Book &, const Book &);
    bool operator<(const Book &, const Book &);
    bool operator>(const Book &, const Book &);
    Book operator*(const Book &, const Book &);
