#include <iostream>
#include <string>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void set_data(int feet, float inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    void dispaly()
    {
        cout << "Feet are: " << feet << endl;
        cout << "Inches are: " << inches << endl;
    }
    Distance add(Distance d1)
    {
        Distance res;
        res.feet = feet + d1.feet;
        res.inches = inches + d1.inches;
        return res;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.set_data(3, 12.9);
    d2.set_data(9, 69.6);

    cout << endl;
    cout << "=======Distance 1=======" << endl;
    d1.dispaly();

    cout << endl;
    cout << "=======Distance 2=======" << endl;
    d2.dispaly();
     
    d3 = d1.add(d2);
    cout << endl;
    cout << "The Sum is: " << endl;
    d3.dispaly();
}