#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5 - i; ++j)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << i << " ";
    }
    cout << endl;
  }

  // Or it could be like this

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 5; j > i; j--)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}