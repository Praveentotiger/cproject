#include <stdio.h>

void rev() {
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;         // Get last digit
        reversed = reversed * 10 + digit; // Add digit to reversed number
        num /= 10;                    // Remove last digit
    }

    printf("Reversed number = %d\n", reversed);
   // return 0;
}

