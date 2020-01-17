#include <iostream>

using namespace std;

class Screen
{
public:
    //下面两句话意思相同
    //using pos = std::string::size_type;
    typedef std::string::size_type pos;
    
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd)
                             ,contents(ht * wd, ' ') {  }
    Screen(pos ht, pos wd, char c) : height(ht), width(wd)
                                     ,contents(ht * wd, c) {  }
    char get() const
    { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen move(pos r, pos c);
    Screen display();
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string  contents;
};

inline Screen Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

Screen Screen::display()
{
    cout << contents;
    return *this;
}
