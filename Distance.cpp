#include <iostream>
#include <string>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet{0}, inches{0.0} {}                             // Default Constructor
    Distance(int feet, float inches) : feet{feet}, inches{inches} {} // parametrized constructor
    void set_data(int feet, float inches);
    void display();
    Distance add(Distance d1); // passing object as parameter
    ~Distance();
};

  // FUNCTIONS DEFINATION OUTSIDE THE CLASS
void Distance ::set_data(int feet, float inches)
{
    this->feet = feet;
    this->inches = inches;
}
void Distance ::display()
{
    cout << "Feet are: " << feet << endl;
    cout << "Inches are: " << inches << endl;
}
Distance Distance ::add(Distance d1)
{
    Distance res;
    res.feet = feet + d1.feet;
    res.inches = inches + d1.inches;
    return res; // returning object from a function
}
Distance ::~Distance()
{
}


int main()
{
    Distance d1(3, 12.9);
    Distance d2(9, 69.6);
    Distance d3(0, 0.0);

    cout << endl;
    cout << "=======Distance 1=======" << endl;
    d1.display();

    cout << endl;
    cout << "=======Distance 2=======" << endl;
    d2.display();

    d3 = d1.add(d2);
    cout << endl;
    cout << "The Sum is: " << endl;
    d3.display();
}