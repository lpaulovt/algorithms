#include <stdio.h>
#include <string.h>

int main()
{
  char string1[50];
  char string2[50];

  printf("Informe uma string a ser copiada: \n");
  scanf("%s", string1);
  strcpy(string2, string1);

  printf("O valor copiado foi: %s\n", string2);
}