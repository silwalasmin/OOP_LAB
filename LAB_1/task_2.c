//WAP in C to input the name, roll, marks and address of n students entered by the user and display the entered details using the concept of structure.
#include<stdio.h>
struct student{
char name[30],addr[30];
int roll, marks;

};
void main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student s[n];
    for (int i=0;i<n;i++){
        printf("Enter name, address, roll and marks  of student %d: ",i);
        scanf("%s%s%d%d",&s[i].name,&s[i].addr,&s[i].roll,&s[i].marks);

    }
    printf("Name   Address    Roll    Marks \n");
    for(int i=0;i<n;i++){
        printf("%s\t%s\t%d\t%d",s[i].name,s[i].addr,s[i].roll,s[i].marks);
        printf("\n");
    }

}
