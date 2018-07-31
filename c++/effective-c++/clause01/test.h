#pragma once

#include <iostream>

#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

void f(int a);

template<typename T>
inline void callWithMax(const T &a, const T &b)
{
    f(a > b ? a : b);
}

class GamePlayer
{
private:
    static const int NumTurns = 5;
    int scores[NumTurns];
};


