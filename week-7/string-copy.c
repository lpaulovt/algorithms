#include <stdio.h>

void copyString(char string1[], char string2[])
{
  int i;
  for (i = 0; string2[i] != '\0'; i++)
  {
    string1[i] = string2[i];
  }
  string1[i] = '\0';
}

int main()
{
  char string1[15];
  char string2[15];

  printf("Informe o texto a ser copiado:\n");
  scanf("%s", string2);

  copyString(string1, string2);
  printf("O texto copiado foi %s\n", string1);
}