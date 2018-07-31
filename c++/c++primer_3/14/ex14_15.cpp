//#include <iostream>

#include "ex14_15.h"

istream &operator>>(istream &is, Book &book)
{
    is >> book.m_no >> book.m_name >> book.m_author >> book.m_pubdate >> book.m_number;
    return is;
}

ostream &operator<<(ostream &out, const Book &book)
{
    out << book.m_no << " " << book.m_name << " " << book.m_author << "" << book.m_pubdate
        << " " << book.m_number;
    return out;
}

bool operator==(const Book &lhs, const Book &rhs)
{
    return lhs.m_no == rhs.m_no;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const Book &lhs, const Book &rhs)
{
    return lhs.m_no < rhs.m_no;
}

bool operator>(const Book &lhs, const Book &rhs)
{
    return rhs < lhs;
}

Book &Book::operator+=(const Book &rhs)
{
    if (rhs == *this)
    {
        this->m_number += rhs.m_number;
    }
    return *this;
}

Book operator+(const Book &lhs, const Book &rhs)
{
    Book book = lhs;
    book += rhs;
    return book;
}
