#include <iostream>
using namespace std;

class Employee
{
public:
    float Salary(float basic)
    {
        return basic;
    }
    float Salary(float basic, float hra)
    {
        return basic + hra;
    }
    float Salary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee emp;

    float basic, hra, da;

    cout << "Enter Basic Salary: ";
    cin >> basic;
    cout << "Salary using Basic Salary = "
         << emp.Salary(basic) << endl;

    cout << "\nEnter Basic Salary and HRA: ";
    cin >> basic >> hra;
    cout << "Salary using Basic Salary and HRA = "
         << emp.Salary(basic, hra) << endl;

    cout << "\nEnter Basic Salary, HRA and DA: ";
    cin >> basic >> hra >> da;
    cout << "Salary using Basic Salary, HRA and DA = "
         << emp.Salary(basic, hra, da) << endl;

    return 0;
}
/*Enter Basic Salary: 20000
Salary using Basic Salary = 20000

Enter Basic Salary and HRA: 20000
5000 
Salary using Basic Salary and HRA = 25000

Enter Basic Salary, HRA and DA: 90000
5000
4000
Salary using Basic Salary, HRA and DA = 99000*/