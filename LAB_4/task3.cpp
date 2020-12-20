/*WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
user defined to user defined conversion by writing conversion routine in source class.
*/
#include <iostream>
#include <cmath>
using namespace std;
class polar
{
private:
    float r, theta;

public:
    polar()
    {
        r = 0;
        theta = 0;
    }
    polar(float rad, float ang)
    {
        r = rad;
        theta = ang;
    }
    void showdata()
    {
        cout << "The coordinate in polar form is "
             << "(" << r << "," << theta << ")" << endl;
    }
};
class cartesian
{
private:
    float x, y;

public:
    cartesian()
    {
        cout << "Enter coordinate in cartesian form(x,y): ";
        cin >> x >> y;
    }
    operator polar()
    {
        float rad, ang;
        rad = sqrt(pow(x, 2) + pow(y, 2));
        ang = atan(y / x);
        return polar(rad, ang);
    }
};
int main()
{
    polar pol;
    cartesian rect;
    pol = rect; //pol=rect.operator();
    pol.showdata();
    return 0;
}