#include <stdio.h>

int main(void){
    // if statements
    // if you only have one line of code i your condition it is option to pu the curly barces
    int varX = 15;
    int varY = 20;

    if(varX < varY){
        printf("%d is less than %d\n", varX, varY);
    }
    else if(varX > varY){
        printf("%d is greater than %\n", varX, varY);
    }
    else{
        printf("they are same");
    }

    //making use of logical operator
    if(varX < varY || varX <= varY){
        printf("%d is less than or equal to %d\n");
    }
    else if(varX > varY && varX >= varY){
        printf("%d is greater or equal to %d\n");
    }
    else {
        printf("they are equal");
    }
}