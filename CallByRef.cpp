#include <iostream>
using namespace std;
int swap(int &x, int &y)
{
  // call by reference
  int temp;
  temp = x;
  x = y;
  y = temp;
}
int main()
{
  int a = 10;
  int b = 7;
  cout << "a= " << a << " and b= " << b << endl;
  if (a > b)
    swap(a, b);
  cout << "After swapping:" << endl;
  cout << "a= " << a << " and b= " << b << endl;
  return 0;
}