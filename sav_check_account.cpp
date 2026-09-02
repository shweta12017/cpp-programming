#include<iostream>
using namespace std;
class saving_account
{
    string ac_name;
    int ac_no;
    double balance;
    double interestrate;
    public:
    saving_account(string n, int a, double b, double r)    //parameterized constructor
    {
        ac_name=n;
        ac_no=a;
        balance=b;
        interestrate=r;
    }
    void deposite(double amount)
    {
        cout<<"Saving account"<<endl;
        if(amount>0){
            balance+=amount;
            cout<<"deposited amount:"<<amount<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"withdrawn amount:"<<amount<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void applyinterest()
    {
        double interest=balance*interestrate/100;
        balance+=interest;
        cout<<"applied interest:"<<interest<<endl;
    }
    void display()
    {
        cout<<"account holder name:"<<ac_name<<endl;
        cout<<"account number:"<<ac_no<<endl;
        cout<<"available balance:"<<balance<<endl;
    }
};
class check_account     //checking account
{
    string ac_name;
    int ac_no;
    double balance;
    double tran_fee;
    public:
    check_account(string n, int a, double b, double t)
    {
        ac_name=n;
        ac_no=a;
        balance=b;
        tran_fee=t;
    }
    void deposite(double amount)
    {
        cout<<"\nChecking account"<<endl;
        if(amount>0){
            balance+=amount;
            cout<<"deposited amount:"<<amount<<endl;
        }
    }
    void withdraw(double amount)
    {
        double total=amount+tran_fee;
        if(total<=balance){
            balance-=total;
            cout<<"withdrawn amount:"<<amount<<endl;
            cout<<"fee applied:"<<tran_fee<<endl;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void display()
    {
        cout<<"account holder name:"<<ac_name<<endl;
        cout<<"account number:"<<ac_no<<endl;
        cout<<"available balance:"<<balance<<endl;
    }
};
int main()
{
    saving_account s("Shweta", 23467912, 50000, 5.0); // pass the static data
    check_account c("Prashant", 7685335, 80000, 50);
    s.deposite(5000);       // pass the vale of amount for depisite
    s.withdraw(3000);       //pass the value of amount for withdraw
    s.applyinterest();
    s.display();
    c.deposite(5000);
    c.withdraw(3000);
    c.display();
    return 0;
}

/*Saving account
deposited amount:5000
withdrawn amount:3000
applied interest:2600
account holder name:Shweta
account number:23467912
available balance:54600

Checking account
deposited amount:5000
withdrawn amount:3000
fee applied:50
account holder name:Prashant
account number:7685335
available balance:81950*/