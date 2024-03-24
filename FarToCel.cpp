#include <iostream>
using namespace std;
int main()
{
  float f;
  cout << "Enter the Fahrenheit temperature:";
  cin >> f;
  float c = (f - 32) * 0.55555556;
  cout << "The temperature in Celsius: ";
  cout << c;
  return 0;
}