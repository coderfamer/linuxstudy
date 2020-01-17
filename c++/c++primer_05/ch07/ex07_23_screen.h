#ifndef _EX07_23_SCREEN_H_
#define _EX07_23_SCREEN_H_

#include <iostream>
#include <string>

class Screen
{
public:
    using pos = std::string::size_type;
public:
    Screen() = default;
    Screen(pos w, pos h, char c) : width(w), height(h),
        contents(w * h, c) {}
    char get() const { return contents[cursor]; }
    inline char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos width = 0;
    pos height = 0;
    std::string contents;
};

char Screen::get(pos r, pos c) const 
{
    pos row = r * width;
    return contents[row + c];
}

Screen & Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

#endif