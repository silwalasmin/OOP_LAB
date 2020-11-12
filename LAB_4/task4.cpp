/*WAP in CPP to convert the co - ordinates from Cartesian system to polar system using the concept of
user defined to user defined conversion by writing conversion routine in destination class.*/
#include <iostream>
#include <cmath>
using namespace std;
class rectangular
{
private:
    float x, y;

public:
    rectangular()
    {
        cout << "Enter rectangular coordinates(x,y): ";
        cin >> x >> y;
        cout << x << "and" << y << endl;
    }
    float returnx()
    {
        return x;
    }
    float returny()
    {
        return y;
    }
};

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
    polar(rectangular rect)
    {
        r = sqrt(pow(rect.returnx(), 2) + pow(rect.returny(), 2));
        theta = atan(rect.returny() / rect.returnx());
    }
    void showdata()
    {
        cout << "In polar system(r, theta): "
             << "(" << r << "," << theta << ")";
    }
};

int main()
{
    rectangular rect;
    polar pol;
    pol = rect;
    pol.showdata();
    return 0;
}