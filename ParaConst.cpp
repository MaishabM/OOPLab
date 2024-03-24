#include <bits/stdc++.h>
using namespace std;
class student
{
    // parameterized constructor
    int num1, num2;

public:
    student(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void print()
    {
        cout << "The numbers N1:" << num1 << " and N2:" << num2 << endl;
    }
};
int main()
{
    student s1(100, 80);
    student s2(77, 98);
    cout << "Student 1 numbers:" << endl;
    s1.print();
    cout << "Student 2 numbers:" << endl;
    s2.print();
    return 0;
}