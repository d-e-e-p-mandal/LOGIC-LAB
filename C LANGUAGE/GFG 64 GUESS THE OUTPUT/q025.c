#include<stdio.h>
int main(){
    int a,b,c;
    c = 4;
    a = b = c;
    c = a==b;

    printf("%d",c);
    return 0;
}


// Output : 1