#include<iostream>
using namespace std;
class check_account
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
    check_account c("Shweta", 2345632, 50000, 50);
    c.deposite(5000);
    c.withdraw(3000);
    c.display();
    return 0;
}

/*deposited amount:5000
withdrawn amount:3000
fee applied:50
account holder name:Shweta
account number:2345632
available balance:51950*/