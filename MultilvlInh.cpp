#include <iostream>
using namespace std;
class student
{
protected:
  int roll;

public:
  void get_num(int a)
  {
    roll = a;
  }
  void put_num()
  {
    cout << "Roll number: " << roll << endl;
  }
};

class test : public student
{
protected:
  int sub1, sub2;

public:
  void get_mark(int a, int b)
  {
    sub1 = a;
    sub2 = b;
  }
  void put_mark()
  {
    cout << "Marks for Subject 1 is: " << sub1 << endl;
    cout << "Marks for Subject 2 is: " << sub2 << endl;
  }
};

class result : public test
{
  int total;

public:
  void display()
  {
    cout << "The result of the student is: " << endl;
    put_num();
    put_mark();
    total = sub1 + sub2;
    cout << "Total mark is: " << total << endl;
  }
};

int main()
{
  result s1;
  s1.get_num(16);
  s1.get_mark(87, 90);
  s1.display();
  return 0;
}