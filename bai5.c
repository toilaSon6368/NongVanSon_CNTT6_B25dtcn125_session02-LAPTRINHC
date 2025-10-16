#include <stdio.h>

int main() {   
    int soNguyen1 = 10;
    int soNguyen2 = 5;
    float soThuc = 8.75f; 

    float tongThuc; 
    int tongNguyen;

    tongThuc = soNguyen1 + soNguyen2 + soThuc;
    tongNguyen = soNguyen1 + soNguyen2 + (int)soThuc;

    printf("Cac so da cho:\n");
    printf("- So nguyen 1: %d\n", soNguyen1);
    printf("- So nguyen 2: %d\n", soNguyen2);
    printf("- So thuc: %.2f\n\n", soThuc);

    printf("=> Tong chinh xac (kieu float) cua 3 so la: %.2f\n", tongThuc);
    printf("=> Tong phan nguyen (kieu int) cua 3 so la: %d\n", tongNguyen);

    return 0;
}

