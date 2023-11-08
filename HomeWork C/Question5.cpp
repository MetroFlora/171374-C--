#include <iostream>
using namespace std;
int main (){
    float base, height, area, radius, length, width; //decration of variables
    int choice;
    cout<<"Calculate the area of: \n";
    cout<<"Enter 1 = Circle, 2 = Triangle, 3 = Rectangle \n";
    cout<<"Enter your choice:\t\n"; //user enter shape
    cin >> choice;

    switch(choice){
        case 1:
            {
                cout << "Please enter the radius: ";
                    cin >> radius;
                    area = 3.14 * (radius * radius);
                    cout << "Your area is: " << area; //calculate area
                break;
            }
        case 2:
            {
                cout << "Please enter the base and height: ";
                    cin >> base >> height;
                    area = 0.5 * (base * height); //can be written as (base * height) / 2
                    cout << "Your area is: " << area; //calculation of area
                break;
        }
        case 3:
            {
                cout << "Please enter the length and width: ";
                    cin >> length >> width;
                    area = length * width;
                    cout << "Your area is: " << area; //calculation of area
                break;
        }
default:    {
    cout<<"invalid choice";
        }
    }
    return 0;
}