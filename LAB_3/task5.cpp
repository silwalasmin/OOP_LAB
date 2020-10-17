//Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by overloading binary *operator.
#include<iostream> 
using namespace std; 
class Product{
private: 
    int matrix[3][3];    
public:
    void getdata(){
        cout<<"Enter the matrix: "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Matrix["<<i+1<<"]["<<j+1<<"]=__: ";
                cin>>matrix[i][j];
            }
        }
    }
    Product operator *(Product &m){
        Product t; int sum;
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum=0;
                for (int k=0;k<3;k++){
                    sum+=matrix[i][k]* m.matrix[k][j];
                }
            t.matrix[i][j]=sum;
            }
        }
        return t; 
    
    }
    void showdata(){
        cout<<"The product is: "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Product A,B,C,D; 
    A.getdata(); B.getdata(); 
    C=A*B; //C=A.operator *(B)
    C.showdata(); 
    return 0;
}