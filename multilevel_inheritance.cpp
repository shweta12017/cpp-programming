#include<iostream>
using namespace std;
class student
{
    public:
    int roll_no;
    string name, department;
    void getdata()
    {
        cout<<"enter the roll number:";
        cin>>roll_no;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the department:";
        cin>>department;
    }
    void display()
    {
        cout<<"roll no:"<<roll_no<<endl;
        cout<<"name of student:"<<name<<endl;
        cout<<"department:"<<department<<endl;
    }
};
class exam:public student
{
    public:
    int marks[5];
    int total=0;
    public:
    void calculate()
    {
        cout<<"marks of 5 subjets:";
        for(int i=0;i<5;i++){
            cin>>marks[i];
            total=total+marks[i];
        }
    }
    void displaytotal()
    {
        cout<<"total marks:"<<total<<endl;
    }
};
class percentage:public exam
{
    public:
    void displayper()
    {
        cout<<"percentage:"<<total/5<<endl;
    }
};
int main()
{
    percentage p;
    p.getdata();
    p.calculate();
    p.display();
    p.displaytotal();
    p.displayper();
    return 0;
}

/*enter the roll number:68
enter the name:shweta
enter the department:cse
marks of 5 subjets:92
93
96
94
95
roll no:68
name of student:shweta
department:cse
total marks:470
percentage:94*/