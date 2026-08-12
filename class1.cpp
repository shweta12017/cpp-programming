#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    string name;
    int rollno;
    float marks;
    public:
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
};
int main()
{

    student s;
    s.input();
    s.display();
    return 0;
}

/*Enter the student name:shweta
Enter roll no:68
Enter the marks:98
Name:shweta
Roll no:68
Marks:98*/