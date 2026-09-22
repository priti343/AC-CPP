#include <iostream>
using namespace std;
class BankAccount 
{
    private:
    string accountNumber;
    string name;
    double balance;
    public:

    BankAccount()
    {
        accountNumber = "";
        name = "Unknown";
        balance = 0;
    }

    void setAccNum(){
        cout<<"\nEnter Account No: ";
        cin>>accountNumber;
    }
    string getAccNum()
    {
        return accountNumber;
    }
    void setName()
    {
        cout <<"\nEnter account holder: ";
        cin>>name;
    }
    string getName()
    {
        return name;
    }
    void setBal()
    {
        cout <<"\nEnter  initial balance: ";
        cin>>balance;
    }
    double getBal()
    {
        return balance;
    }
    void deposit(){
        double amount;

        cout <<"\nDeposit: ";
        cin >> amount;

        if(amount > 0)
        {
            balance = balance + amount;
        }
        else
        {
            cout << "Invalid deposit amount!" <<endl;
        }

    }
    void withdraw(){
        double amount;

        cout << "\nWithdraw: ";
        cin>>amount;

        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout <<"Insufficient balance! "<<endl;
        }
    }
    void displayDetails()
    {
        cout << "\n______________Bank Account Details______________" << endl;
        cout << "Account Number: " <<accountNumber<<endl;
        cout << "Account Name: " <<name<<endl;
        cout << "Account Balance: " <<balance<<endl;
        cout << "Final Balance: " <<balance<<endl;

    }
    
};
int main()
{
    BankAccount account;

    account.setAccNum();
    account.setName();
    account.setBal();

    account.displayDetails();

    account.deposit();
    account.displayDetails();

    account.withdraw();
    account.displayDetails();
    return 0;

}