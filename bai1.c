#include <stdio.h>

int main() {
    // So nguyen co dau
    short a = 10;                     // short: so nguyen ngan, 2 byte
    int b = -1000;                    // int: so nguyen, kich thuoc phu thuoc he thong, thuong la 4 byte
    long c = 123456L;                 // long: so nguyen dai, it nhat 4 byte
    long long d = 9876543210LL;       // long long: so nguyen rat dai, it nhat 8 byte

    // So nguyen khong dau
    unsigned short e = 20;            // unsigned short: so nguyen ngan khong dau, 2 byte
    unsigned int f = 2000;            // unsigned int: so nguyen khong dau, thuong la 4 byte
    unsigned long g = 654321UL;       // unsigned long: so nguyen dai khong dau, it nhat 4 byte
    unsigned long long h = 1234567890ULL; // unsigned long long: so nguyen rat dai khong dau, it nhat 8 byte

    char i = 'X';                     // char: ky tu don, 1 byte

    // In gia tri cua cac bien de kiem tra
    printf("short a = %hd\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);
    printf("unsigned short e = %hu\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);
    printf("char i = %c\n", i);

    return 0;
}
