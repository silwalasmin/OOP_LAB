//Write a program in CPP to input the name, roll, marks and address of a student from the user and display 
//the entered details using the concept of class and object.
#include<iostream> 
using namespace std; 
class student {        //This is creation of class 
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
    
    cout<<name<<"\t"<<address<<"\t"<<roll<<"\t"<<marks;
}
};
int main(){
    student s1;
    s1.getdata();
    s1.showdata();
    return 0;
}