#include <bits/stdc++.h>
using namespace std;
class binary
{
  // nesting of member functions
  string s;

public:
  void get()
  {
    cout << "Enter a binary number: ";
    cin >> s;
  }

  void check()
  {
    for (int i = 0; i < s.size(); i++)
    {
      if (s.at(i) != '0' && s.at(i) != '1')
      {
        cout << "Incorrect binary number format.\nThe program will terminate.";
        exit(0);
      }
    }
  }

  void comp()
  {
    check();
    for (int i = 0; i < s.size(); i++)
    {
      if (s.at(i) == '0')
        s.at(i) = '1';
      else
        s.at(i) = '0';
    }
  }
  void display()
  {
    comp();
    cout << "The 1's complement of the binary number is: " << s;
  }
};

int main()
{
  binary b;
  b.get();
  b.display();
  return 0;
}