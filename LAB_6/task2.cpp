//task2
#include <iostream>

class student
{
protected:
    int roll;
    char name[25];

public:
    void getdata()
    {
        std::cout << "Enter name and roll number" << std::endl;
        std::cin >> name >> roll;
    }
};
class employee
{
protected:
    int id;
    char org_name[25];

public:
    void setdata()
    {
        std::cout << "Enter id and organisation name" << std::endl;
        std::cin >> id >> org_name;
    }
};
class officer : public student, public employee
{
protected:
    int working_hr;

public:
    void getofficer()
    {
        std::cout << "Enter working hour" << std::endl;
        std::cin >> working_hr;
    }
    void showdata()
    {
        std::cout << "The information of officer is:" << std::endl
                  << "Name:" << name << std::endl
                  << "Roll:" << roll << std::endl
                  << "ID:" << id << std::endl
                  << "Organisation name:" << org_name << std::endl
                  << "Working hour:" << working_hr;
    }
};
int main()
{
    officer o;
    o.getdata();
    o.setdata();
    o.getofficer();
    o.showdata();
    return 0;
}
