#include <stdio.h>
void main(){
    int i = 0;

    label:
    {
        if (i < 10){
            i++;
            printf("%d\t", i);
            goto label;
        }
    }
}

/*Output : 
1       2       3       4       5       6       7       8       9       10     
*/