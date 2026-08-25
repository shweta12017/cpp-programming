//information of employee using parameterized constructor
#include<iostream>
using namespace std;
class employee
{
    public:   
    string id;
    string name;
    float salary;
    public:
    employee(string i, string n, float s)    //parameterized constructor
    {
        id =i;
        name=n;
        salary=s;
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
    string id;
    string name;
    float salary;
    employee emp;
    cout<<"Enter the employee id:";
    cin>>emp.id;
    cout<<"Enter the employee name:";
    cin>>emp.name;
    cout<<"Enter the employee salary:";
    cin>>emp.salary;
    //employee e(emp.id, emp.name, emp.salary);   //parameterized constructor call
    emp.display();
    return 0;
}

/*Enter the employee id:EN25273579
Enter the employee name:Shweta  
Enter the employee salary:300000
Employee ID:EN25273579
Employee Nmae:Shweta
employee Salary:300000*/