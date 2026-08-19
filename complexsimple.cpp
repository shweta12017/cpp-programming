#include<iostream>
using namespace std;
class complex
{
    private:
    int real1, real2, imag1, imag2, real, imag;
    public:
    void input()
    {
        cout<<"Enter complex number 1:";
        cin>>real1>>imag1;
        cout<<"Enter complex number 2:";
        cin>>real2>>imag2;
    }
       void add()
    {
        real = real1 + real2;
        imag = imag1 + imag2;
        cout<<"Addition of complex numbers\n";
        cout << real << " + " << imag << "i";
    }
    void sub()
    {
        real = real1- real2;
        imag = imag1 - imag2;
        cout<<"\nSubstraction of complex numbers\n";
        cout << real << " + " << imag << "i";
    }

};
int main()
{
    complex c;
    c.input();
    c.add();
    c.sub();

    return 0;
}

/*Enter complex number 1:8 5
Enter complex number 2:3 6
Addition of complex numbers
11 + 11i
Substraction of complex numbers
5 + -1i*/