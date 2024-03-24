#include <bits/stdc++.h>
using namespace std;

double power(double m, int n = 2)
{
  return pow(m, n);
}

int power(int m, int n = 2)
{
  return pow(m, n);
}

int main()
{
  double m;
  int n;
  cout << "Enter the number: ";
  cin >> m;
  cout << "Enter the power of the number: ";
  cin >> n;
  cout << "The result is: " << power(m, n);
  return 0;
}