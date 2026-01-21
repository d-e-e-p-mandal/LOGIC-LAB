#include<stdio.h>
int main(){
    int i;

    i = 10 + 010;
    printf("%d",i); 

    return 0;
}

// Output : 18


/*Explanation :
10 + 010 (0 in prefix means it is octal)
10 + 8
18
*/