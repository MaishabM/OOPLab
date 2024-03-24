#include <bits/stdc++.h>
using namespace std;
class DB;
class DM
{
  float m;
  float cm;

public:
  DM(float a = 0, float b = 0) : m(a), cm(b) {}

  friend DM add(DM &M, DB &B);
  void display()
  {
    cout << "In metre= " << m << " and in centimetre= " << cm << endl;
  }
};

class DB
{
  float feet;
  float inch;

public:
  DB(float a = 0, float b = 0) : feet(a), inch(b) {}

  friend DM add(DM &M, DB &B);
  void display()
  {
    cout << "In feet= " << feet << " and in inches= " << inch << endl;
  }
};

DM add(DM &M, DB &B)
{
  cout << "Result in Meter and Centimeter: " << endl;
  float tm = M.m + (B.feet * 0.3048);
  float tcm = M.cm + (B.inch * 2.54);

  return DM(tm, tcm);
}

int main()
{
  DM M(4.5, 2.0);
  DB B(5.5, 6.6);
  M.display();
  B.display();
  DM result = add(M, B);
  result.display();
  return 0;
}