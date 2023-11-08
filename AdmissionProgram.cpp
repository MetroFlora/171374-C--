#include <iostream>
using namespace std;

int main (){
    int age;
    cout <<"please Enter the age:";
    cin>>age;

    if (age>=4){
        cout<<"admmit to school\n";
    }
    else {
        cout<<"declined! minimum age not reached\n"
    }
    return 0
}