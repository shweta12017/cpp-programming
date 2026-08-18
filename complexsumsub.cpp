#include<iostream>
using namespace std;
class complex
{
    private:
    int real, imag;
    public:
    void accept()
    {
        cin>>real;
        cin>>imag;
    }
    void add(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void sub(complex c1, complex c2)
    {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }
    void display()
    {
        cout << real << " + " << imag << "i";
    }
};
int main()
{
    complex c1, c2, c3, c4;

    cout << "Enter first complex number (real imaginary): ";
    c1.accept();

    cout << "Enter second complex number (real imaginary): ";
    c2.accept();

    c3.add(c1, c2);
    c4.sub(c1, c2);

    cout << "\nAddition = ";
    c3.display();

    cout << "\nSubtraction = ";
    c4.display();

    return 0;
}

/*Enter first complex number (real imaginary): 9
8
Enter second complex number (real imaginary): 7
9

Addition = 16 + 17i
Subtraction = 2 + -1i*/