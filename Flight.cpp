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
    Flight(int flight = 0, string destination = "NA", float fuel = 0.0, float distance = 0.0)
        : flight{flight}, destination{destination}, fuel{fuel}, distance{distance}
    {
    }
    void setFlightNumber(int flight)
    {
        this->flight = flight;
    }
    void setDestination(string destination)
    {
        this->destination = destination;
    }
    void setDistance(float distance)
    {
        this->distance = distance;
    }
    void calFuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance >= 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else if (distance > 2000)
        {
            fuel = 2200;
        }
        cout << "The Fuel used is: " << fuel << endl;
    }
    void showInfo()
    {
        cout << "Your Number of Flights are: " << flight << endl;
        cout << "Your desired Destination is: " << destination << endl;
        cout << "The Covered Distance is: " << distance << endl;
        cout << "The Consumed Fuel is: " << fuel << endl;
    }
    void displayMenu()
    {
        cout << endl
             << "1.Calculate Fuel" << endl;
        cout << "2.Show Information" << endl;
        cout << "3.Exit" << endl
             << endl;
    }
};

int main()
{
    string destination;
    int flights;
    float distance;
    float fuel;

    Flight flight(flights, destination, distance, fuel);

    int choice = 0;
    do
    {
        flight.displayMenu();

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number of flights: ";
            cin >> flights;
            flight.setFlightNumber(flights);

            cout << "Enter your desired destination: ";
            cin.ignore();
            getline(cin, destination);
            flight.setDestination(destination);
            if (destination.empty())
            {
                cout << "Invalid Destination!" << endl;
            }

            cout << "Enter the distance you want to cover: ";
            cin >> distance;
            flight.setDistance(distance);

            flight.calFuel();
            break;
        case 2:
            flight.showInfo();
            break;
        case 3:
            cout << "Have a nice day!" << endl;
            break;
        default:
            cout << "Invalid Choice Entered!" << endl;
            break;
        }
    } while (choice != 3);
}