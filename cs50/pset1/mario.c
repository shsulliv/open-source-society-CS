#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("Please enter a number: \n");
  int pyramid_base = GetInt();

  for(int row = 0; row < pyramid_base; row++)
  {
    for(int column = 0; column < pyramid_base; column++)
    {
      if (column >= pyramid_base - 1 - row)
      {
        printf("#");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}