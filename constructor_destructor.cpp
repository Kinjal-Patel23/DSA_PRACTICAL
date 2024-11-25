#include <iostream>
#include <string.h>

using namespace std;

class Car
{
    public:

    int id;
    char brand[30];

    public:

    //Default Constructor
    Car()
    {
        id = 10;
        strcpy(brand,"BMW");

        cout
        << "ID: " << id << endl
        << "Brand: " << brand << endl;
    }

    //Parameterized Constructor

    Car(int id, char brand[])
    {
        this -> id = id;
        strcpy(this -> brand, brand);

        cout 
        << "ID: " << id << endl
        << "Brand: " << brand << endl;
    }

    //Copy Constructor

    Car(Car &c2)
    {
        this -> id = c2.id;
        strcpy(this -> brand, c2.brand);
    }

    //Destructor

    ~Car()
    {
        cout << "ID: " << id  << endl << "Brand: " << brand << endl;
    }

};

int main()
{
<<<<<<< HEAD
    Car c1;  // Default

    Car c2(5,"FORD"); // parameterized
    Car c3(c2); // Copy
=======
    Car c1; // Default

    Car c2(5,"FORD"); // Parameterized
    Car c3(c2); //Copy
>>>>>>> a1ae9c7b7c502a7dacc5c53958b61a62997c87b5
    cout << "-------------------" << endl;
    cout 
    << "ID: " << c3.id << endl
    << "Brand: " << c3.brand << endl;
    cout << "--------------------" << endl;

}
