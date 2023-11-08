#include <iostream>
using namespace std;

int main(){int age;
    cout <<"please enter age\n";
    cin>>age;
    if (age>=7){
        cout<<"admmit to Grade school\n";
    }
    else if (age>=5&&age<=6){
    cout<<"admit to kindergarten\n";
    }
    else if (age>=3&&age<=4){
        cout<<"admit to pre-school\n";
    }
    else if (age>=1&&age<=2){
        cout<<"admit to play group\n";
    }
    else{
        cout<<"reject\n";
    }
return 0;

}