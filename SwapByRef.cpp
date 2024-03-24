#include <iostream>
using namespace std;

int s(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x, y;
  cout << "x= ";
  cin >> x;
  cout << "y= ";
  cin >> y;
  s(x, y);
  cout << "After swapping: \n";
  cout << "x= " << x << endl;
  cout << "y= " << y << endl;
  return 0;
}