#include <iostream>
#include <string.h>

using namespace std;

class Book
{
    private:

    char book_nm[50];
    char book_author[30];
    int price;

    public:

    void set(char book_nm[], char book_author[], int price)
    {
        
        strcpy(this->book_nm, book_nm);
        strcpy(this->book_author, book_author);
        this->price = price;
        
    }

    void get()
    {
        if (price > threshold)
        {
            cout 
            <<"-------------------------------" << endl
            << "Book Name: " << book_nm << endl
            << "Book Author: " << book_author << endl
            << "Book Price: " << price << endl
            <<"-------------------------------" << endl;
        }
        
    }

};



int main()
{
    int threshold;
    cout << "Enter a price threshold: ";
    cin >> threshold;

    int n = 5;

    Book books[n];

    books[0].set("AI", "Andrew Ng", 400);
    books[1].set("DSA", "Narasimha Karumanchi", 500);
    books[2].set("OOP", "Bjarne Stroustrup", 600);
    books[3].set("DB", "C.J. Date", 450);
    books[4].set("ML", "Peter Flach", 350);

    for (int i = 0; i < n; i++)
    {
        books[i].get();
    }
    
    
    
}