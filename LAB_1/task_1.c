//Task 1:
// WAP in C to add two complex numbers using the concept of structure
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
void main()
{
    struct complex c1, c2, s;
    printf("Enter real and imaginary of first number: ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("\n");
    printf("Enter real and imaginary of second number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    s.real = c1.real + c2.real;
    s.imag = c2.real + c2.imag;
    printf("the sum  is %0.3f + i %0.3f \n", s.real, s.imag);
}
