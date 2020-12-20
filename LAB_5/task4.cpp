//Write a program in CPP to handle divide by zero exception using the concept of exception handling.

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers(a, b): " << std::endl;
    std::cin >> a >> b;

    try
    {
        if (a - b != 0)
            std::cout << "Result of a/(a-b):" << a / (a - b) << std::endl;
        else
            throw(a - b);
    }
    catch (int x)
    {
        std::cout << "Exception is  caught occured. value of first number-second number =" << x << std::endl;
    }
    return 0;
}
