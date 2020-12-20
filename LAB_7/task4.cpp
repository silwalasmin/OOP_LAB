//WAP in CPP to illustrate the concept of virtual functions.
#include <iostream>
class base
{
public:
    virtual void show()
    {
        std::cout << "Base class is invoked" << std::endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        std::cout << "Derived Class is invoked" << std::endl;
    }
};
int main()
{
    base *B;
    derived D;
    B = &D;
    B->show();
}
