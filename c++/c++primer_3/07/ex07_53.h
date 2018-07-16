#pragma once

class Debug
{
public:
    constexpr Debug(bool b = true) : rt(b), io(b), other(b)
    {  }
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), other(o)
    {  }
    constexpr bool any()
    { return rt || io || other;  }

private:
    bool rt;
    bool io;
    bool other;
};
