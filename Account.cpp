#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount()
    {
        cout << "Constructor is called!" << endl;
    }
    string get_name()
    {
        return name;
    }
    int get_accountNumber()
    {
        return accountNumber;
    }
    double get_balance()
    {
        return balance;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_accountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }
    void set_balance(double balance)
    {
        this->balance = balance;
    }
    bool deposit(double amount)
    {
        if (amount <= 0 && amount > balance)
        {
            return false;
        }
        balance += amount;
        return true;
    }
    bool withdraw(double amount)
    {
        if (amount <= 0 || amount > balance)
        {
            return false;
        }
        balance -= amount;
        return true;
    }
    void printDetails()
    {
        cout << "Account Holder name is: " << name << endl;
        cout << "Account Number is: " << accountNumber << endl;
        cout << "Account balance is: " << balance << endl;
    }
    void inVoice()
    {
        cout << "1.Deposit Amount" << endl;
        cout << "2.Withdraw Amount" << endl;
        cout << "3.Show Information" << endl;
        cout << "4.Exit" << endl;
    }
   ~ BankAccount(){

    }

int main()
{
    BankAccount acc;

    string name;
    int accountNumber;
    double balance;

    cout << "Enter Account Holder name: ";
    getline(cin, name);
    acc.set_name(name);

    cout << "Enter Account Number: ";
    cin >> accountNumber;
    acc.set_accountNumber(accountNumber);

    cout << "Enter your balance:";
    cin >> balance;
    acc.set_balance(balance);
    int choice;
    do
    {
        acc.inVoice();

        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double amount;
            cout << "Enter the amount you want to deposit: ";
            cin >> amount;
            if (acc.deposit(amount))
            {
                cout << "Amount has been Deposited." << endl
                     << "Your Current Balance is: " << acc.get_balance() << endl;
            }
            else
            {
                cout << "Invalid Amount Entered!" << endl;
            }
            break;
        }
        case 2:
        {
            double amount;
            cout << "Enter the amount you want to withdraw: ";
            cin >> amount;
            if (acc.withdraw(amount))
            {
                cout << "Amount has been Withdrawn" << endl
                     << "Your Current Balance is: " << acc.get_balance() << endl;
            }
            else
            {
                cout << "Invalid Amount Entered!" << endl;
            }
            break;
        }
        case 3:
            acc.printDetails();
            break;
        case 4:
            cout << "Have a nice day!" << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
    } while (choice != 4);
}