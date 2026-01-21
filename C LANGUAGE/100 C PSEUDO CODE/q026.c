#include<stdio.h>
int main(){
    int i = 10;

    i = !i>14;
    printf("%d",i);

    return 0;
}

// Output : 0

/*
Explanation :
Logical operator have more precedency than relatonal operator.
*/