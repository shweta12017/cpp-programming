#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    c1 = complex(r1, i1);
    c2 = complex(r2, i2);

    c3 = c1 + c2;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Addition: ";
    c3.display();
    return 0;
}

/*Enter real and imaginary part of first complex number: 5
9
Enter real and imaginary part of second complex number: 8
6
First complex number: 5+9i
Second complex number: 8+6i
Addition: 13+15i*/