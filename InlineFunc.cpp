#include <bits/stdc++.h>
using namespace std;
inline float mul(float x, float y)
{
  // inline function
  return x * y;
}
inline double div(double m, double n)
{
  return (m / n);
}
int main()
{
  float a, b;
  cout << "Enter two float values: ";
  cin >> a >> b;
  cout << mul(a, b) << endl;
  cout << div(a, b) << endl;
  return 0;
}