// functions
// agruments , return values
// conditions
// loops
// variables
#include <stdbool.h>
#include <stdio.h>

void meow(int n);
float discount(float price, int percentage_off);

int main(void)
{
  printf("Hello world\n"); // this will print hello world and move the cursor to the next line
  printf("I am a programmer and i am starting my computer science jounery from c \n");

  // %s is for a placeholder that is for a string

  //
  // long x = 10000000000;
  // long y = 10000000000;
  // printf("%li\n", x + y);

  // conditions
  int point = 50;
  const int MINE = 2;
  const int MINE2 = 5;

  if (point < MINE || point < MINE2)
  {
    printf("you lost fewer points than me");
  }
  else if (point > MINE || point > MINE2)
  {
    printf("you lost more points than me");
  }
  else
  {
    printf("you got same point as me");
  }

  // loops

  int i = 0;
  while (i <= 2)
  {
    printf("mello \n");
    i = i + 1; // i++
  }

  // for loop
  for (int i = 0; i < 2; i++)
  {
    printf("mello\n");
  }
  meow(3);

  // discount
  float regular = 13000;
  int percent_off = 15;
  float sale = discount(regular, percent_off);
  printf("Sale price: %.2f\n", sale);

  // do while loop it checks the condtion last, and excute the do block then check the while condition
  int n;
  do
  {
    n = 4;
  } while (n < 4);

  //  for (int i = 0; i < n; i++){
  //    printf("?");
  //  }
  //  printf("\n");

  for (int i = 0; i < n; i++)
  { // for each row

    for (int j = 0; j < n; j++)
    {              // for each column
      printf("#"); // print the bricks
    }
    printf("\n"); // move to the next line
  }
}

// function, if you are creating a function in c you will have to do it outside the main function but you will have to call make a referre point at the file header area to make the compiler know that their is a function like this in the file.
void meow(int n)
{ // this is a telling the compiler that the function takes in something but don't return anything
  for (int i = 0; i <= n; i++)
  {
    printf("fine\n");
  }
}

// discount fucntion
float discount(float price, int percentage_off)
{
  return price * (100 - percentage_off) / .85;
}
// work on design , correctness, styles of writing your code
// ineteger ooverflow if you have a certain amount of bit and there are still more bits
// the inability of the computer to represent a possiblity of a real number by default in a language like c, it is called floating-point imprecision
// integer thrucation
// integer overflow
