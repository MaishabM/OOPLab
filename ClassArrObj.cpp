#include <iostream>
using namespace std;
class employee
{
  // class implementation with array of objects
  string name;
  float salary;

public:
  void get()
  {
    cout << "Enter name:";
    cin >> name;
    cout << "Enter salary:";
    cin >> salary;
  }
  void print()
  {
    cout << "Name of employee: " << name << endl;
    cout << "Salary of employee: " << salary << endl;
  }
};
int main()
{
  employee worker[5];
  cout << "Enter employee data: " << endl;
  for (int i = 0; i < 5; i++)
  {
    worker[i].get();
  }
  cout << "The employee data is shown below: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "Worker " << i + 1 << " data:" << endl;
    worker[i].print();
  }
  return 0;
}