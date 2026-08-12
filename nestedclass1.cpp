#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    string name;
    int rollno;
    float marks;
    private:
    void input()
    {
        cout<<"Enter the student name:";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter the marks:";
        cin>>marks;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    } 
    public:
    void process(){
        input();
        display();
    }
};
int main()
{

    student s;
    s.process();
   // s.input();
    //s.display();
    return 0;
}
