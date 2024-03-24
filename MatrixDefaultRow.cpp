#include <iostream>
using namespace std;

int dim(int c, int r = 2)
{
  int a[r][c];
  cout << "Input the values: ";
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> a[i][j];
    }
  }
  cout << "Printing the matrix: \n";
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int r, c;
  cout << "Enter the column of the matrix: ";
  cin >> c;
  dim(c);
}