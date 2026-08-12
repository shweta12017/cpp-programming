#include<iostream>
#include<string>
using namespace std;

class employee
{
    private:
    string id;
    string name;
    float salary;
    string department;
    public:
    void input()
    {
        cout<<"Enter the employee id:";
        cin>>id;
        cout<<"Enter the employee name:";
        cin>>name;
        cout<<"Enter the salary:";
        cin>>salary;
        cout<<"Enter the department:";
        cin>>department;
    }
    void display()
    {
        cout<<"id:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Department:"<<department<<endl;
    } 
};
int main()
{
    employee e;
    e.input();
    e.display();
    return 0;
}

/*Enter the employee id:EN2524348
Enter the employee name:Shweta
Enter the salary:200000
Enter the department:IT
id:EN2524348
Name:Shweta
Salary:200000
Department:IT*/