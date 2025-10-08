// Implement max function without logical Operator.
#include <stdio.h>
#include <stdlib.h>

int myMax(int x, int y) {
    return (x + y + abs(x - y)) / 2;
}

int main() {
    int x, y;
    printf("Enter x and y : ");
    scanf("%d %d", &x, &y);
    printf("Max : %d", myMax(x, y));
    return 0;
}