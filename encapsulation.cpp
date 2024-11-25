#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    private:

    int id;
    char name[50];

    public:

    void set(int id, char name[])
    {
        this->id = id;
        strcpy(this->name,"Kinjal");
    }

    void get()
    {
        cout << "Student ID is: " << this-> id << endl;
        cout << "Student Name is: " << this-> name << endl;
    }
};

int main()
{
    Student stud;

    stud.set(1, "Kinjal");
    stud.get();
}