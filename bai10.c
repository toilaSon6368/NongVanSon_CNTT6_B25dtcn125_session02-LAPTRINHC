#include <stdio.h>
#include <math.h>   
#include <stdlib.h> 

int main() {
	
    int a = 5;
    int b = 12;
    int c = 10;

    double S;
    double term1 = sqrt(pow(a, 2) + pow(b, 2)) / (c + 1.0);
    double term2 = (a * (double)b) / c; 
    double term3 = sqrt(abs(a - b) + pow(c, 2));

    S = term1 + term2 - term3;

    printf("voi cac gia tri a = %d, b = %d, c = %d\n\n", a, b, c);
    printf("Gia tri bieu thuc S là: %f\n", S);

    return 0; 
}
