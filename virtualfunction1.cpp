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
    cout<<"area of square:"<<s.area()<<endl;
    cout<<"area of rectangle:"<<R.area()<<endl;
    cout<<"area of circle:"<<c.area()<<endl;
    return 0;
}

/*enter the side of square:5
enter the length and side of rectengle:8
5
enter the radius of circle:7
area of square:25
area of rectangle:40
area of circle:153.86*/