#include <iostream>
#include <string>

using namespace std;

class Time
{
private:
    int min;
    int hour;
    public:
    void set_data(int hour, int min){
        this->hour = hour;
        this->min = min;
    }
    void display(){
        cout << "Mins are: " << min << endl;
        cout << "Hours are: " << hour << endl;
    }
    
    Time sum(Time &time){
        Time result;
        result.hour=hour + time.hour;
		result.min=min + time.min;
		result.hour +=result.min/60;
		result.min %=60;
		return result;
		}
};

main()
{
	Time time1,time2,time3;
	
	time1.set_data(3,45);
	
	time2.set_data(2,30);
	
	time3=time1.sum(time2);
	
	time1.display();
	
	time2.display();
	
	time3.display();
	
	return 0;
}
