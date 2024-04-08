#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
};

class Rectangle : public Shape
{
private:
    float height, width;

public:
    Rectangle(float height = 0.0, float width = 0.0) : height{height}, width{width} {}
    float area() const override
    {
        cout << "The area of the Rectangle is: "  << height * width << endl;
    }
    float perimeter() const override
    {
     cout << "The Perimeter fo the Rectangle is : "  << 2 * (width + height) << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int radius = 0) : radius{radius} {}
    float area() const override
    {
       cout << "The Area of the Circle is: " << 3.14 * radius * radius << endl;
    }
    float perimeter() const override
    {
     cout << "The Perimeter of Circle: "  << (2 * 3.14 * radius) << endl;
    }
};

int main()
{
    Rectangle rec(5.6, 8.7);
    Circle cir(4);
    
    rec.area();
    rec.perimeter();

    cir.area();
    cir.perimeter();
    return 0;
}
