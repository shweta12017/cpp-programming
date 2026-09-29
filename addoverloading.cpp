#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator obj;

    int a, b, c;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum of two integers = " << obj.add(a, b) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Sum of three integers = " << obj.add(a, b, c) << endl;

    cout << "Enter two floating-point numbers: ";
    cin >> x >> y;
    cout << "Sum of two floating-point numbers = " << obj.add(x, y) << endl;

    return 0;
}
/*Enter two integers: 4
7
Sum of two integers = 11
Enter three integers: 8
5
9
Sum of three integers = 22
Enter two floating-point numbers: 5.5
6.6
Sum of two floating-point numbers = 12.1*/