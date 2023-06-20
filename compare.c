#include <stdio.h>
#include <cs50.h>
// This is the lecture of conditional like (if and else)
int main(void)
{
  // ask the users for x and y value to give
  int  x = get_int("what is x? ");
  int  y = get_int("what is y? ");
  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    printf("x is greater than y\n");
  }
  else
  {
    printf("x is equal y\n");
  }
}