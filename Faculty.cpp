#include <bits/stdc++.h>
using namespace std;
class faculty
{
  int id;
  string name;
  string post;
  string qualification;
  string address;

public:
  void get(int i, string n, string p, string q, string a)
  {
    id = i;
    name = n;
    post = p;
    qualification = q;
    address = a;
  }
  void display()
  {
    cout << "Displaying... " << endl;
    cout << "Id= " << id << endl;
    cout << "Name= " << name << endl;
    cout << "Post= " << post << endl;
    cout << "Qualification= " << qualification << endl;
    cout << "Address= " << address << endl;
  }
};

int main()
{
  faculty f;
  int i;
  cout << "Enter ID: ";
  cin >> i;
  string n, p, q, a;
  cout << "Enter Name: ";
  cin >> n;
  cout << "Enter Post: ";
  cin >> p;
  cout << "Enter Qualification: ";
  cin >> q;
  cout << "Enter Address: ";
  cin >> a;
  f.get(i, n, p, q, a);
  f.display();
  return 0;
}