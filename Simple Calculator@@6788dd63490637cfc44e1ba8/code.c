#include <stdio.h>

int main() {
    int a, b;
    char c;
    int d;  // Change d to float for division

    // printf("Enter two numbers and an operator: ");
    scanf("%d %d", &a, &b);
    scanf(" %c", &c); // Space before %c to handle newline

    switch (c) {
        case '+':
            d = a + b;
            printf("%d", d);
            break;
        case '-':
            d = a - b;
            printf("%.2f", d);
            break;
        case '/':
            if (b == 0) {
                printf("error");
            } else {
                d = (float)a / b;
                printf("%.2f", d);
            }
            break;
        case '*':
            d = a * b;
            printf("%.2f", d);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
