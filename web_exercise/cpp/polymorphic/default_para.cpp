#include <iostream>
using std::cout;
using std::endl;

class Shape
{
public:
    virtual void draw(int color = 0) const = 0;
};

class Rectangle : public Shape
{
public:
    void draw(int color = 1) const override 
    {
        cout << "Rectangle::draw() " << color << endl; 
    }
};

class Circle : public Shape
{
    void draw(int color) const override
    {
        cout << "Cricle::draw() " << color << endl;
    } 
};

int main()
{
    Shape *rect = new Rectangle();
    Shape *circle = new Circle();

    rect->draw();
    circle->draw();


    return 0;
}