// Write a program in CPP to input the name, roll, marks and address of n students from the user and 
//display the entered details using the concept of class and objects.
#include<iostream>
using namespace std; 
class student {
private: 
    char name[50],address[50];
    int roll;
    float marks;
public: 
void getdata(){
    cout<<"Enter the name, address, roll and marks of the student: ";
    cin>>name>>address>>roll>>marks;
}
void showdata(){
    
    cout<<name<<"\t"<<address<<"\t"<<roll<<"\t"<<marks<<endl;
}
};
int main(){
    int n;
    student s[20];
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++){
        s[i].getdata();
    }
    for(int i=0;i<n;i++){
        s[i].showdata();
    }
}