#include <bits/stdc++.h>
using namespace std;

class shape
{
protected:
  double x, y;

public:
  void get_data(double a, double b = 0)
  {
    x = a;
    y = b;
  }
  virtual void display_area() = 0;
};

class triangle : public shape
{
public:
  void display_area()
  {
    cout << "Area of triangle: " << 0.5 * x * y << endl;
  }
};

class rectangle : public shape
{
public:
  void display_area()
  {
    cout << "Area of rectangle: " << x * y << endl;
  }
};

class circle : public shape
{
public:
  void display_area()
  {
    cout << "Area of circle: " << 3.14 * x * x << endl;
  }
};

int main()
{
  triangle t;
  t.get_data(5.00, 4.00);
  t.display_area();

  rectangle r;
  r.get_data(4.00, 5.00);
  r.display_area();

  circle c;
  c.get_data(3.00);
  c.display_area();

  return 0;
}