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
    void add(complex c1, complex c2, complex c3)
    {
        real = c1.real + c2.real + c3.real;
        imag = c1.imag + c2.imag + c3.imag;
    }
    void sub(complex c1, complex c2, complex c3)
    {
        real = c1.real - c2.real - c3.real;
        imag = c1.imag - c2.imag - c3.imag;
    }
    void display()
    {
        cout << real << " + " << imag << "i";
    }
};
int main()
{
    complex c1, c2, c3, c4, c5;

    cout << "Enter first complex number (real imaginary): ";
    c1.accept();

    cout << "Enter second complex number (real imaginary): ";
    c2.accept();

    cout << "Enter third complex number (real imaginary): ";
    c3.accept();

    c4.add(c1, c2, c3);
    c5.sub(c1, c2, c3);

    cout << "\nAddition = ";
    c4.display();

    cout << "\nSubtraction = ";
    c5.display();

    return 0;
}
