#include <stdio.h>
int main(){
	
    int a = 15;
    int b = 4;
    int c = 6;
    int d = 3;
    
    int A;

    A = a * b - 2 * c + 3 * (a - d);
    printf("Voi cac gia tri:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n\n", d);

    printf("Giá tra cua bieu thuc A = a*b - 2*c + 3*(a-d) là: %d\n", A);

    return 0; 
}
