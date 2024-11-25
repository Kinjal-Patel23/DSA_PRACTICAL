#include <iostream>

using namespace std;

class Vehicle
{
    public:

    void x()
    {
        cout << "Vehicle......." << endl;
    }    
};

class Car : public Vehicle
{
    public:

    void y()
    {
        cout << "BMW CAR......" << endl;
    }
};

class Bike : public Vehicle
{
    public:

    void z()
    {
        cout << "Scott BIKE...." << endl;
    }
};

class Bicycle : public Car, public Bike
{
    public:

    void a()
    {
        cout << "Bicycle...." << endl;
    }
};

int main()
{
    Bicycle b1;

    b1.Bike::x(); // using scope resolution operator
    b1.y();
    b1.z();
    b1.a();
}