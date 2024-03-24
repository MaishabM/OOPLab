#include <iostream>
using namespace std;
int main()
{
  // new and delete operator
  int *a;
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Creating an array of size " << size << endl;

  a = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < size; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  cout << "Dynamic allocation has been  successfully done.";
  delete a;
  return 0;
}
