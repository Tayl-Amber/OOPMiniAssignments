#include<iostream>

using namespace std;
class Even{
private:
int num;
public:
Even(int num = 0):num{num}{
    cout << "Constructor is called!" << endl;
}
void setData(int num);
bool calculateEven();
void display();
};
void Even :: setData(int num){
this->num = num;
}
bool Even :: calculateEven(){
    return (num%2 == 0);
}
void Even :: display(){
    int num;
    if(calculateEven()){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is not Even" << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    Even even(num);
    even.setData(num);
    even.display();
    
}