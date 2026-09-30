#include<iostream>
using namespace std;
class add
{
    private:
    int x;
    public:
    void getdata()
    {
        cin>>x;
    }
    add operator+(add n)
    {
        add temp;
        temp.x=x+n.x;
        return temp;
    }
    void display()
    {
        cout<<"sum:"<<x<<endl;
    }
};
int main()
{
    add n1,n2,n3,n4;
    cout<<"enter first number:";
    n1.getdata();
    cout<<"enter second number:";
    n2.getdata();
    n3=n1+n2;
    n3.display();
    cout<<"enter third number:";
    n4.getdata();
    n3=n1+n2+n4;
    n3.display();
    return 0;
}
/*enter first number:6
enter second number:9
sum:15
enter third number:9
sum:24*/