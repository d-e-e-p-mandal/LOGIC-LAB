#include<stdio.h>
void display();
int main(){
    display();
    return 0;
}
void display() {
    printf("This is infinite\n");
    display();
}

/*Ans :
Infinite function call display().
*/