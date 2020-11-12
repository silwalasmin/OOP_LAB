/*Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
inch using the concept of basic to user defined data conversion.*/

#include <iostream>
using namespace std;
class ConvertDist
{
private:
    float inch, feet;

public:
    ConvertDist()
    {
        inch = feet = 0;
    }
    ConvertDist(float meter)
    {
        float temp = meter * 3.2808;
        feet = (int)temp;

        inch = (temp - feet) * 12;
    }
    void showdata()
    {
        cout << "The total distance is: " << feet << " feets and " << inch << " inches. " << endl;
    }
};
int main()
{
    ConvertDist d1;
    float m;
    cout << "Enter distance in meter: ";
    cin >> m;
    d1 = m;
    d1.showdata();
    return 0;
}
