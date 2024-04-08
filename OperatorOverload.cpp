#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    string name;
    double balance;

public:
    Account(string name = "NA", double balance = 0.0) : name{name}, balance{balance} {}
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }
    double getBalance()
    {
        return balance;
    }
    Account operator+(const Account &acc1)
    {
        string concate = name + acc1.name;
        double newBal = balance + acc1.balance;
        return Account(concate, newBal);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account acc("Tayl", 2000);
    Account acc2("Amber", 1000);

    Account acc3 = acc + acc2;

    acc3.display();
}