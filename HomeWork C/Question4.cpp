#include <iostream>

using namespace std;
int main(){
    int a,b; //declaring variable and initializing
    cout<<"enter number for a\t"; //user enter number for a
    cin>>a;
    cout<<"enter number for b\t"; //user enter number for b
    cin>>b;
    
    int choice;
    if (a>b){
      choice = 1;
    }
    else if (a==b){
      choice = 2;
    }
    else if (b>a){
      choice = 3;
    }

    switch (choice){
      case 1: { 
         cout<<a<<"is the larger number.";
         break;
      }
      case 2: {
         cout<<"the two numbers are equal";
         break;
      }
      case 3: {
         cout<<b<<" is the larger number";
         break;
      }
      default:
      cout<<"please enter a number";
      break;
    }
    return 0;
   
}
