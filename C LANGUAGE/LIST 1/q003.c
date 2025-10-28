#include<stdio.h>
int main(){
    int a = 1;
    int b = a++ + ++a;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}

/*
a = 3
b = 4
*/

/*
a++ + ++a
for pre-increment value of a increse to 2 : b = a+a is 4
*/