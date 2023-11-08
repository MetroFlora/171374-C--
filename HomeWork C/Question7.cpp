#include <iostream>

using namespace std;

int main()
{
    int fee, days, book;

    cout << "\n";
    cout << "Enter the duration you have been late to return the book in Days: " << endl;
    cin >> days;

    cout << "Choose type of book: " << endl;
    cout << "1. Childrens book" << endl;
    cout << "2. Other Book" << endl;
    cin >> book;

    if (days < 7)
    {
        if (book == 1)
        {
            cout << "children books 5 ";
            return 0;
        }
        else
        {
            cout << "Reference books 7 ";
            return 0;
        }
    }
    if (days > 8 && days < 30)
    {
        if (book == 1)
        {
            cout << "Reference children book  10 ";
        }
        else
        {
            cout << " books 15 ";
        }
    }
    if (days > 31 && days < 60)
    {
        if (book == 1)
        {
            cout << "children book 10 ";
        }
        else
        {
            cout << "Reference 25";
        }
    }
    if (days > 61 && days < 80)
    {
        if (book == 1)
        {
            cout << "Children book  30 ";
        }
        else
        {
            cout << "Reference 40";
        }
    }
    if (days >= 81)
    {
        if (book == 1)
        {
            cout << "children book 50 ";
        }
        else
        {
            cout << "Reference books 100 ";
        }
    }
}