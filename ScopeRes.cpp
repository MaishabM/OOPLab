#include <iostream>
using namespace std;
int m = 30;
int main()
{
  // scope resolution operator
  int m = 50;
  {
    cout << "In The Outer block: " << endl;
    int k = m;
    int m = 20;
    cout << "k= " << k << " and m= " << m << endl;
    {
      int m = 10;
      cout << "In the inner block: " << endl;
      cout << "m= " << m << " and ::m= " << ::m << endl;
    }
    cout << "Global m= " << ::m;
    return 0;
  }
}