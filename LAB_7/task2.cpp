//WAP in CPP to illustrate the concept of dynamic cast operator.
#include <iostream>

class B
{
    virtual void func() {}
};
class D : public B
{
};
int main()
{
    B *b = new D();
    D *d;
    d = dynamic_cast<D *>(b);
    if (d != NULL)
        std::cout << "Casting B* to D* works";
    else
        std::cout << "cannot cast B* to D*";
    return 0;
}
