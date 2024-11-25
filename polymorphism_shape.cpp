#include <iostream>

using namespace std;

class Shape
{
    public:

    virtual void calculateArea() = 0;
<<<<<<< HEAD

=======
>>>>>>> a1ae9c7b7c502a7dacc5c53958b61a62997c87b5
};

class Circle : public Shape
{
    public:

    float c, r;
    const float pi = 3.14;

    void circleInput()
    {
        cout << "Enter the circumference: " ;
        cin >> c;
    }
    

    void calculateArea()
    {
        r = c / (2 * pi);

        cout << "Radius is: " << r << endl;
    }
};

class Rectangle : public Shape
{
    public:

    int l, w;
    int area;

    void rectangleInput()
    {
        cout << "Enter the length: " ;
        cin >> l;
        cout << "Enter the width: ";
        cin >> w;
    }

    void calculateArea()
    {
        area = l * w;

        cout << "Area of Rectangle: " << area << endl;
    }
};

int main()
{
    Shape *s1; // pointer

    Circle c1;
    c1.circleInput();
    s1 = &c1;
    s1->calculateArea();

    cout << "-----------------------" << endl;

    Rectangle r1;
    r1.rectangleInput();
    s1 = &r1;
    s1->calculateArea();
}
