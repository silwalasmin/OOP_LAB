
//Write a program in CPP to sort the list of n strings in alphabetical order using the concept of STL.
#include <iostream>
#include <list>
#include <cstring>

int main()
{
    std::list<std::string> stringList;
    int n;
    char str[40][20];
    std::cout << "Enter no. of strings:" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter a string:";
        std::cin >> str[i];

        stringList.push_back(str[i]);
    }
    stringList.sort();
    std::cout << "Strings in Alphabetical Ordering: " << std::endl;
    while (!stringList.empty())
    {
        std::cout << stringList.front() << std::endl;
        stringList.pop_front();
    }
    return 0;
}
