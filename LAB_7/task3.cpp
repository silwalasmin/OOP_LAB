//WAP in CPP to illustrate the concept of typeid operator.
#include <iostream>
#include <typeinfo>

class Base
{
    virtual void func() {}
};
class students : public Base
{
    char name[50];
    int roll;

public:
    void getdata()
    {
        std::cin >> name >> roll;
    }
    void showdata()
    {
        std::cout << "Name=" << name << "Roll=" << roll;
    }
};
int main()
{

    int i, *iptr;
    double d, *dptr;
    students s, *sptr;
    std::cout << "The type of i is : " << typeid(i).name() << std::endl;
    std::cout << "The type of iptr is : " << typeid(iptr).name() << std::endl;
    std::cout << "The type of d is : " << typeid(d).name() << std::endl;
    std::cout << "The type of dptr is : " << typeid(dptr).name() << std::endl;
    std::cout << "The type of s is : " << typeid(s).name() << std::endl;
    std::cout << "The type of sptr is : " << typeid(sptr).name() << std::endl;
    return 0;
}