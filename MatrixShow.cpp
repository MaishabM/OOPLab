#include <iostream>
using namespace std;
int main()
{
  int r, c;
  cout << "Enter the row and column of the matrix A: ";
  cin >> r >> c;
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