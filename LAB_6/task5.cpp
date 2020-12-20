//WAP in CPP to illustrate the concept of constructor and destructor invocation in multiple inheritance.
#include <iostream>
class A
{
public:
    A()
    {
        std::cout << "Inside A constructor" << std::endl;
    }
    ~A()
    {
        std::cout << "Inside A destructor" << std::endl;
    }
};
class B
{
public:
    B()
    {
        std::cout << "Inside B constructor" << std::endl;
    }
    ~B()
    {
        std::cout << "Inside B destructor" << std::endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        std::cout << "Inside C constructor" << std::endl;
    }
    ~C()
    {
        std::cout << "Inside C destructor" << std::endl;
    }
};
int main()
{
    C obj1;
    return 0;
}