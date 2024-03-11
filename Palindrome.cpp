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
            // If characters don't match, the number is not a palindrome
            return false;
        }
    }
    // If all characters match, the number is a palindrome
    return true;
         }
            
int main(){
            
            

}