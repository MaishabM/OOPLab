#include <bits/stdc++.h>
using namespace std;

class String
{
private:
  char *str;
  int length;

public:
  // Constructors
  String()
  {
    length = 0;
    str = new char[1];
    str[0] = '\0';
  }

  String(const char *s)
  {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }

  // Destructor
  ~String()
  {
    delete[] str;
  }

  // Function to concatenate two strings
  String concatenate(const String &s) const
  {
    String result;
    result.length = length + s.length;
    result.str = new char[result.length + 1];
    strcpy(result.str, str);
    strcat(result.str, s.str);
    return result;
  }

  // Overloading assignment operator
  String &operator=(const String &s)
  {
    if (this != &s)
    {
      delete[] str;
      length = s.length;
      str = new char[length + 1];
      strcpy(str, s.str);
    }
    return *this;
  }

  // Function to display the string
  void display() const
  {
    cout << str << endl;
  }
};

int main()
{
  // Creating uninitialized string objects
  String s1;
  cout << "Uninitialized String: ";
  s1.display();

  // Creating objects with string constants
  String s2("Well Done!");
  cout << "String with Constant: ";
  s2.display();

  // Concatenating two strings properly
  String s3("Hello, ");
  String s4("World!");
  String s5 = s3.concatenate(s4);
  cout << "Concatenated String: ";
  s5.display();

  // Assigning one string to another
  String s6;
  s6 = s2;
  cout << "Assigned String: ";
  s6.display();

  return 0;
}
