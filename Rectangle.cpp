#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void set_length(float length)
    {
        this->length = length;
    }
    void set_width(float width)
    {
        this->width = width;
    }
    float area()
    {
        return (length * width);
    }
    float perimeter()
    {
        return (2 * (length + width));
    }
    int sameArea(Rectangle &rec)
    {
        if (area() == rec.area())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void dispaly()
    {
        cout << "Length is: " << length << endl;
        cout << "Width is: " << width << endl;
    }
};

int main()
{
    Rectangle rec1;     
    rec1.set_length(5);
    rec1.set_width(2.5);

    Rectangle rec2;     //rectangle 2
    rec2.set_length(5);
    rec2.set_width(18.9);

    cout << endl;
    cout << "=======For Rectangle 1=======" << endl;
    rec1.dispaly();
    cout << "The Area of the Rectangle 1 is: " << rec1.area() << endl;
    cout << "The Perimetere of Rectangle 1 is: " << rec1.perimeter() << endl;

    cout << endl;
    cout << "=======For Rectangle 2=======" << endl;
    rec2.dispaly();
    cout << "The Area of Rectangle 2 is: " << rec2.area() << endl;
    cout << "The Perimeter of Rectangle 2 is: " << rec2.perimeter() << endl;

    cout << endl;
    cout << "Wehther The area is same:" << (rec1.sameArea(rec2) ? "Yaa" : "No") << endl;

    rec1.set_length(15);
    rec1.set_width(6.3);

    cout << endl;
    cout << "Recantgle 1 Values after Modification: " << endl;
    rec1.dispaly();
    cout << "The Area of the Rectangle 1 after modification is: " << rec1.area() << endl;
    cout << "The Perimetere of Rectangle 1 after modification is: " << rec1.perimeter() << endl;

    cout << endl;
    cout << "Whether the area is same after midifying the values: " << (rec1.sameArea(rec2) ? "Yaa" : "No") << endl;
    cout << endl;
}