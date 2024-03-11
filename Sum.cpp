#include <iostream>
#include <string>

using namespace std;

class SumArray
{
private:
    int *arr;
    int size;

public:
    SumArray(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void set_data()
    {
        cout << "Enter the number: ";
        for (int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
    }
    int calSum(int n)
    {
        int sum = 0;
        for (int i = 0; i <= n; ++i)
        {
            sum += arr[i];
        }
        return sum;
    }
    void dispaly()
    {
        int n;
        cout << "Enter the number upto you want to calculate sum: ";
        cin >> n;
        if (n >= 0 && n < size)
        {
            cout << "The sum is: " << calSum(n) << endl;
        }
        else
        {
            cout << "Invalid number is entered!!" << endl;
        }
    }
    ~SumArray()
    {
        delete[] arr;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    SumArray sum(size);
    sum.set_data();
    sum.dispaly();
}