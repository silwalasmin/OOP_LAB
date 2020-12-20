//Write a program in CPP to convert the distance in feet and inch entered by the user into distance in
//meters using the concept of user defined to basic data conversion.

#include <iostream>
using namespace std;
class ConvertDist
{
private:
    float feet, inch;

public:
    void getdata()
    {
        cout << "Enter distance in feet and inch: ";
        cin >> feet >> inch;
    }
    operator float()
    {
        return (feet / 3.2808) + (inch / (12 * 3.2808));
    }
};
int main()
{
    ConvertDist d1;
    float meter;
    d1.getdata();
    meter = d1; //meter=d1.operator float()
    cout << "the distance in meters is " << meter << endl;
    return 0;
}