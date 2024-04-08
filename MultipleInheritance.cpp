#include<iostream>
#include<string>
            
using namespace std;
            
class Mammals{
  public:
  void display(){
    cout << "I am Mammal" << endl;
  }
};
class Marine{
    public:
    void display(){
        cout << "I'm Marine" << endl;
    }
};

class BlueWhale: public Mammals, public Marine{
    public:
    void display(){
    cout << "I'm both" << endl;
}
            };
            
int main(){
            
            Mammals mamm;
            Marine mar;
            BlueWhale blue;

            mamm.display();
            mar.display();
            blue.display();

            blue.Mammals::display();


}