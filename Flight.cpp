#include <iostream>
#include <string>

using namespace std;

class Flight
{
private:
    int flight;
    string destination;
    float fuel;
    float distance;

public:
    Flight(int flight = 0 , string destination = "NA" , float fuel = 0.0 , float distance=0.0)
    :flight{flight},destination{destination},fuel{fuel},distance{distance}{
    }
    void setFlightNumber(int flight){
        this->flight = flight;
    }
    void setDestination(string destination){
        this->destination = destination;
    }
    void setDistance(float distance){
        this->distance = distance;
    }
    void calFuel(){
        if(distance <= 1000){
            fuel = 500;
        }else if(distance >= 1000 && distance <= 2000){
            fuel = 1100;
        }else if(distance > 2000){
            fuel = 2200;
        }
        cout << "The Fuel used is: " << fuel << endl;
    }
    void showInfo(){
        cout << "Your Number of Flights are: " << flight << endl;
        cout << "Your desired Destination is: " << destination << endl;
        cout << "The Covered Distance is: " << distance << endl;
        cout << "The Consumed Fuel is: " << fuel << endl;
    }
};