#include<stdio.h>
# define x 5+2
int main(){

    int i;
    i = x*x*x;

    printf("i = %d\n",i);
    
    return 0;
}

// output : i = 27
/*
    explanation : Operator Precedence ans associativity
    i = x * x * x;
      = 5 + 2 * 5 + 2 * 5 +2;
      = 5 + 10 + 10 + 2
      = 27
*/