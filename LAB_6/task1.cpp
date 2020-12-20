//task1
#include <iostream>

class student
{
protected:
    char name[50];
    int roll;

public:
    void getdata()
    {
        std::cout << "Enter the name and roll number" << std::endl;
        std::cin >> name >> roll;
    }
};
class leader : public student
{
protected:
    int id;
    char unionName[25];

public:
    void getleader()
    {
        std::cout << "Enter union name and union id of leader" << std::endl;
        std::cin >> unionName >> id;
    }
    void showleader()
    {
        std::cout << "The information of leader is " << std::endl;
        std::cout << "Name:" << name << std::endl
                  << "Roll:" << roll << std::endl
                  << "Union:" << unionName << std::endl
                  << "Union ID : " << id << std::endl;
    }
};
int main()
{
    leader L1;
    L1.getdata();
    L1.getleader();
    L1.showleader();
    return 0;
}
