#pragma once
#include "StdAfx.h"


class Screen
{
    friend class Window_mgr;
    //friend void Window_mgr::clear(ScreenIndex);
public:
    using pos = std::string::size_type;

public:
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd),
        contents(ht * wd, c) { }
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const;
    void some_member() const;
    pos size() const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;
private:
    void do_display(std::ostream &os) const;
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string contents;
    mutable size_t access_str;
};

class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
public:
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

inline char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen & Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen & Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen & Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;
    return *this;
}

inline Screen & Screen::display(std::ostream & os)
{
    do_display(os);
    return *this;
}

inline const Screen & Screen::display(std::ostream & os) const
{
    do_display(os);
    return *this;
}

inline void Screen::do_display(std::ostream & os) const
{
}