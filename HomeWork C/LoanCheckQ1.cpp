#include <iostream>
#include <string>
using namespace std;

int main (){
    int age,balance,Period; //Declare variables and initialization
    string message;
    bool crb;
    cout<<"age\t"; //ask user to input age.
    cin>>age;
    cout<<"balance\t"; // ask user to input balance
    cin>>balance;
    cout<<"period\t"; //ask user to input time period
    cin>>Period;
    cout<<"CRB status Good enter 1  Not Good enter 0:\t"; // Ask user their CRB standing.
    cin>>crb;
    message=(age>22&&balance>50000&&Period>6&&crb==1)?"Approve Loan\n":"Not Approve Loan\n"; //short hand if
    cout<<message; 
    return 0;
}