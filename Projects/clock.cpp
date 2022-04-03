#include <iostream>
#include <windows.h>
// #include <ctime>

using namespace std;

int main ()
{
    int hour, min, sec, a, err;
    err = a = 0;

    while(err==0)
    {
        cout << "Enter Hour: " << endl;
        cin >> hour;
        cout << "Enter Minutes: " << endl;
        cin >> min;
        cout << "Enter Seconds: " << endl;
        cin >> sec;

        if(hour < 24 && min < 60 && sec < 60)
            err++;
        else
            system("cls");
    }

    while(a==0)
    {
        system("cls");
        cout << hour << ":" << min << ":" << sec << endl;

        Sleep(1000);
        sec++;
        
        if(sec > 59)
        {
            sec = 0;
            min++;
        }

        if(min > 59)
        {
            min = 0;
            hour++;
        }

        if(hour > 24)
        {
            hour = 0;
        }
    }
    return 0;
}