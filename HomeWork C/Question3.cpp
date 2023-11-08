#include <iostream>
#include <string>
using namespace std;

int main(){
    string name; //declaring variables
    int score;
    cout<<"Student full name\t"; // asking the user to input student full name
    cin>>name;
    cout<<"enter score\t"; // asking user to input student score.
    cin>>score;

    switch (score/100){
        case 70:
        cout<<"grade A";
        break;
        case 60:
        cout<<"grade B";
        break;
        case 50:
        cout<<"grade C";
        break;
        case 40:
        cout<<"grade F";
        break;
        default:
        cout<<"Invalid score";
        break;
        }
return 0;
}