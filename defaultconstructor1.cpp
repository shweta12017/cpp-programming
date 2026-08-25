//information of emplyoee uding default constructor
#include<iostream>
using namespace std;
class employee
{
    private:
    string id;
    string name;
    float salary;
    public:
    employee()    //default constructor
    {
        cout<<"Enter the employee id:";
        cin>>id;
        cout<<"Enter the employee name:";
        cin>>name;
        cout<<"Enter the employee salary:";
        cin>>salary;
    }
    void display()
    {
        cout<<"Employee ID:"<<id<<endl;
        cout<<"Employee Nmae:"<<name<<endl;
        cout<<"employee Salary:"<<salary<<endl;
    }
};
int main()
{
    employee e;
    e.display();
    return 0;
}

/*Enter the employee id:2456324
Enter the employee name:shweta
Enter the employee salary:30000
Employee ID:2456324
Employee Nmae:shweta
employee Salary:30000*/