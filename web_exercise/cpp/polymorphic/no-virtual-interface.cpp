#include <iostream>

using std::cout;
using std::endl;

enum ShapeColor { Red, Green, Blue };

class Shape
{
public:
    void draw(ShapeColor color = Red) const
    {
        doDraw(color);
    }
private:
    virtual void doDraw(ShapeColor color) const = 0;
};

class Rectangle : public Shape
{
private:
    void doDraw(ShapeColor color) const override
    {
        cout << "Rectangle::doDraw() " << color << endl;
    }
};

class Circle : public Shape 
{
private:
    void doDraw(ShapeColor color) const override
    {
        cout << "Circle::doDraw() " << color << endl;
    }
};


int main()
{
    Shape *sp;
    Rectangle rp;
    Circle cp;
    sp = &rp;
    sp->draw();
    sp = &cp;
    sp->draw();

    return 0;
}