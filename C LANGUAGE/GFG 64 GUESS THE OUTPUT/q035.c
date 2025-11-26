#include<stdio.h>
int main(){
    int x = 20;
    x *= 30 + 5;
    printf("%d\n",x);
    return 0;
}

/*Output :
700
*/

/*Explanation :
x *= 30 + 5;
x = x * (30 + 5);
x = 700;
*/