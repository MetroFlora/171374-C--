#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    int light = 0;

    while (true)
    {
        switch (light)
        {
        case 0:
            cout << "red light" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            light = 1;
            break;

        case 1:
            this_thread::sleep_for(chrono::seconds(5));
            light = 2;
            break;

        case 2:
            cout << "yellow light" << endl;
            this_thread::sleep_for(chrono::seconds(2));
            light = 3;
            break;

        case 3:
        cout << "Green light" << endl;
            this_thread::sleep_for(chrono::seconds(4));
            light = 4;
            break;
        }
        
}
return 0;
}