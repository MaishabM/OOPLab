#include <iostream>
using namespace std;
class B
{
  int a;

public:
  int b;
  void set_ab()
  {
    a = 5;
    b = 10;
  }
  int get_a()
  {
    return a;
  }
  void show_a()
  {
    cout << "a= " << a << endl;
  }
};

class D : public B
{
  int c;

public:
  void mul()
  {
    c = b * get_a();
  }
  void display()
  {
    cout << "a= " << get_a() << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << "\n";
  }
};

int main()
{
  D d;
  d.set_ab();
  d.mul();
  d.show_a();
  d.display();

  d.b = 90;
  d.mul();
  d.display();
  return 0;
}
