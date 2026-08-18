#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator, denominator;

public:
    void accept()
    {
        cin >> numerator;
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        numerator = (f1.numerator * f2.denominator) +
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void sub(Fraction f1, Fraction f2)
    {
        numerator = (f1.numerator * f2.denominator) -
                    (f2.numerator * f1.denominator);

        denominator = f1.denominator * f2.denominator;
    }

    void display()
    {
        cout << "Numerator = " << numerator << endl;
        cout << "Denominator = " << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, f3, f4;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "\nEnter second fraction:\n";
    f2.accept();

    f3.add(f1, f2);
    f4.sub(f1, f2);

    cout << "\nAddition:\n";
    f3.display();

    cout << "\nSubtraction:\n";
    f4.display();

    return 0;
}

/*Enter first fraction:
8
9

Enter second fraction:
8
10

Addition:
Numerator = 152
Denominator = 90

Subtraction:
Numerator = 8
Denominator = 90*/