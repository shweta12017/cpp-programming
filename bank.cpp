
#include <iostream>
#include <string>
using namespace std;

// Base class
class Account
{
protected:
    int accNo;
    string name;
    float balance;

public:
    Account(int a, string n, float b)
    {
        accNo = a;
        name = n;
        balance = b;
        cout << "Account created\n";
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully\n";
        }
        else
            cout << "Invalid amount\n";
    }

    virtual void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully\n";
        }
        else
            cout << "Insufficient balance or invalid amount\n";
    }

    virtual void statement()
    {
        cout << "\nAccount Number: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: Rs. " << balance << endl;
    }

    virtual ~Account()
    {
        cout << "Account destroyed\n";
    }
};

// Parent class for additional features
class BankService
{
public:
    void service()
    {
        cout << "Banking service available\n";
    }

    ~BankService()
    {
        cout << "BankService destroyed\n";
    }
};

// Hierarchical and multiple inheritance
class SavingsAccount : public Account, public BankService
{
public:
    SavingsAccount(int a, string n, float b)
        : Account(a, n, b) {}

    ~SavingsAccount()
    {
        cout << "SavingsAccount destroyed\n";
    }
};

class CheckingAccount : public Account, public BankService
{
public:
    CheckingAccount(int a, string n, float b)
        : Account(a, n, b) {}

    ~CheckingAccount()
    {
        cout << "CheckingAccount destroyed\n";
    }
};

int main()
{
    int type, choice, a;
    string n;
    float b, amount;

    cout << "Enter account number: ";
    cin >> a;

    cout << "Enter name: ";
    cin >> n;

    cout << "Enter initial balance: ";
    cin >> b;

    cout << "1. Savings Account\n";
    cout << "2. Checking Account\n";
    cout << "Choose account type: ";
    cin >> type;

    if (b < 0)
    {
        cout << "Invalid balance\n";
        return 0;
    }

    if (type == 1)
    {
        SavingsAccount s(a, n, b);

        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n";
            cout << "3. Statement\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Enter amount: ";
                    cin >> amount;
                    s.deposit(amount);
                    break;

                case 2:
                    cout << "Enter amount: ";
                    cin >> amount;
                    s.withdraw(amount);
                    break;

                case 3:
                    s.statement();
                    break;

                case 4:
                    cout << "Thank you!\n";
                    break;

                default:
                    cout << "Invalid choice\n";
            }
        } while (choice != 4);
    }
    else if (type == 2)
    {
        CheckingAccount c(a, n, b);

        do
        {
            cout << "\n1. Deposit\n2. Withdraw\n";
            cout << "3. Statement\n4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Enter amount: ";
                    cin >> amount;
                    c.deposit(amount);
                    break;

                case 2:
                    cout << "Enter amount: ";
                    cin >> amount;
                    c.withdraw(amount);
                    break;

                case 3:
                    c.statement();
                    break;

                case 4:
                    cout << "Thank you!\n";
                    break;

                default:
                    cout << "Invalid choice\n";
            }
        } while (choice != 4);
    }
    else
    {
        cout << "Invalid account type\n";
    }

    return 0;
}


/*Enter account number: 458963215
Enter name: shweta
Enter initial balance: 50000
1. Savings Account
2. Checking Account
Choose account type: 1
Account created

1. Deposit
2. Withdraw
3. Statement
4. Exit
Enter choice: 1
Enter amount: 10000
Amount deposited successfully

1. Deposit
2. Withdraw
3. Statement
4. Exit
Enter choice: 2
Enter amount: 1650
Amount withdrawn successfully

1. Deposit
2. Withdraw
3. Statement
4. Exit
Enter choice: 3

Account Number: 458963215
Name: shweta
Balance: Rs. 58350

1. Deposit
2. Withdraw
3. Statement
4. Exit
Enter choice: 4
Thank you!
SavingsAccount destroyed
BankService destroyed
Account destroyed*/