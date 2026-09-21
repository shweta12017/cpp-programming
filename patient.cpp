#include<iostream>
using namespace std;
class patient
{
    string name;
    string admit_date;
    string discharge;
    string problem;
    public:
    patient(string n,string a,string d,string p)
    {
        name=n;
        admit_date=a;
        discharge=d;
        problem=p;
    }
    void display()
    {
        cout<<"patient name:"<<name<<endl;
        cout<<"admit date:"<<admit_date<<endl;
        cout<<"discharge date:"<<discharge<<endl;
        cout<<"reason of admit:"<<problem<<endl;
    }
};
class consultation
{
    int days;
    int bed_price;
    int saline_count;
    int saline_price;
    int medicinefee;
    int charges;
    public:
    consultation(int d,int b,int s,int p,int m)
    {
        days=d;
        bed_price=b;
        saline_count=s;
        saline_price=p;
        medicinefee=m;
    }
    void total_charges()
    {
        cout<<"admit days"<<days<<endl;
        charges=(days*bed_price)+(saline_count*saline_price)+medicinefee;
        cout<<"consultation fee:"<<charges<<endl;
    }
};
int main()
{
    patient p("ram","20 jan","29 jan","low bp");
    consultation c(10,500,15,150,3000);
    p.display();
    c.total_charges();
    return 0;
}

/*patient name:ram
admit date:20 jan
discharge date:29 jan
reason of admit:low bp
admit days10
consultation fee:10250*/