#include<iostream>
using namespace std;
class number
{
    private:
    int n;
    public:
    void getdata()
    {
        cout<<"enter the value:";
        cin>>n;
    }
    void operator++()
    {
        ++n;
    }
    void operator-()
    {
        n=-n;
    }
    void display()
    {
        cout<<"number="<<n<<endl;
    }
};
int main()
{
    number obj;
    obj.getdata();
    cout << "original number:" << endl;
    obj.display();
    ++obj;
    cout << "After increment:" << endl;
    obj.display();
    -obj;
    cout<<"after - operator:"<<endl;
    obj.display();
    return 0;
}