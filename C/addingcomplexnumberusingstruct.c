#include <stdio.h>
struct complex 
{
    float real;
    float imag;
};
int main() {
    struct complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}
