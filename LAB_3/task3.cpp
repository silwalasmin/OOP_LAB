//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using member function.
#include<iostream> 
using namespace std; 
class complex{
private: 
    float real, imag; 
public:
    complex(){
        real=0; imag=0;
    }
    complex(float r, float i){
        real=r; imag=i; 
    }
    complex operator +(complex c){
        complex t; 
        t.real=c.real+real;
        t.imag=c.imag+imag; 
        return t; 
    }
    void showdata(){
        cout<<real<<"+i"<<imag<<endl; 
    }
};
int main(){
    complex c1(1,1), c2(2,1),c3;
    (c3=c1+c2); //c3=c1.operator +c2;
    c3.showdata();
}