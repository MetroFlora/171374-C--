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
    if(score>70){
        cout<<"A";
    }
    else if(score>60&&score<69){
        cout<<"B";
    }
    else if(score>50&&score<59){
        cout<<"C";
    }
    else if(score>40&&score<49){
        cout<<"D";
    }
    else {
        cout<<"F";
    }
    return 0;
}