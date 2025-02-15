#include <stdio.h>
int main() {
    int a, b;
    char c;
    int d; 
    scanf("%d %d", &a, &b);
    scanf(" %c", &c);
    switch (c) {
        case '+':
            d = a + b;
            printf("%d", d);
            break;
        case '-':
            d = a - b;
            printf("%d", d);
            break;
        case '/':
            if (b == 0) {
                printf("error");
            } else {
                d = (float)a / b;
                printf("%d", d);
            }
            break;
        case '*':
            d = a * b;
            printf("%d", d);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
