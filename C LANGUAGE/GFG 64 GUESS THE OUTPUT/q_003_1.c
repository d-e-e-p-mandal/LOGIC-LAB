#include<stdio.h>
int main(){
    
    int i = 2;
    switch(i)
    {
        case 1:
            printf("Hai\n");
        case 2:
            printf("hello\n");
        case 3:
            printf("namaste\n");
        default:
            printf("Bye");
    }
    return 0;
}