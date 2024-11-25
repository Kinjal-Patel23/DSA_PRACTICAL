#include <iostream>

using namespace std;

class Teacher
{
    public:

    virtual void id() = 0; // method declare
    virtual void name() = 0; // method declare

};

class Student : public Teacher
{
    public:

    void id() // implementation 
    {
        cout << "ID: 1" << endl;
    }

    void name() // implementation
    {
        cout << "NAME: Kinjal" << endl; 
    }
};

int main()
{
    Student stud;

    stud.id();
    stud.name();
    
}