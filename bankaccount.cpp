#include<iostream>
using namespace std;
class bankaccount
{
    public:
    int acc_no;
    string holdername;
    int balance;
    public:
    void getdata()
    {
        cout<<"Enter account number:"<<endl;
        cin>>acc_no;
        cout<<"Enter holder name:"<<endl;
        cin>>holdername;
        cout<<"Enter balance:"<<endl;
        cin>>balance;
    }
    void display()
    {
        cout<<"account number:"<<acc_no<<endl;
        cout<<"holder name:"<<holdername<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};
class savingaccount:public bankaccount
{
    public:
    void interest()
    {
        double interest=balance*0.04;
        cout<<"interest(4%):"<<interest<<endl;
    }
    void checkbalance()
    {
        if(balance>=1000)
         cout<<"minimum balance maintain"<<endl;
        else
         cout<<"minimum balance not maintain"<<endl;
    }
};
class currentaccount:public bankaccount
{
    public:
    void checkbalance()
    {
        if(balance>=5000)
         cout<<"minimum balance maintain"<<endl;
        else
         cout<<"minimum balance not maintain"<<endl;
    }  
    void transactioncharges()
    {
        cout<<"transaction charges:50"<<endl;
    }
};
class salaryaccount:public bankaccount
{
    public:
    void interest()
    {
        double interest=balance*0.03;
        cout<<"interest(3%):"<<interest<<endl;
    }  
    void transactioncharges()
    {
        cout<<"transaction charges:20"<<endl;
    }
};
int main()
{
    savingaccount s;
    currentaccount c;
    salaryaccount sal;
    cout<<"saving account"<<endl;
    s.getdata();
    s.display();
    s.interest();
    s.checkbalance();
    cout<<"\n current account"<<endl;
    c.getdata();
    c.display();
    c.checkbalance();
    c.transactioncharges();
    cout<<"\n salary account"<<endl;
    sal.getdata();
    sal.display();
    sal.interest();
    sal.transactioncharges();
    return 0;
}

/*saving account
Enter account number:
4854125
Enter holder name:
shweta
Enter balance:
8000
account number:4854125
holder name:shweta
balance:8000
interest(4%):320
minimum balance maintain

 current account
Enter account number:
488956
Enter holder name:
shweta
Enter balance:
1500
account number:488956
holder name:shweta
balance:1500
minimum balance not maintain
transaction charges:50

 salary account
Enter account number:
456416
Enter holder name:
shweta
Enter balance:
5000
account number:456416
holder name:shweta
balance:5000
interest(3%):150
transaction charges:20*/