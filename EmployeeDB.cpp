#include <bits/stdc++.h>
using namespace std;

class staff
{
protected:
  int code;
  string name;

public:
  void get_staff(int c, string n)
  {
    code = c;
    name = n;
  }
  void display_staff()
  {
    cout << "Code: " << code << endl;
    cout << "Name: " << name << endl;
  }
};

class officer : public staff
{
  char grade;

public:
  void get_officer(char g)
  {
    grade = g;
  }
  void display_officer()
  {
    cout << "Officer- " << endl;
    display_staff();
    cout << "Grade: " << grade << endl;
  }
};

class typist : public staff
{
  int speed;

public:
  void get_typist(int s)
  {
    speed = s;
  }
  void display_typist()
  {
    cout << "Typist- " << endl;
    display_staff();
    cout << "Speed: " << speed << endl;
  }
};

class teacher : public staff
{
  string subject;
  string publication;

public:
  void get_teacher(string s, string p)
  {
    subject = s;
    publication = p;
  }
  void display_teacher()
  {
    cout << "Teacher- " << endl;
    display_staff();
    cout << "Subject: " << subject << endl;
    cout << "Publication: " << publication << endl;
  }
};

int main()
{
  cout << "EMPLOYEE DATABASE: " << endl;
  teacher t;
  t.get_staff(123, "Riyaal");
  t.get_teacher("Math", "AB");
  t.display_teacher();

  typist p;
  p.get_staff(45, "Maria");
  p.get_typist(500);
  p.display_typist();

  officer o;
  o.get_staff(52, "Yuzuru");
  o.get_officer('A');
  o.display_officer();

  return 0;
}