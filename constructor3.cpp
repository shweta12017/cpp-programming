#include<iostream>
using namespace std;
class Product
{
    private:
    string name;
    int quntity;
    float price;
    public:
    Product()    //default constructor
    {
        name="Unknown";
        quntity=0;
        price=0;
    }
    Product(string n, int q, float p)   //parameterized constructor
    {
        name=n;
        quntity=q;
        price=p;
    }
    Product(const Product &p)    //copy constructor
    {
        name=p.name;
        quntity=p.quntity;
        price=p.price;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"quntity:"<<quntity<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"total cost:"<<quntity*price<<endl;
    }
};
int main()
{
    string name;
    int quntity;
    float price;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the quntity:";
    cin>>quntity;
    cout<<"Enter the price:";
    cin>>price;
    Product p(name, quntity, price);
    p.display();
    return 0;
}

/*Enter the name:cake
Enter the quntity:50
Enter the price:300
name:cake
quntity:50
price:300
total cost:15000*/