//Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using member function.

#include<iostream> 
using namespace std; 
class complex{
private: 
    float real,imag; 
public: 
    complex(){
        real=0;
        imag=0; 
    }
    complex(float r, float i){
        real=r; 
        imag=i; 
    }
    complex operator ++(){ //prefix increment operation
    complex t; 
    t.real=++real; 
    t.imag=++imag;
    return t; 
    }
    complex operator ++(int){ //postfix increment operation
    complex t; 
    t.real=real++; 
    t.imag=imag++;
    return t;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main(){
    complex c1(2,2), c2(0.0,0.1),c3;
    c2=++c1;    
    c3=c2++;    
    c1.showdata(); 
    c2.showdata(); 
    c3.showdata();   
    
}