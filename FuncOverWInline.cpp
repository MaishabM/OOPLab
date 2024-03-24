#include <iostream>
using namespace std;
inline int mul(int a, int b, int c)
{
  // inline function and function Overloading
  return a * b * c;
}
inline int mul(int a, int b)
{
  return a * b;
}
inline int mul(int a)
{
  return (a * a * 3.14);
}
int main()
{
  cout << "The multiplication of 4, 5 and 3 is: " << mul(4, 5, 3) << endl;
  cout << "The area of a rectangle of 6 width and 8 height is: " << mul(6, 8) << endl;
  cout << "The area of a circle of radius 5 is: " << mul(5) << endl;
  return 0;
}
