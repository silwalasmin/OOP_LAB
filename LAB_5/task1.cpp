/*
Write a program in CPP to find the sum of two integer numbers and two float numbers using the 
concept of function template.
*/
#include <iostream>
template <class generic>
generic add(generic a, generic b)
{
    return a + b;
}
int main()
{
    std::cout << "sum of two integers 4 and 9 is: " << add(4, 9) << std::endl;
    std::cout << "sum of two float numbers 3.5 and 8.765 is: " << add(3.5, 8.765) << std::endl;
}