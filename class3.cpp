#include<iostream>
#include<string>
using namespace std;

class product
{
    private:
    string id;
    string name;
    int quntity;
    float price;
    float totalcost;
    public:
    void input()
    {
        cout<<"Enter the product id:";
        cin>>id;
        cout<<"Enter the product name:";
        cin>>name;
        cout<<"Enter the quntity:";
        cin>>quntity;
        cout<<"Enter the price:";
        cin>>price;
    }
    void calculate(){
       totalcost=(quntity*price);
    }
    void display()
    {
        cout<<"id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Quntity:"<<quntity<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Totalcost:"<<totalcost<<endl;
    } 
};
int main()
{
    product p;
    p.input();
    p.calculate();
    p.display();
    return 0;

}

/*Enter the product id:EN243567
Enter the product name:cake
Enter the quntity:40
Enter the price:200
id:EN243567
Name:cake
Quntity:40
Price:200
Totalcost:8000*/