#include <bits/stdc++.h>
using namespace std;
class Account
{
protected:
  string cust_name;
  int acc_num;
  string type;

public:
  Account(string name, int accNum, string typeOfAcc)
  {
    cust_name = name;
    acc_num = accNum;
    type = typeOfAcc;
  }
};

class cur_acct : public Account
{
  float balance;
  float min_bal;
  float penalty = 500;

public:
  cur_acct(string name, int accNum, string typeOfAcc, float bal, float min) : Account(name, accNum, typeOfAcc)
  {
    balance = bal;
    min_bal = min;
  }

  void dep(float amount)
  {
    balance += amount;
  }

  void withdraw(float amount)
  {
    if (balance < min_bal)
    {
      balance -= penalty;
    }
    balance -= amount;
  }

  void display()
  {
    cout << "Updated Balance: " << balance << endl;
  }

  void cheque()
  {
    cout << "Name: " << cust_name << endl;
    cout << "Account number: " << acc_num << endl;
    cout << "Type of account: " << type << endl;
    cout << "Balance: " << balance << endl;
  }
};

class sav_acct : public Account
{
  float balance;
  int interest;

public:
  sav_acct(string name, int accNum, string typeOfAcc, float bal, int in) : Account(name, accNum, typeOfAcc)
  {
    // Account::get(name, accNum, typeOfAcc);
    balance = bal;
    interest = in;
  }

  void dep()
  {
    balance += balance * interest;
  }

  void display()
  {
    cout << "Updated Balance: " << balance << endl;
  }

  void withdraw(float amount)
  {
    balance -= amount;
  }
};

int main()
{
  cur_acct c("Maisha", 1234, "Current", 5000.00, 1500);
  c.display();
  c.dep(300.55);
  c.display();
  c.withdraw(4000.00);
  c.display();
  c.cheque();

  sav_acct s("Maida", 7674, "Savings", 10000.00, 2);
  s.display();
  s.dep();
  s.display();
  s.withdraw(4000.00);
  s.display();
}