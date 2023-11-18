#include <stdio.h>

int main(void){
    // loops and varaibles
    int counting = 3;
    while(counting > 0)
    {
        printf("meow\n");
        // counting = counting - 1;
        counting--;
    }

    //for loop
    for(int counter = 0; counter < 3; counter++){
        printf("meow %d\n", counter);
    }
}