//WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance.
#include <iostream>
class Base
{
public:
    Base()
    {
        std::cout << "Inside Base class Constructor" << std::endl;
    }
    ~Base()
    {
        std::cout << "Inside Base class Deconstructor" << std::endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Inside Derived class Constructor" << std::endl;
    }
    ~Derived()
    {
        std::cout << "Inside Derived class Deconstructor" << std::endl;
    }
};

int main()
{
    Derived obj1;
}