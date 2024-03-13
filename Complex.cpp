#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
    float real;
    float img;

public:
    void set_real(float real)
    {
        this->real = real;
    }
    void set_img(float img)
    {
        this->img = img;
    }
    void dispaly()
{
        cout << "The Complex Number is: " << real << " + " << img << "i" << endl;
    }
    Complex sum(Complex c1, Complex c2)
    {
        Complex result;
        result.real = c1.real + c2.real;
        result.img = c1.img + c2.img;
       cout << "The sum is: " << result.real << " + " << result.img << "i" << endl;
    }
};

int main()
{
    float img, real;
    Complex c1, c2, c3;

    cout << endl;
    cout << "Enter the Real Part for number 1: ";
    cin >> real;
    c1.set_real(real);
    cout << "Enter the Imaginary Part for number 1: ";
    cin >> img;
    c1.set_img(img);

    cout << endl;
    cout << "Enter the Real Part for number 2: ";
    cin >> real;
    c2.set_real(real);
    cout << "Enter the Imaginary Part for number 2: ";
    cin >> img;
    c2.set_img(img);

    cout << endl;
    c1.dispaly();
    c2.dispaly();

    cout << endl;
    c3.sum(c1, c2);
    cout << endl;
}
