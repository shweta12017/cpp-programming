#include<iostream>
using namespace std;
class library
{
    int bookcount;
    string opentime;
    string closetime;
    public:
    library(int b,string o,string c)
    {
        bookcount=b;
        opentime=o;
        closetime=c;
    }
    void display()
    {
        cout<<"number of books:"<<bookcount<<endl;
        cout<<"opening time:"<<opentime<<endl;
        cout<<"closing time:"<<closetime<<endl;
    }
};
class issue_book
{
    string bookname;
    string date;
    int price;
    public:
    issue_book(string n,string d,int p)
    {
        bookname=n;
        date=d;
        price=p;
    }
    void display()
    {
        cout<<"book name:"<<bookname<<endl;
        cout<<"issue date:"<<date<<endl;
        cout<<"book price:"<<price<<endl;
    }
};
class return_book
{
    string bookname;
    string validitydate;
    public:
    return_book(string n,string v)
    {
        bookname=n;
        validitydate=v;
    }    
    void display()
    {
         cout<<"book name:"<<bookname<<endl;
         cout<<"validate date:"<<validitydate<<endl;
    }
};
int main()
{
    library l(2000, "10am", "5pm");
    issue_book i("cindrella", "20 jan", 200);
    return_book r("cindrella", "30 jan");
    l.display();
    i.display();
    r.display();
    return 0;
}

/*number of books:2000
opening time:10am
closing time:5pm
book name:cindrella
issue date:20 jan
book price:200
book name:cindrella
validate date:30 jan*/