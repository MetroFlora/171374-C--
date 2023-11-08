//input long string
#include <iostream>
//comment mode
using namespace std;
int main ()
{ 
    string first_name, last_name, full_name, favorite_meal, favorite_movie; //declare string variables
    cout<< "enter first name\n";
    getline (cin, first_name);//user input first name
    cout<<"enter last name\n";
    getline (cin, last_name);//user input last name
    cout<<"your full name\n";
    getline (cin, full_name);//user input full name
    cout<<"enter favorite meal\n";
    getline (cin, favorite_meal);// user input favorite meal 
    cout<<"enter favorite movie\n";
    getline (cin, favorite_movie);//user input favorite movie

    return 0;


    
}