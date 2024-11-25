#include <iostream>

using namespace std;

class math
{
    public:

    void mul(int a, int b)
    {
        cout << "Multiplication is: " << a * b << endl;
    }

};

class math2 : public math
{
    public:

    void mul(int c, int d)
    {
        cout << "Multiplication is: " << c * d << endl;
    }
};

int main()
{
    math2 m;

    m.mul(3,4);
    m.mul(2,8);
}