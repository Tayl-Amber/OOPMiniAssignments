
#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int min;
    int hour;
    public:
    void set_data(int min, int hour){
        this->min = min;
        this->hour = hour;
    }
    void display(){
        cout << "Mins are: " << min << endl;
        cout << "Hours are: " << hour << endl;
    }

    Time sum(Time &time){
        Time result;
        result.min = min + time.min;
        result.hour = hour + time.hour;
        return result;
    }
};

int main(){
    Time 
}

