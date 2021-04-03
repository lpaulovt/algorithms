#include <stdio.h>

void read(int v[])
{
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", v + i);
  }
}

void printPares(int v[])
{
  int pares = 0;

  for (int i = 0; i < 10; i++)
  {
    if (*(v + i) % 2 == 0)
    {
      pares += *(v + i);
    }
  }
  printf("A soma dos valores pares é: %d\n", pares);
}

int main()
{
  printf("Informe 10 valores: \n");

  int v[10];
  read(v);
  printPares(v);
}