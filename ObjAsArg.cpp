#include <bits/stdc++.h>
using namespace std;
class student
{
  // objects as arguments
  int sub1, sub2;

public:
  void get(int x, int y)
  {
    sub1 = x;
    sub2 = y;
  }
  void print()
  {
    cout << "\nSubject 1 mark: " << sub1 << endl;
    cout << "Subject 2 mark: " << sub2 << endl;
  }
  void sum(student s1, student s2)
  {
    sub1 = s1.sub1 + s2.sub1;
    sub2 = s1.sub2 + s2.sub2;
  }
};

int main()
{
  student S1, S2, S3;
  S1.get(67, 87);
  S2.get(90, 95);
  S3.sum(S1, S2);
  cout << "Student 1 marks : ";
  S1.print();
  cout << "\nStudent 2 marks : ";
  S2.print();
  cout << "\nTotal marks : ";
  S3.print();
  return 0;
}