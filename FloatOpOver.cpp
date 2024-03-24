#include <bits/stdc++.h>
using namespace std;
class FLOAT
{
  float f;

public:
  void get(float a)
  {
    f = a;
  }
  void operator+()
  {
    f += 10;
  }
  void operator-()
  {
    f -= 10;
  }
  void operator*()
  {
    f *= 10;
  }
  void display()
  {
    cout << "f= " << f << endl;
  }
};

int main()
{
  FLOAT i;
  i.get(20.5);
  i.display();
  cout << "Plus operator overload-" << endl;
  +i;
  i.display();
  cout << "Minus operator overload-" << endl;
  -i;
  i.display();
  cout << "Multiplication operator overload-" << endl;
  *i;
  i.display();

  return 0;
}