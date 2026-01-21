 #include<stdio.h>
 int main(){
    int a = 7;

    switch(a) {
        case 1 :
        case 3 :
        case 6 :
            printf("Delhi\n");
            break;
        case 2:
        case 5:
        case 8:
            printf("Bengalore\n");
            break;
        case 4:
        case 7:
        case 9:
            printf("Kolkata\n");
            break;
        default:
            printf("chennai\n");

    }
    return 0;
 }


/*OPTION :
A. Delhi
B. Chennai
C. Kolkata
D. Compilation Error

*/


 //Output: Kolkata