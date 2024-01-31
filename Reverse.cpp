#include <iostream>
#include <string>

using namespace std;

class Reverse
{
private:
    int n;

public:
    Reverse(int n = 0) : n{n} {}
    int calRev(){
         int reversedNumber = 0;
    while (n!= 0)
    {
      reversedNumber = reversedNumber * 10 + n % 10;
      n /= 10;
    }
    return reversedNumber;
    }
};

int main()
{
}