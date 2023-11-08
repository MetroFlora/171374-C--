#include <iostream>
using namespace std;

int main (){
    int age;
    cout <<"please Enter the age:"; 
    cin>>age;
    string message=(age>=4)?"admmit\n":"failed\n";
    cout<<message;
    return 0;
}