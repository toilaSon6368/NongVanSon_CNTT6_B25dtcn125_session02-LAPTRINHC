#include <stdio.h>
int main() {
    
    int number = 12345;
    int sum = 0; 
    int temp_number = number; 
    int digit; 

    
    while (temp_number > 0) {
        digit = temp_number % 10;
        sum += digit;

        temp_number /= 10;
    }

    printf("So ban dau: %d\n", number);
    printf("Tong cac chu so la: %d\n", sum);

    return 0;
}

