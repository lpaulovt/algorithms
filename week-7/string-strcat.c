#include <stdio.h>
#include <string.h>

void concatena(char s1[], char s2[])
{
  strcat(s1, s2);
}

int main()
{
  char string1[25];
  char string2[25];

  printf("Digite o valor da primeira string: \n");
  scanf("%s", string1);
  printf("Digite o valor da segunda string: \n");
  scanf("%s", string2);

  concatena(string1, string2);

  printf("O texto completo é: %s\n", string1);
}