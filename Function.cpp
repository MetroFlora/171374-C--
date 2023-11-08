#include <iostream>
using namespace std;
int globalVar =30;
const int age =25;
void myfunction(int num1, int num2) 
{
    //function code black
    int localvar =20; //local variable declaration and iniatialiazation
    int sum = num1 + num2;
    cout<<"local variable inside function is"<<localvar;
    cout<<"sum"<<sum;
}
//comment code 
int main () {
    myfunction(2,3);
    //cout<<localvar; this is not expected to work because

    cout <<"global variables value"<<globalVar; //this is expected to work because 
    cout<<"age ="<<age;
    return 0;
}