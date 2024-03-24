#include <bits/stdc++.h>
using namespace std;

float area(int height, int length)
{
  return (0.5 * height * length);
}

float area(int rad)
{
  return (3.14 * rad * rad);
}

int main()
{
  int a, b, c;
  cout << "Enter the height and length of the triangle: ";
  cin >> a >> b;
  cout << "The area of the triangle: " << area(a, b) << endl;
  cout << "Enter the radius of the circle: ";
  cin >> c;
  cout << "The area of the circle: " << area(c) << endl;
  return 0;
}