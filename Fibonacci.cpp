#include <iostream>
#include <string>

using namespace std;

class Fibonacci
{
private:
    int n;

public:
    Fibonacci(int n = 0) : n{n} {}
    void set_data(int n);
    int fibo(int n);
    void display();
    ~Fibonacci();
};

// FUNCTIONS DEFINING OUTSIDE THE CLASS
void Fibonacci ::set_data(int n)
{
    this->n = n;
}
int Fibonacci ::fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
void Fibonacci ::display()
{
    cout << "Fibonacci Series is: " << endl;
    for (int i = 0; i <= n; ++i)
    {
        cout << fibo(i) << " ";
    }
}
Fibonacci ::~Fibonacci()
{
}

int main()
{
    int n;
    Fibonacci fibonacci(n);
    cout << "Enter the number: ";
    cin >> n;
    fibonacci.set_data(n);
    fibonacci.display();
}