#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    int s, m, h, a, num;
    num = a = 0;

    while(num == 0)
    {
        cout << "Enter hour: " << endl;
        cin >> h;
        cout << "Enter minute: " << endl;
        cin >> m;
        cout << "Enter second: " << endl;
        cin >> s;

        if(h < 24 && m < 60 && s < 60) // time will increment if condition is satisfied
        {
            num++;
        }
        else
            system("cls"); // clears console if not satisfied
    }
    while(a == 0)
    {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;

        Sleep(1000); // pauses right before program execution
        s++;
        if(s > 59)
        {
            s = 0;
            m++;
        }
        if(m > 59)
        {
            m = 0;
            h++;
        }
        if(h > 24)
        {
            h = 0;
        }
    }
}
