#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float length;
    float breadth;
    float area;
    public:
    Rectangle()    //default constructor
    {
        length=0;
        breadth=0;
    }
    Rectangle(float l, float b)   //parameterized constructor
    {
        length=l;
        breadth=b;
    }
    Rectangle(const Rectangle &r)    //copy constructor
    {
        length=r.length;
        breadth=r.breadth;
    }
    void cal_area()
    {
        area=length*breadth;
    }
    void display()
    {
        cout<<"length:"<<length<<endl;
        cout<<"breadth:"<<breadth<<endl;
        cout<<"area:"<<area<<endl;
    }
};
int main()
{
    float length;
    float breadth;   
    cout<<"Enter the length:";
    cin>>length;
    cout<<"Enter the breadth:";
    cin>>breadth;
    Rectangle r(length, breadth);
    r.cal_area();
    r.display();
    return 0;
}

/*Enter the length:48
Enter the breadth:2
length:48
breadth:2
area:96*/