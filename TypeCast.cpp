#include <iostream>
using namespace std;
int main()
{
  // type casting operator
  int ival = 37;
  float fval = 78.76;
  cout << "Int type value: " << ival << endl;
  cout << "Float type value: " << fval << endl;
  cout << "Int type value to float type value: " << float(ival) << endl;
  cout << "Float type value to int type value: " << int(fval) << endl;
  return 0;
}
