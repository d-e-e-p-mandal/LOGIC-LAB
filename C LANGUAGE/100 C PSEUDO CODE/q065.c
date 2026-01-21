#include<stdio.h>
int main(){
    int x = (1,2,3);
    printf("%d",x);
    return 0;
}

/*Output : 3 */
/*
Comma Operator in C
	•	The comma operator evaluates expressions from left to right
	•	All expressions are evaluated
	•	The value of the entire expression is the value of the last expression

// IN For Loop :
for (i = 0, j = 10; i < j; i++, j--)
i++ executes first, then j--.
*/
