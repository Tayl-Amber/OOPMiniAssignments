#include <iostream>
#include <string>

using namespace std;

class Fibonacci
{
private:
    int n;

public:
  Fibonacci(int n = 0) : n{n}{

  }
    void set_data(int n)
    {
        this->n = n;
    }
    int fibo(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return fibo(n - 1) + fibo(n - 2);
    }
    void display()
    {
        cout << "Fibonacci Series is: " << endl;
        for (int i = 0; i<=n ; ++i){
            cout << fibo(i) << " " ;
        }
    }
};

int main()
{
       int n;
    Fibonacci fibonacci(n);
    cout << "Enter the number: ";
    cin >> n;
    fibonacci.set_data(n);
    fibonacci.display();
}