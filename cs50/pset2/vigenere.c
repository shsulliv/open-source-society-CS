#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{

  string keyword = argv[1];

  if (argc < 2 || argc > 2)
  {
    return 1;
  }

  for (int i = 0, n = strlen(keyword); i < n; i++)
  {
    if (isalpha(keyword[1]) == false)
    {
      return 1;
    }
  }

  printf("Enter a string in plain text: \n");
  string message = GetString();

  for (int i = 0, n = strlen(message); i < n; i++)
  {
    int key = keyword[i % strlen(keyword)];
    
    if (isupper(key))
    {
      key = key - 65;
    }
    else if (islower(key))
    {
      key = key - 97;
    }

    if (isupper(message[i]))
    {
      printf("%c", (message[i] - 65 + key) % 26 + 65);
    }
    else if (islower(message[i]))
    {
      printf("%c", (message[i] - 97 + key) % 26 + 97);
    }
    else
    {
      printf("%c", message[i]);
    }
  }

  printf("\n");
  return 0;
}
