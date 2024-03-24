#include <iostream>
using namespace std;
class sum
{
  // default argument with friend function
  int num1, num2;

public:
  void get(int a = 8, int b = 10)
  {
    num1 = a;
    num2 = b;
  }
  friend int add(sum A);
};
int add(sum A)
{
  return A.num1 * A.num2;
}
int main()
{
  sum A;
  A.get(30, 2);
  cout << "The multiplication is :" << add(A) << endl;
  A.get(24);
  cout << "The multiplication is :" << add(A) << endl;
  A.get();
  cout << "The multiplication is :" << add(A) << endl;
  return 0;
}