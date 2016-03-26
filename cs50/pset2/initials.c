#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
  printf("Please enter your name: \n");
  string user_name = GetString();

  printf("%c", user_name[0]);

  for (int i = 0, n = strlen(user_name); i < n; i++) {
    if (user_name[i] == ' ')
    {
      printf("%c", user_name[i + 1]);
    }
  }
  printf("\n");
}
