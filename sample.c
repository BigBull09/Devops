#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

