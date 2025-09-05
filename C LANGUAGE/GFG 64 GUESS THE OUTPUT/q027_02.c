#include<stdio.h>
int main(){
    int i;

    i = 10 + 010 + 0x10;
    printf("%d",i); 

    return 0;
}

// Output : 34

/*Explanation :
10 + 010 (0 in prefix means it is octal) + Ox10 (0x in prefix means it is Hexadecimal number)
10 + 8 + 16
*/