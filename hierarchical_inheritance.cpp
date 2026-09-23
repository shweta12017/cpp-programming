#include<iostream>
using namespace std;
class library
{
    public:
    int itemID;
    string title;
    void getData()
    {
        cout << "Enter Item ID: ";
        cin >> itemID;
        cout << "Enter Title: ";
        cin >> title;
    }
    void display()
    {
        cout << "Item ID: " << itemID << endl;
        cout << "Title: " << title << endl;
    }
};
class Book : public library
{
public:
    string author;
    void getBookData()
    {
        getData();
        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBookData()
    {
        display();
        cout << "Author: " << author << endl;
    }
};
class Magazine : public library
{
public:
    int issueNo;
    void getMagazineData()
    {
        getData();
        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }
    void displayMagazineData()
    {
        display();
        cout << "Issue Number: " << issueNo << endl;
    }
};
int main()
{
    Book b;
    Magazine m;
    cout<<"Enter Book Details"<<endl;
    b.getBookData();
    cout<<"\nEnter Magazine Details"<<endl;
    m.getMagazineData();
    cout<<"\nBook Information"<<endl;
    b.displayBookData();
    cout<<"\nMagazine Information"<<endl;
    m.displayMagazineData();
    return 0;
}

/*Enter Book Details
Enter Item ID: 47895
Enter Title: tree
Enter Author: jack

Enter Magazine Details
Enter Item ID: 478512
Enter Title: nature
Enter Issue Number: 0

Book Information
Item ID: 47895
Title: tree
Author: jack

Magazine Information
Item ID: 478512
Title: nature
Issue Number: 0*/