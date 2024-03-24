#include <bits/stdc++.h>
using namespace std;
class area
{
  // Constructor Overload
  float height;
  float length;

public:
  area()
  {
    height = 5.66;
    length = 10.00;
  }
  area(float h, float l)
  {
    height = h;
    length = l;
  }
  area(float h)
  {
    height = h;
    length = 5.00;
  }
  float mul()
  {
    return height * length;
  }
};

int main()
{
  area A1, A2(2.22), A3(4.78, 3.67);
  cout << "When no arguments are passed:\nArea=" << A1.mul() << endl;
  cout << "When one argument is passed:\nArea=" << A2.mul() << endl;
  cout << "When two arguments are passed:\nArea=" << A3.mul() << endl;
  return 0;
}