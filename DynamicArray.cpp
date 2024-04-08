#include <iostream>
#include <string>

using namespace std;

class Thread
{
private:
    int *arr;
    int size;
    int length;
    int index;

public:
    Thread()
    {
        size = 5;
        arr = new int[size];
        length = 0;
    }
    int getLength() { return length; }
    int getSize() { return size; }
    void insert(int value) {
        // if array is already filled
        if (length == size) {
            size *= 2;
            int* ptr = new int[size];

            // copying values
            for (int i = 0; i < length; ++i) {
                ptr[i] = arr[i];
            }

            delete[] arr;
            arr = ptr;
        }

        arr[index] = value;
        ++index;
        ++length;
    }

    int operator[] (int i){
       if(i>=0 && i<length){
        return arr[i];
       }
       return -1;
    }
    ~Thread()
    {
        delete[] arr;
    }
    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << endl;
        }
    }
    int find(int i)
    {
        for (i = 0; i < length; i++)
        {
            return arr[i];
        }
        return -1;
    }
    bool search(int target)
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] == target)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Thread t;
    cout << "Size is: " << t.getSize() << endl << "Length is: " 
         << t.getLength() << endl;
    for (int i = 10; i > 0; --i)
    {
        t.insert(i);
    }
    t.print();
    cout << "Size is: " << t.getSize() << endl << "Length is: " 
         << t.getLength() << endl;

         t.insert(3);

          t.print();
    cout << "Size is: " << t.getSize() << endl << "Length is: "
         << t.getLength() << endl;

         cout << "The Specific Element is: " << t[5] << endl ;
         cout << "Element is: " << t.find(1) << endl;
}