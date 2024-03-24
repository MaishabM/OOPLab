#include <iostream>
using namespace std;
class student
{
  // example of class
  string name;
  int id;

public:
  void get()
  {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
  }
  void print()
  {
    cout << "Student name: " << name << endl;
    cout << "Student id: " << id << endl;
  }
};
int main()
{
  student s;
  s.get();
  s.print();
  return 0;
}