#include <iostream>
using namespace std;
class Area
{
public:
    float area(float s)
    {
        return s*s;
    }
    float area(float l, float b)
    {
        return l*b;
    }
    double area(double r)
    {
        return 3.14*r*r;
    }
    double area(double base, double h, int)
    {
        return 0.5 * base * h;
    }
};

int main()
{
    Area a;
    float s,l,b;
    double r, base, h;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of Square = " << a.area(s) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >>l>>b;
    cout << "Area of Rectangle = " << a.area(l,b) << endl;

    cout << "\nEnter radius of circle: ";
    cin >>r;
    cout << "Area of Circle = " << a.area(r) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >>h;
    cout << "Area of Triangle = " << a.area(base, h,0) << endl;

    return 0;
}
/*Enter side of square: 40
Area of Square = 1600

Enter length and breadth of rectangle: 15
2
Area of Rectangle = 30

Enter radius of circle: 7
Area of Circle = 153.86

Enter base and height of triangle: 6
8
Area of Triangle = 24*/