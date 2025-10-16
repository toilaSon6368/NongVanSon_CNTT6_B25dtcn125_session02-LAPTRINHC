#include <stdio.h>

int main() {
    int soA = 20;
    int soB = 8;

    int tong;
    int hieu;
    int tich;
    float thuong; 

    tong = soA + soB;
    hieu = soA - soB;
    tich = soA * soB;
    thuong = (float)soA / soB; 
    
    printf("So A = %d\n", soA);
    printf("So B = %d\n\n", soB); 

    printf("Tong  : %d + %d = %d\n", soA, soB, tong);
    printf("Hieu  : %d - %d = %d\n", soA, soB, hieu);
    printf("Tich  : %d * %d = %d\n", soA, soB, tich);
    printf("Thuong: %d / %d = %.2f\n", soA, soB, thuong); 
}
