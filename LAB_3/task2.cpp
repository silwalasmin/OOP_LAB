//Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using non-member/friend function.
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
    void showdata(){
        cout<<real<<"+i"<<imag<<endl;
    }
    friend complex operator ++(complex & );
    friend complex operator ++(complex &, int);
};
complex operator ++(complex &c){
    complex t; 
    t.real = ++c.real;
    t.imag = ++c.imag;
    return t;
}
complex operator ++(complex &c, int){
    complex t; 
    t.real = c.real++; 
    t.imag = c.imag++;
    return t;
}
int main(){
    complex c1(2, 2), c2(0.0, 0.1), c3;
    c2 = ++c1; 
    c3 = c2++; 
    c1.showdata();
    c2.showdata();
    c3.showdata();
}