#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    protected:

    char name[50];
    int emp_id;

    public:

    virtual void calculateSalary() = 0;
    void displayDetails()
    {
        cout 
        << "Employee Name: " << name << endl
        << "Employee ID: " << emp_id << endl;
    }

    void set(char name[50], int emp_id)
    {
        strcpy(this-> name, name);
        this-> emp_id = emp_id;
    }
};

class FullTimeEmployee : public Employee
{
    private:

    int monthlySalary;

    public:

    void setFullTimeDetail(int monthlySalary)
    {
        this -> monthlySalary = monthlySalary;
    }

    void calculateSalary()
    {
        cout << "Full Time Employee Salary: " << monthlySalary << endl;
    }
};

class PartTimeEmployee : public Employee
{
    private:

    int hoursWorked;
    int salary;

    public:

    void setPartTimeDetail(int hoursWorked, int salary)
    {
        this-> hoursWorked = hoursWorked;
        this -> salary = salary;
    }

    void calculateSalary()
    {
        cout 
        << "Hours Worked: " << hoursWorked << endl
        << "Part-Time employee salary: " << salary << endl;
    }

};

int main()
{
    FullTimeEmployee fte;

    fte.set("John", 1);
    fte.displayDetails();
    fte.setFullTimeDetail(20000);
    fte.calculateSalary();

    cout << "------------------------------" << endl;

    PartTimeEmployee pte;

    pte.set("Johnny", 2);
    pte.displayDetails();
    pte.setPartTimeDetail(5,8000);
    pte.calculateSalary();
}
