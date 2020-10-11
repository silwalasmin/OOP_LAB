//WAP in CPP to illustrate the concept of inline function.

#include<iostream>
using namespace std;

inline int small(int a, int b){
  return (a<b)?a:b;
}
int main(){
    int a,b,s;
    cout<<"Enter two number: ";
    cin >>a>>b;
    cout<<"smallest number is: "<<small(a,b)<<endl;
}
