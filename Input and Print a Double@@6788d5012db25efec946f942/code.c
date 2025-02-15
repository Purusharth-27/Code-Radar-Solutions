#include <stdio.h>

int main() {
    double num1, num2, result;

    // Taking input
    scanf("%lf %lf", &num1, &num2);

    // Performing an operation (e.g., division)
    result = num1 / num2;

    // Displaying the result with high precision
    printf("You entered: %.4lf\n", result);

    return 0;
}
