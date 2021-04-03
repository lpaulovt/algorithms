//Ponteiros como parâmetros de funções

#include <stdio.h>

void doubleNumber(int *a)
{
  *a = 2 * *a;
  printf("Valor de a na função: %d", *a);
}

int main()
{
  int a;
  int *pa;
  pa = &a;

  printf("Digite um número:\n");
  scanf("%d", pa);

  printf("Valor de a na função: %d\n", a);

  doubleNumber(pa);
}