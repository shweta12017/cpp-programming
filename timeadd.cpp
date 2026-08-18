#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Hours = ";
        cin >> hours;

        cout << "Minutes = ";
        cin >> minutes;

        cout << "Seconds = ";
        cin >> seconds;
    }

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            minutes = minutes + 1;
            seconds = seconds - 60;
        }

        if (minutes >= 60)
        {
            hours = hours + 1;
            minutes = minutes - 60;
        }
    }

    void display()
    {
        cout << "Hours = " << hours << endl;
        cout << "Minutes = " << minutes << endl;
        cout << "Seconds = " << seconds << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    t3.add(t1, t2);

    cout << "\nAddition of Time:\n";
    t3.display();

    return 0;
}

/*Enter first time:
Hours = 2
Minutes = 45
Seconds = 30

Enter second time:
Hours = 5
Minutes = 40
Seconds = 50

Addition of Time:
Hours = 8
Minutes = 26
Seconds = 20*/