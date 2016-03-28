#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
  if (argc < 2 || argc > 2)
  {
    return 1;
  }
  else
  {
    int key = atoi(argv[1]);
    printf("Enter a string in plain text: \n");
    string p = GetString();
    for (int i = 0, n = strlen(p); i < n; i++)
    {
      if (isupper(p[i]))
      {
        printf("%c", (p[i] - 65 + key) % 26 + 65);
      }
      else if (islower(p[i]))
      {
        printf("%c", (p[i] - 97 + key) % 26 + 97);
      }
      else
      {
        printf("%c", p[i]);
      }
    }
    printf("\n");
    return 0;
  }
}
