//Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy constructor) 
//and destructor taking class complex as an example.
#include<iostream> 
using namespace std; 
class sum {
private: 
    float a,b; 
public: 
    sum(){     //This is default constructor. 
        a=0;
        b=0;
    }
    sum(float x, float y){ //This is parameterized constructor.
        a=x;
        b=y;
    }
    sum(sum &temp){ //This is copy constructor which is explicitly defined.
        a=temp.a;
        b=temp.b;
    }
    ~sum(){ //This is deconstructor
        cout<<"Memory cleared"<<endl;
    }
    void showdata(){
        cout<<"sum of input numbers is: "<<a+b<<endl;
    }
};
int main(){
    sum s1(5,5),s2(1,1),s3(s2);
    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}