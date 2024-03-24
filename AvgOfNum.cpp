#include <iostream>
using namespace std;
int main()
{
  // avg of two numbers
  float num1, num2;
  cout << "Enter two float numbers: ";
  cin >> num1 >> num2;
  float sum = (num1 + num2);
  float avg = sum / 2;
  cout << "The sum of two numbers is: " << sum << endl;
  cout << "The average of two numbers is: " << avg << endl;

  return 0;
}