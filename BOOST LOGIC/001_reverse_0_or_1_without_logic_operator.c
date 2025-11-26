//Q1. Take Inpur form user 0 or 1 and print 1 if user enter 0 and print 0 if user enter 1.
// Constraints : Without Logical Operator : if-else, ternamry and not

#include <stdio.h>
int fun(int x) {
    return 1-x;
}

int main() {
    
    int x;
    
    printf("Enter 0 or 1 : ");
    scanf("%d", &x);
    
    printf("%d", fun(x));

    return 0;
}
