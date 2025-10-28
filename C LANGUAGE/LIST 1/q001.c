#include<stdio.h>
int main(){
    int i = printf("Hi\n");
    printf("%d",i);
    return 0;
}
/* Output :
Hi
3
*/

/*
Explanation :
printf("Hi\n") -> It contains 3 character H, i and \n
so it return value 3. variavle i initilize with value 3
So print : 1st printf : Hi
and 2nd printf : 3
*/