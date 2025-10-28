#include<stdio.h>
int main(){
    int a = 2;
    printf("%d %d %d\n",a*a, ++a, a++);
    return 0;
}

/* ans : different output based on compiler
output : gcc compiler(originanl) : 16 4 2
output : apple x-code compiler : 4 3 3
*/