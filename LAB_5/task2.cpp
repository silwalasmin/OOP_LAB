/*
Write a program in CPP to find the area of rectangle with integer and float dimensions using the 
concept of class template.
*/
#include <iostream>
template <typename generic>
generic area(generic l, generic b)
{
    return l * b;
}
int main()
{
    std::cout << "Area of rectangle(length=5, breadth=2)= " << area(5, 2) << std::endl;
    std::cout << "Area of rectangle(length=8.34, breadth=4.726)= " << area(8.34, 4.726) << std::endl;
}