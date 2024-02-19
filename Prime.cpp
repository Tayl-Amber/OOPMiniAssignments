#include <iostream>

using namespace std;
class Prime
{
private:
  int num;
public:
  void setData(int num)
  {
    this->num = num;
  }
  bool showPrime(int n)
  {
    bool is_prime = true;
    if (n == 0 || n == 1)
    {
      is_prime = false;
    }
    for (int i = 2; i <= n / 2; ++i)
    {
      if (n % i == 0)
      {
        is_prime = false;
        break;
      }
    }
    if (is_prime)
    {
      cout << "Number is Prime." << endl;
    }
    else
    {
      cout << "Number is Composite." << endl;
    }
  }
};

int main()
{
  Prime prime;
  
  int num;
  cout << "Enter the number: ";
  cin >> num;

  prime.setData(num);
  prime.showPrime(num);
}
