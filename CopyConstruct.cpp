#include <iostream>
using namespace std;

class code
{
  // copy constructors
  int id;

public:
  code() {}
  code(int a)
  {
    id = a;
  }
  code(code &x)
  {
    id = x.id;
  }
  void print()
  {
    cout << id;
  }
};
int main()
{
  code A(500);
  code B(A);
  code C = A;
  code D;
  D = A;

  cout << "\nId of A: ";
  A.print();
  cout << "\nId of B: ";
  B.print();
  cout << "\nId of C: ";
  C.print();
  cout << "\nId of D: ";
  D.print();

  return 0;
}