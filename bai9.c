#include <stdio.h>
#include <math.h> 

int main() {
   
    int a = 4;
    int b = 10;
    int c = 5;

    double A;

    A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("Voi a = %d, b = %d, c = %d\n\n", a, b, c);
    printf("Gia tri cua bieu thuc A = a^3 + b^2 + 2*c + sqrt(a + b - c) là: %.2f\n", A);

    return 0;

