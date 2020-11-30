#include <stdio.h>
#include <string.h>

void concatena(char s1[], char s2[])
{
  int i, j;

  for (i = 0; s1[i] != '\0'; i++)
  {
  }
  for (j = 0; s2[j] != '\0'; j++)
  {
    s1[i] = s2[j];
    i++;
  }

  s1[i] = '\0';
}

int main()
{
  char string1[16];
  char string2[5];

  printf("Digite o valor da primeira string: \n");
  scanf("%s", string1);
  printf("Digite o valor da segunda string: \n");
  scanf("%s", string2);

  concatena(string1, string2);

  printf("O texto completo é: %s\n", string1);
}