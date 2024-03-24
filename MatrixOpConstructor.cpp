#include <bits/stdc++.h>
using namespace std;
#define m 2
#define n 2
int a[m][n];

class MAT
{

public:
  void get()
  {
    cout << "Input the values of matrix A: " << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
      }
    }
  }
  void add()
  {
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        c[i][j] = a[i][j] + a[i][j];
      }
    }
    cout << "Showing matrix addition of A with A:" << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }

  void sub()
  {
    int c[m][n];
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        c[i][j] = a[i][j] - a[i][j];
      }
    }
    cout << "Showing matrix subtraction of A from A:" << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }

  void mul()
  {
    int c[m][n] = {0};
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < m; j++)
      {
        for (int k = 0; k < m; k++)
        {
          c[i][j] += a[i][k] * a[k][j];
        }
      }
    }
    cout << "Showing matrix multiplication of A with A: " << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  MAT mat;
  mat.get();
  mat.add();
  mat.sub();
  mat.mul();
  return 0;
}