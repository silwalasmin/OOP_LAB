//Write a program in CPP to find the sum of two complex numbers using the OOP concept.
#include<iostream> 
using namespace std; 
class complex{
private: 
    float real, imag; 
public: 
    void getdata(){
        cout<<"Enter the real and imaginary part of complex number: ";
        cin>>real>>imag;
    }
    complex add_complex(complex a, complex b){
        complex c; 
        c.real=a.real+b.real; 
        c.imag=a.imag+b.imag;
        return c; 
    }
    void showdata(){
        cout<<"The sum of two complex number is: "<<real<<"+i"<<imag;
    }
};
int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.add_complex(c1,c2).showdata();
}