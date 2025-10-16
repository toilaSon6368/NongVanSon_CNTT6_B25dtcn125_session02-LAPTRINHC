#include <stdio.h>

int main() {

    int number = 12345;
    int reversed_number = 0; 
    int temp_number = number; 
    int last_digit; 

    while (temp_number > 0) {
       
        last_digit = temp_number % 10;

        reversed_number = reversed_number * 10 + last_digit;
        temp_number = temp_number / 10;
    }
    printf("So ban dau: %d\n", number);
    printf("So sau khi dao nguoc: %d\n", reversed_number);

    return 0;
}

