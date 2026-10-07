#include<iostream>
using namespace std;
class shape
{
    public:
    virtual double area()
    {
        return 0;
    }
};
class square: public  shape
{
    int l;
    public:
    square(int x)
    {
        l=x;
    }
    double area()override
    {
        return l*l;
    }
};
class rectangle: public  shape
{
    int l,b;
    public:
    rectangle(int x, int y)
    {
        l=x;
        b=y;
    }
    double area()override
    {
        return l*b;
    }
};
class circle: public  shape
{
    int r;
    public:
    circle(int x)
    {
        r=x;
    }
    double area()override
    {
        return 3.14*r*r;
    }
};
int main()
{
    shape *ptr;
    int l,b,r;
    cout<<"enter the side of square:";
    cin>>l;
    square s(l);
    cout<<"enter the length and side of rectengle:";
    cin>>l>>b;
    rectangle R(l,b);
    cout<<"enter the radius of circle:";
    cin>>r;
    circle c(r);
    ptr=&s;
    cout<<"area of square:"<<ptr->area()<<endl;
    ptr=&R;
    cout<<"area of rectangle:"<<ptr->area()<<endl;
    ptr=&c;
    cout<<"area of circle:"<<ptr->area()<<endl;
    return 0;
}

/*enter the side of square:4
enter the length and side of rectengle:5
6
enter the radius of circle:7
area of square:16
area of rectangle:30
area of circle:153.86*/