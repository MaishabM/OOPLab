#include <bits/stdc++.h>
using namespace std;
class Complex
{
    // operator overload using friend function
    float x, y;

public:
    Complex(float real = 0, float img = 0)
    {
        x = real;
        y = img;
    }
    friend Complex operator+(Complex c1, Complex c2);

    void show()
    {
        cout << fixed << setprecision(2) << x << " + j" << y << "\n";
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;
    return temp;
}

int main()
{
    Complex c1(7.6, 9.9);
    Complex c2(5.4, 2.6);
    c1.show();
    c2.show();
    Complex c3 = c1 + c2;
    c3.show();
    return 0;
}