// Implement max function without logical Operator.

#include <stdio.h>
#include <stdlib.h>

int myMin(int x, int y) {
    return (x + y - abs(x - y)) / 2;
}

int main() {
    int x, y;
    printf("Enter x and y : ");
    scanf("%d %d", &x, &y);
    printf("Min : %d", myMin(x, y));
    return 0;
}

