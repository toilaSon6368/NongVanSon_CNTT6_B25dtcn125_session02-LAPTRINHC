#include <stdio.h>
int main() {
    int chieuDai = 25;
    int chieuRong = 10;

    int chuVi;
    int dienTich;

    chuVi = (chieuDai + chieuRong) * 2;

    dienTich = chieuDai * chieuRong;
    
    printf("Hinh chu nhat co:\n");
    printf("- Chieu dai: %d\n", chieuDai);
    printf("- Chieu rong: %d\n\n", chieuRong); 

    printf("=> Chu vi: %d\n", chuVi);
    printf("=> Dien tich: %d\n", dienTich);

    return 0;
}

