#include <iostream>

using namespace std;

class Teacher
{
    public:

    void id()
    {
        cout << "Student ID....." << endl;
    }
};

class Student : public Teacher
{
    public:

    void marks()
    {
        cout << "Student marks....";
    }
};

int main()
{
    Student stud;

    stud.id();
    stud.marks();
}