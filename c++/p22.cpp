#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include <string>
using namespace std;

class Account
{
protected:
    string name;
    int accNo;
    double balance;
    static int nextAccNo;
    static double totalFunds;

public:
    Account(string n = "", double b = 0.0)
    {
        name = n;
        balance = b;
        accNo = ++nextAccNo;
        totalFunds += balance;
    }
    virtual ~Account() {}
    virtual void deposit(double amount)
    {
        if (amount <= 0)
            throw invalid_argument("Deposit amount must be positive.");
        balance += amount;
        totalFunds += amount;
        cout << "Deposit successful! Current balance: ₹" << fixed << setprecision(2) << balance << endl;
    }
    virtual void withdraw(double amount)
    {
        if (amount <= 0)
            throw invalid_argument("Withdrawal amount must be positive.");
        if (amount > balance)
            throw runtime_error("Insufficient funds!");
        balance -= amount;
        totalFunds -= amount;
        cout << "Withdrawal successful! Current balance: ₹" << fixed << setprecision(2) << balance << endl;
    }
    virtual void showInfo() const
    {
        cout << "\nAccount No: " << accNo
             << "\nName: " << name
             << "\nBalance: ₹" << fixed << setprecision(2) << balance << endl;
    }
    int getAccNo() const { return accNo; }
    static void showBankStatus()
    {
        cout << "\n=== BANK STATUS ===\n";
        cout << "Total Accounts: " << nextAccNo
             << "\nTotal Funds in Bank: ₹" << fixed
             << setprecision(2) << totalFunds << "\n";
    }
};

int Account::nextAccNo = 0;
double Account::totalFunds = 0.0;

// ---------- Derived Classes ----------
class SavingsAccount : public Account
{
    double interestRate;

public:
    SavingsAccount(string n, double b, double rate = 4.0)
        : Account(n, b), interestRate(rate) {}
    void addInterest()
    {
        double interest = balance * interestRate / 100.0;
        balance += interest;
        totalFunds += interest;
        cout << "Interest added: ₹" << fixed << setprecision(2) << interest
             << "\nNew Balance: ₹" << fixed << setprecision(2) << balance << endl;
    }
    void showInfo() const override
    {
        cout << "\n=== Savings Account ===";
        Account::showInfo();
        cout << "Interest Rate: " << interestRate << "%\n";
    }
};

class CurrentAccount : public Account
{
    double overdraftLimit;

public:
    CurrentAccount(string n, double b, double limit = 5000.0)
        : Account(n, b), overdraftLimit(limit) {}
    void withdraw(double amount) override
    {
        if (amount <= 0)
            throw invalid_argument("Withdrawal amount must be positive.");
        if (amount > balance + overdraftLimit)
            throw runtime_error("Overdraft limit exceeded!");
        balance -= amount;
        totalFunds -= amount;
        cout << "Withdrawal successful! Current balance: ₹" << fixed << setprecision(2) << balance << endl;
    }
    void showInfo() const override
    {
        cout << "\n=== Current Account ===";
        Account::showInfo();
        cout << "Overdraft Limit: ₹" << fixed << setprecision(2) << overdraftLimit << "\n";
    }
};

// ---------- Main ----------
int main()
{
    vector<Account *> accounts;
    int choice = 0;
    do
    {
        cout << "\n====== SMART BANKING SYSTEM ======\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Current Account\n";
        cout << "3. Deposit\n";
        cout << "4. Withdraw\n";
        cout << "5. Display Account Info\n";
        cout << "6. Show Bank Status\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                string name;
                double balance, rate;
                cout << "Enter Name: ";
                cin >> ws;
                getline(cin, name);
                cout << "Enter Initial Balance: ";
                cin >> balance;
                cout << "Enter Interest Rate: ";
                cin >> rate;
                accounts.push_back(new SavingsAccount(name, balance, rate));
                cout << "Savings Account created successfully!\n";
            }
            else if (choice == 2)
            {
                string name;
                double balance, limit;
                cout << "Enter Name: ";
                cin >> ws;
                getline(cin, name);
                cout << "Enter Initial Balance: ";
                cin >> balance;
                cout << "Enter Overdraft Limit: ";
                cin >> limit;
                accounts.push_back(new CurrentAccount(name, balance, limit));
                cout << "Current Account created successfully!\n";
            }
            else if (choice == 3)
            {
                int accNo;
                double amt;
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter Amount to Deposit: ";
                cin >> amt;
                bool found = false;
                for (auto acc : accounts)
                {
                    if (acc->getAccNo() == accNo)
                    {
                        acc->deposit(amt);
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found!\n";
            }
            else if (choice == 4)
            {
                int accNo;
                double amt;
                cout << "Enter Account Number: ";
                cin >> accNo;
                cout << "Enter Amount to Withdraw: ";
                cin >> amt;
                bool found = false;
                for (auto acc : accounts)
                {
                    if (acc->getAccNo() == accNo)
                    {
                        acc->withdraw(amt);
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found!\n";
            }
            else if (choice == 5)
            {
                int accNo;
                cout << "Enter Account Number: ";
                cin >> accNo;
                bool found = false;
                for (auto acc : accounts)
                {
                    if (acc->getAccNo() == accNo)
                    {
                        acc->showInfo();
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found!\n";
            }
            else if (choice == 6)
            {
                Account::showBankStatus();
            }
            else if (choice == 7)
            {
                cout << "Exiting... Thank you for using Smart Banking System!\n";
            }
            else
            {
                cout << "Invalid choice.\n";
            }
        }
        catch (exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }
    } while (choice != 7);

    for (auto acc : accounts)
        delete acc;
    return 0;
}
