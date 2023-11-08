#include <iostream>
using namespace std;

int main(){
    int age;
    string intrest, intrest2;
    cout<<"please enter childs age\n";
    cin>>age;
    if (age>=4&&age<=10){ //begin with primary if
    cout<<"please enter intrest:";
    cin>>intrest;
    if (intrest=="soccer"){//begin nested if
    cout<<"admit and asign to soccer play group";
    }
    if (intrest=="art"){
        cout<<"admit and assign to art group";
    }
    else {
        cout<<"admit to other group";
        //end of nested if
    }}
    else {
        cout<<"admission unsuccesfull. Age is invalid"; //end of primary if
        
    }
    return 0
}