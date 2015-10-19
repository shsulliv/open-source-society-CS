#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("How much change is owed: \n");
  float input = GetFloat();
  int amount = input*100;
  int coins = 0;

  while (amount != 0)
  {
    if (amount - 25 >= 0)
    {
      amount -= 25;
    }
    else if (amount - 10 >= 0)
    {
      amount -= 10;
    }
    else if (amount - 5 >= 0)
    {
      amount -= 5;
    }
    else
    {
      amount -= 1;
    }
    coins++;
  }

  printf("%i\n", coins);
}