#include <stdio.h>
//Aritmética de ponteiros
int main()
{
  int n;
  int *pn;
  pn = &n;

  printf("Informe a quantida de valores: \n");
  scanf("%d", pn);

  int v[n];
  int *pv1 = v;
  int *pv2 = &v[0];
  if (pv1 == pv2)
  {
    printf("Iguais!\n");
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d", (v + i));
  }

  int menor = *(v + 0);
  for (int i = 0; i < n; i++)
  {
    if (*(v + i) < menor)
    {
      menor = *(v + i);
    }
  }

  printf("%d", menor);
}