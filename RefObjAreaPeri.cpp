#include <bits/stdc++.h>
using namespace std;

class field
{
  int h, l;

public:
  void get()
  {
    cout << "Enter the height of the rectangle: ";
    cin >> h;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
  }
  int peri()
  {
    return 2 * (h + l);
  }
  int area()
  {
    return h * l;
  }
};

int main()
{
  field f;
  f.get();
  field &r = f;
  cout << "Area of the rectangle is: " << r.area() << endl;
  cout << "Perimeter of the rectangle is: " << r.peri() << endl;
}