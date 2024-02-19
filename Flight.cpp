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
    Flight(int flight = 0, string destination = "NA", float fuel=0.0 , float distance=0.0)
    :flight{flight},destination{destination},fuel{fuel},distance{distance}{
    }
    
};