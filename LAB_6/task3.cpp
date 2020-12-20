//task3
#include <iostream>
class student
{
protected:
    char name[50];
    int roll;

public:
    void getStudent()
    {
        std::cout << "Enter name and roll of student: " << std::endl;
        std::cin >> name >> roll;
    }
};
class internal : virtual public student
{
protected:
    float m1, m2;

public:
    void getInternal()
    {
        std::cout << "Enter internal marks in subject 1, subject 2: " << std::endl;
        std::cin >> m1 >> m2;
    }
};

class external : virtual public student
{
protected:
    float m11, m22;

public:
    void getExternal()
    {
        std::cout << "Enter external marks in subject 1, subject 2: " << std::endl;
        std::cin >> m11 >> m22;
    }
};
class result : public internal, public external
{
protected:
    float total = m1 + m11 + m2 + m22;
    float percentage = 0.5 * total;

public:
    void showStudent()
    {
        std::cout << "Name: " << name << "\n"
                  << "Roll: " << roll << "\n";
    }
    void showInternal()
    {
        std::cout << "Internal Marks1: " << m1 << "\n"
                  << "Internal Marks2: " << m2 << "\n";
    }
    void showExternal()
    {
        std::cout << "External Marks1: " << m11 << "\n"
                  << "External Marks2: " << m22 << "\n";
    }

    void showResult()
    {
        total = m1 + m11 + m2 + m22;
        percentage = total * 0.5;
        std::cout << "Total marks is " << total << "and Percentag=" << percentage << std::endl;
    }
};

int main()
{
    result r1;
    r1.getStudent();

    r1.getInternal();

    r1.getExternal();
    r1.showStudent();
    r1.showInternal();
    r1.showExternal();
    r1.showResult();
    return 0;
}