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
    cout << "Subject 1= " << sub1 << endl;
    cout << "Subject 2= " << sub2 << endl;
  }
};

class sport
{
protected:
  int score;

public:
  void get_scr(int a)
  {
    score = a;
  }
  void put_scr()
  {
    cout << "The score is: " << score << endl;
  }
};

class result : public test, public sport
{
  int total;

public:
  void display()
  {
    cout << "The result of the student is:" << endl;
    put_num();
    put_mark();
    put_scr();
    total = sub1 + sub2 + score;
    cout << "The total marks is : " << total << endl;
  }
};

int main()
{
  result r;
  r.get_num(16);
  r.get_mark(88, 78);
  r.get_scr(75);
  r.display();
  return 0;
}