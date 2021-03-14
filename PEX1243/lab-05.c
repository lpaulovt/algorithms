#include <stdio.h>
//Endereços e vetores (Endenreço do primeiro elemento que  ele inicia)
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
    scanf("%d", &v[i]);
  }

  for (int i = 0; i < n; i++)
  {
    if (v[i] % 2 == 0)
    {
      printf("Par\n");
    }
    else
    {
      printf("Impar\n");
    }
  }
}