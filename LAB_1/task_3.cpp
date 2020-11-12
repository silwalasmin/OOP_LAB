//Task 3
//WAP in CPP to find the area of circle and rectangle using the concept of function overloading.
#include <iostream>
using namespace std;
float area(float r)
{
    return (3.14 * r * r);
}
float area(float a, float b)
{
    return a * b;
}
int main()
{
    int ch;
    float r, l, b, a;
    cout << "Enter your choice" << endl;
    cout << "1. Area of circle" << endl;
    cout << "2. Area of rectangle" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter radius of circle: ";
        cin >> r;
        a = area(r);
        cout << "The are of circle is: " << a << endl;
    }
    if (ch == 2)
    {
        cout << "Enter lenght and breadth of rectange:";
        cin >> l >> b;
        a = area(l, b);
        cout << "The are of rectangle is: " << a;
    }

    return 0;
}