#include<iostream>
using namespace std;
class employee
{
    public:
    virtual double calculateBonus()
    {
        return 0;
    }
};
class manager:public employee
{
    int msalary;
    public:
    manager(int x)
    {
        msalary=x;
    }
    double calculateBonus() override
    {
        return msalary * 0.20;  
    }
};
class developer:public employee
{
    int dsalary;
    public:
    developer(int x)
    {
        dsalary=x;
    }
    double calculateBonus() override
    {
        return dsalary * 0.10;  
    }
};
int main()
{
    employee *ptr;
    int msalary,dsalary;
    cout << "Enter Manager salary: ";
    cin >> msalary;
    cout << "Enter Developer salary: ";
    cin >> dsalary;
    manager m(msalary);
    developer d(dsalary);
    ptr=&m;
    cout << "\nManager Bonus = " << ptr->calculateBonus() << endl;
    ptr=&d;
    cout << "Developer Bonus = " << ptr->calculateBonus() << endl;
    return 0;
}
/*Enter Manager salary: 80000
Enter Developer salary: 60000

Manager Bonus = 16000
Developer Bonus = 6000*/
