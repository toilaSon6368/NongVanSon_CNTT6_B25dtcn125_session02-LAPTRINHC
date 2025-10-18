#include <stdio.h>
#include <conio.h>//thu vien chua getch(),....
#define PI 3.14// gan pi = 3.14
#include <math.h>//thu vien tinh toan pow(), abs(), log()..
#include <time.h>//thu vien ho tro sinh ra so random " srand(time(0)) VIDU: n = 1 + rand()%(3+1-1); CTHUC: n = min + rand()%(max+1-min)
int main(){//nho la int hay float
	int a = 5;
    int b = 16;
    int c = 3;
    
    double ketQua;
    ketQua = (pow(a, 2) + sqrt(b)) / (c + 1) - 5;

    printf("Voi a = %d, b = %d, c = %d\n", a, b, c);
    printf("Ket qua cua bieu thuc la: %f\n", ketQua);

    return 0;
}


