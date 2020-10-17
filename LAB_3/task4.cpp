//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using non-member/friend function.
#include <iostream>
using namespace std;
class complex
{
private:
    float real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    void showdata()
    {
        cout << real << "+i" << imag << endl;
    }
    friend complex operator+(complex &, complex &);
};
complex operator+(complex &c1, complex &c2)
{
    complex t;
    t.real = c1.real + c2.real;
    t.imag = c1.imag + c2.imag;
    return t;
}
int main()
{
    complex c1(1, 1), c2(2, 1), c3;
    c3 = c1 + c2;//c3 = operator+(c1, c2);
    c3.showdata();
}