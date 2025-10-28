#include<stdio.h>
int main(){
    int a, x;

    a = 5, x = a++;
    printf("%d,%d\n",a,x);

    a = 5, x = ++a;
    printf("%d,%d\n",a,x);

    a = 5, x = a--;
    printf("%d,%d\n",a,x);

    a = 5, x = --a;
    printf("%d,%d\n",a,x);
    return 0;
}