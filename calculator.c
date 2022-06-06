#include <stdio.h>

void main() {
    int n1;
    int n2;
    char op;

    scanf("%d %c %d", &n1, &op, &n2);

    switch(op) {
        case '+':
        printf("%d", n1 + n2);
        break;

        case '-':
        printf("%d", n1 - n2);
        break;

        case '*':
        printf("%d", n1 * n2);
        break;

        case '/':
        printf("%d", n1 / n2);
        break;
    }

}