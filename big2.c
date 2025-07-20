#include <stdio.h>
void big2() {
    int num1, num2;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The bigger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The bigger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    //return 0;
}

