#include<iostream>
#include<string>

using namespace std;

class Batsman{
private:
string name;
int bcode;
int innings,notouts,runs;
float batAvg;
float calcAvg(){
    return (runs/(innings-notouts));
}

public: 
void set_name(string name){
    
}
};

int main(){


}