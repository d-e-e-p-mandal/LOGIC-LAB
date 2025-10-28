#include <stdio.h>
void main(){
    int i = 1;

    label:
    {
        if (i > 0){
            i++;
            printf("%d\t", i);
            goto label;
        }
    }
}

/*Ans :
Infinite Loop.
*/