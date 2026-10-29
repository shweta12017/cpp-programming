
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class
class Account
{
    protected:
    int accountNo;
    string name;
    double balance;

    public:
    Account(int accNo, string n, double bal)  // Parameterized constructor
    {
        accountNo = accNo;
        name = n;
        balance = bal;
        cout << "Account constructor called\n";
    }

    void deposit(double amount)    // Deposit function
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
            cout << "Invalid amount!\n";
    }

    virtual void withdraw(double amount)      // Virtual function for withdrawal
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        else
            cout << "Insufficient balance or invalid amount!\n";
    }

    // Account statement
    virtual void statement()
    {
        cout << "\n----- Account Statement -----\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Balance        : Rs. " << balance << endl;
    }

    // Virtual destructor
    virtual ~Account()
    {
        cout << "Account destructor called\n";
    }
};

// Interface for savings account
class SavingsFeatures
{
public:
    SavingsFeatures()
    {
        cout << "SavingsFeatures constructor called\n";
    }

    void showSavingsFeature()
    {
        cout << "Savings Account: Interest eligible account\n";
    }

    ~SavingsFeatures()
    {
        cout << "SavingsFeatures destructor called\n";
    }
};

// Interface for checking account
class CheckingFeatures
{
public:
    CheckingFeatures()
    {
        cout << "CheckingFeatures constructor called\n";
    }

    void showCheckingFeature()
    {
        cout << "Checking Account: Transaction account\n";
    }

    ~CheckingFeatures()
    {
        cout << "CheckingFeatures destructor called\n";
    }
};

// Hierarchical inheritance:
// SavingsAccount and CheckingAccount inherit Account.
// Multiple inheritance:
// SavingsAccount inherits Account and SavingsFeatures.
class SavingsAccount : public Account, public SavingsFeatures
{
public:
    SavingsAccount(int accNo, string n, double bal)
        : Account(accNo, n, bal), SavingsFeatures()
    {
        cout << "SavingsAccount constructor called\n";
    }

    void withdraw(double amount) override
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Savings withdrawal successful.\n";
        }
        else
            cout << "Insufficient balance or invalid amount!\n";
    }

    void statement() override
    {
        cout << "\n=== SAVINGS ACCOUNT ===\n";
        Account::statement();
        showSavingsFeature();
    }

    ~SavingsAccount() override
    {
        cout << "SavingsAccount destructor called\n";
    }
};

class CheckingAccount : public Account, public CheckingFeatures
{
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string n, double bal, double limit)
        : Account(accNo, n, bal),
          CheckingFeatures(),
          overdraftLimit(limit)
    {
        cout << "CheckingAccount constructor called\n";
    }

    void withdraw(double amount) override
    {
        if (amount > 0 && amount <= balance + overdraftLimit)
        {
            balance -= amount;
            cout << "Checking withdrawal successful.\n";
        }
        else
            cout << "Overdraft limit exceeded or invalid amount!\n";
    }

    void statement() override
    {
        cout << "\n=== CHECKING ACCOUNT ===\n";
        Account::statement();
        cout << "Overdraft Limit: Rs. " << overdraftLimit << endl;
        showCheckingFeature();
    }

    ~CheckingAccount() override
    {
        cout << "CheckingAccount destructor called\n";
    }
};

int main()
{
    int choice, accNo;
    string name;
    double balance, amount, limit;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\n1. Savings Account";
    cout << "\n2. Checking Account";
    cout << "\nChoose account type: ";
    cin >> choice;

    if (balance < 0)
    {
        cout << "Initial balance cannot be negative.\n";
        return 0;
    }

    if (choice == 1)
    {
        SavingsAccount acc(accNo, name, balance);

        do
        {
            cout << "\n--- BANK MENU ---\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Account Statement\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    acc.deposit(amount);
                    break;

                case 2:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    acc.withdraw(amount);
                    break;

                case 3:
                    acc.statement();
                    break;

                case 4:
                    cout << "Thank you for banking with us!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        } while (choice != 4);
    }
    else if (choice == 2)
    {
        cout << "Enter overdraft limit: ";
        cin >> limit;

        if (limit < 0)
        {
            cout << "Overdraft limit cannot be negative.\n";
            return 0;
        }

        CheckingAccount acc(accNo, name, balance, limit);

        do
        {
            cout << "\n--- BANK MENU ---\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Account Statement\n";
            cout << "4. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    acc.deposit(amount);
                    break;

                case 2:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    acc.withdraw(amount);
                    break;

                case 3:
                    acc.statement();
                    break;

                case 4:
                    cout << "Thank you for banking with us!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        } while (choice != 4);
    }
    else
    {
        cout << "Invalid account type!\n";
    }

    return 0;
}
