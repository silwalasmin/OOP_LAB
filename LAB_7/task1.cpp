//WAP in CPP to illustrate the concept of re_interpret cast operator.
#include <iostream>
class leader
{
private:
    char name[50];
    int idNo;

public:
    void getdata()
    {
        std::cout << "Enter name and union ID of leader: ";
        std::cin >> name >> idNo;
    }
    void showdata()
    {
        std::cout << "Name of leader=" << name << "\n"
                  << "union ID No=" << idNo;
    }
};
class student
{
private:
    char name[50];
    int roll;

public:
    void getdata()
    {
        std::cout << "Enter name and roll no of student: ";
        std::cin >> name >> roll;
    }
    void showdata()
    {
        std::cout << "Name of student=" << name << "\n"
                  << "Roll no=" << roll;
    }
};
int main()
{
    leader *l1 = new leader;
    student *s1 = new student;
    l1->getdata();
    s1 = reinterpret_cast<student *>(l1);
    s1->showdata();
}