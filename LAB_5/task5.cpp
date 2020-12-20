//Write a program in CPP to illustrate the concept of rethrowing an exception
#include <iostream>

int main()
{
    int x, y;
    std::cout << "Enter two numerator and denomenator numbers:  " << std::endl;
    std::cin >> x >> y;

    try
    {
        try
        {
            if (y != 0)
            {
                std::cout << "The result of division is " << (x / y) << std::endl;
            }
            else
                throw y;
        }
        catch (int z)
        {
            std::cout << "Error cannot be handled here. Rethrowing" << std::endl;
            throw; //Rethrow is done here
        }
    }
    catch (int p)
    {
        std::cout << "Divide by zero exception is caught" << std::endl;
    }
    return 0;
}
