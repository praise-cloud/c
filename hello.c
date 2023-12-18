// functions
//agruments , return values
// conditions
// loops
//variables
#include <stdbool.h>
#include <stdio.h>

void meow(int n);

int main (void){
  printf("Hello world\n"); // this will print hello world and move the cursor to the next line
  printf("I am a programmer and i am starting my computer science jounery from c \n");

  // %s is for a placeholder that is for a string

  //
  long x = 10000000000;
  long y = 10000000000;
  printf("%li\n",x + y);


  //conditions
  int point = 50;
  const int MINE = 2;
  const int MINE2 = 5;

  if(point < MINE || point < MINE2){
    printf("you lost fewer points than me");
  }else if (point > MINE || point > MINE2){
    printf("you lost more points than me");
  }else{
    printf("you got same point as me");
  }

  //loops

  int i = 0;
  while (i <= 2){
    printf("mello \n");
    i = i + 1; // i++
  }

  // for loop
  for (int i = 0; i < 2; i++){
    printf("mello\n");
  }
    meow(3);

  //discount
  float regular = 13000;
  float sale = regular * .85;
  printf("Sale price: %.2f\n", sale);
}

  //function, if you are creating a function in c you will have to do it outside the main function but you will have to call make a referre point at the file header area to make the compiler know that their is a function like this in the file.
  void meow(int n){ // this is a telling the compiler that the function takes in something but don't return anything
    for(int i = 0; i <= n; i++){
      printf("fine\n");
    }
  }


// work on design , correctness, styles of writing your code