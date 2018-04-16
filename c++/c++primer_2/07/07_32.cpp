#include <iostream>

using namespace std;

class Screen
{
public:
    friend class Window_mgr;

public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {  }
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;

};

class Window_mgr
{
public:
    void clear();
};


void Window_mgr::clear()
{
    Screen myScreen(10, 20, 'X');
    cout << "before clear: " << endl;
    cout << myScreen.contents << endl;
    cout << "after clear: " << endl;
    myScreen.contents = " ";
    cout << myScreen.contents << endl;
}

int main()
{
    Window_mgr w;
    w.clear();

    return 0;
}
