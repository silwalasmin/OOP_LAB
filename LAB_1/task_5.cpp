//Task 5
//WAP in CPP to illustrate the concept of default arguments.
#include <iostream>
using namespace std;
void sum(int a, int b = 5, int c = 0)
{
    cout << a + b + c << endl;
}
int main()
{
    sum(2);
    sum(2, 3);
    sum(2, 3, 5);
    return 0;
}
