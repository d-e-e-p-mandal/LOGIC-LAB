#include<stdio.h>
int main(){
    int n = 65;
    switch (n){
    case 64 :
        printf("case 64\n");
        break;
    case 'A' :
        printf("case A\n");
        break;
    default:
        printf("case default\n");
        break;
    }
    return 0;
}

/*OPTIONS :
A. CASE 64
B. CASE A
C. CASE DEFAULT
D. Compiler Error : Incompatible datatypes in case lavel and switch expression 
*/
/*ANS : case A*/