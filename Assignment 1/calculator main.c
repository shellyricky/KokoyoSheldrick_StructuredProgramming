#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Sum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
        printf("Modulus: %d\n", (int)num1 % (int)num2);
    } else {
        printf("Cannot divide or calculate modulus with zero.\n");
    }

    return 0;
}
