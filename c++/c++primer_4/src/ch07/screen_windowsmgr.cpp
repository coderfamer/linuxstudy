#include "StdAfx.h"
#include "screen_windowsmgr.h"

using std::string;



void Screen::some_member() const
{
    ++access_str;
}

Screen::pos Screen::size() const
{
    return height * width;
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}
