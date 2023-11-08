// Logical arithmetic and comparison operators.
#include <iostream>
using namespace std;

int main (){
    //arithmetic operators
    int num1=10, num2=30;//declaration and initialization
    bool val1 = true val2 = false;
    //addition operator '+'
    cout<<"sum of the two numbers"<< num1+num2<<"\n";
    //subtraction operator '-'
    cout<<" difference of the two numbers"<< num1-num2<<"\n";
    //multipication operator *
    cout<<"product of thr two numbers"<< num1*num2<<"\n";
    //division operator /
    cout<<"division of the two numbers"<< num1/num2<<"\n";
    //modulus operator %
    cout<<"reminder when divided by 2"<< num1%num2<<"\n";
    //increment operator ++
    cout<<"increase num1 by 1"<< ++num1<<"\n";
    //decrement operator --
    cout<<"decrease num1 by 1"<<--num1<<"\n";
    //****comparison operators****
    //Greator than operator '>'
    cout<<"num1 '>' num2:"<< (bool)(num1 > num2)<<"\n";
    //less than operator '<'
    cout<<"num1 '<' num2:"<<(bool)(num1 < num2)<<"\n";
    //equal to operator ==
    cout<<" num 1 '==' num2:"<< (bool) (num1 == num2)<<"\n";
    //not equal to operator !=
    cout<<" num1 '!=' num2:"<< (bool) (num1 != num2)<<"\n";
    //***Bolean operators***
    //Boolean operators &&
    cout<<"val1 '&&' val2:"<< (val1 && val2)<<"\n";
    //Boolean operator ||
    cout<< " val1 '||' val2:"<< (val1 || val2)<<"\n";
    //Boleen operator !
    cout <<" val1 '!' val2" << (val1 ! val2)<< "\n"


    return 0;

}