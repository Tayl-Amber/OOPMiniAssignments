#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
    int length;
    int width;
    int height;
    int radius;

public:
    Shape(int length = 10, int width = 20, int height = 30, int radius = 10) : length{length}, width{width}, height{height}, radius{radius}
    {
        cout << "Constructor is Called!!" << endl;
    }
};

class Triangle : public Shape
{
public:
    float calParameter()
    {
        return (length + width + height);
    }
    void printInfo()
    {
        cout << "Parameter of the Triangle is: " << calParameter() << endl;
    }
};

class Circle : public Shape
{
public:
    float calArea()
    {
        return (3.14 * radius * radius);
    }
    void printInfo()
    {
        cout << "Area of the circle is: " << calArea() << endl;
    }
};

class Rectangle : public Shape
{
public:
    float calArea()
    {
        return (length * width);
    }
    void printInfo()
    {
        cout << "Area of the Rectangle is: " << calArea() << endl;
    }
};

int main()
{
    int length, width, height, radius;

    Shape shape(length, width, height, radius);

    Triangle triangle;
    triangle.printInfo();

    Rectangle rectangle;
    rectangle.printInfo();

    Circle circle;
    circle.printInfo();
}