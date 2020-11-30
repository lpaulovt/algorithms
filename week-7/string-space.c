#include <stdio.h>

int main()
{
  char string1[20];

  printf("Informe um texto: \n");
  scanf("%[^\n]s", string1);

  printf("Você digitou o texto: %s\n", string1);
}