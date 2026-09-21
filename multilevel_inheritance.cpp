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
    int m1, m2, m3, m4, m5, total;
    public:
    void calculate()
    {
        cout<<"marks of 5 subjets:";
        cin>>m1>>m2>>m3>>m4>>m5;
        total=m1+m2+m3+m4+m5;
    }
    void displaytotal()
    {
        cout<<"marks"<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
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
marks of 5 subjets:50
45
67
94
83
roll no:68
name of student:shweta
department:cse
marks50
45
67
94
83
total marks:339
percentage:67*/