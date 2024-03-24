#include <bits/stdc++.h>
using namespace std;
class prime
{
public:
  prime()
  {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
      {
        cout << "The number " << n << " is not prime." << endl;
        exit(1);
      }
    }
    cout << "The number " << n << " is prime. " << endl;
  }
};

int main()
{
  prime p;

  return 0;
}