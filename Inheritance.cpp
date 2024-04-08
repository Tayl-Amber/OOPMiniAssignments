 #include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
    int numFruit;
    Fruit(int numFruit=0):numFruit{numFruit}{}

    void setNumFruit(int numFruit)
    {
        this->numFruit = numFruit;
    }
    int getNumFruit() const
    {
        return numFruit;
    }
   void addFruits(int num){
     numFruit += num;
   }
   void removeFruit(int num){
    if(num>numFruit){
        cout << "Invalid Numbers of fruits are entered" << endl;
    }else {
        numFruit -= num;
    }

   }
};

class Apple : public Fruit
{
    public:
    void setNumApple(int num)
    {
        setNumFruit(num);
    }
    int getNumApple() const
    {
        return getNumFruit();
    }
};

class Mango : public Fruit
{
    public:
    void setNumMango(int num)
    {
        setNumFruit(num);
    }
    int getNumMango() const 
    {
        return getNumFruit();
    }
};

int main(){
    Apple app;
    Mango man;

    app.setNumApple(3);
    man.setNumMango(5);

    app.addFruits(5);
    man.addFruits(3);

    app.removeFruit(4);
    man.removeFruit(5);

    cout << "The Apples are: " << app.getNumApple() << endl;
    cout << "The Mangoes are: " << man.getNumMango() << endl;
    cout << "The Total are: " << (app.getNumApple() + man.getNumMango()) << endl;

} 

