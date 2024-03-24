#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
  string depositorName;
  long accountNumber;
  string accountType;
  double balance;

public:
  // Constructor to assign initial values
  BankAccount(string name, long accNum, string accType, double initialBalance)
  {
    depositorName = name;
    accountNumber = accNum;
    accountType = accType;
    balance = initialBalance;
  }

  // Function to deposit an amount
  void deposit(double amount)
  {
    balance += amount;
    cout << "Deposit of $" << amount << " successful.\n";
  }

  // Function to withdraw an amount after checking the balance
  void withdraw(double amount)
  {
    cout << "Preparing to withdraw " << amount << "$..." << endl;
    if (amount <= balance)
    {
      balance -= amount;
      cout << "Withdrawal of $" << amount << " successful.\n";
    }
    else
    {
      cout << "Insufficient funds. Withdrawal failed.\n";
    }
  }

  // Function to display name and balance
  void display()
  {
    cout << "Depositor Name: " << depositorName << endl;
    cout << "Balance: $" << balance << endl;
  }
};

int main()
{
  // Test the BankAccount class
  BankAccount account("John Doe", 123456789, "Savings", 1000.0);

  account.deposit(500);
  account.display();

  account.withdraw(200);
  account.display();

  account.withdraw(2000); // This withdrawal should fail due to insufficient funds
  account.display();

  return 0;
}
