#include<iostream>
#include<string>
            
using namespace std;
            
class Palindrome{
private:
         int n;   
public:
bool checkPalindrome();
void display();
            int t;
};
         bool Palindrome ::    checkPalindrome(){
string str = to_string(n);
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
     
        if (str[i] != str[len - i - 1]) {
         
            return false;
        }
    }
   
    return true;
         }
            
int main(){
            
            Palindrome p;
            int num;

           cout << "Enter a number: ";
    cin >> num;
}