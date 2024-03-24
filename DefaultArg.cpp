#include <bits/stdc++.h>
using namespace std;
float value(float p, int n, float r = 0.15)
{
  // default argument
  int year = 1;
  float sum = p;
  while (year <= n)
  {
    sum = sum * (1 + r);
    year++;
  }
  return sum;
}

int main()
{
  float amount;
  amount = value(3000.00, 4);
  cout << "Final amount : " << amount << endl;

  amount = value(10000.00, 5, 0.2);
  cout << "Final amount : " << amount << endl;
  return 0;
}
