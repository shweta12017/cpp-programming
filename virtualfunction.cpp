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
    square s(10);
    rectangle R(5,6);
    circle c(9);
    cout<<s.area()<<endl;
    cout<<R.area()<<endl;
    cout<<c.area()<<endl;
    return 0;
}

/*100
30
254.34*/