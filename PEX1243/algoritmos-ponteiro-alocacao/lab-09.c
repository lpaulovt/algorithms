#include <stdio.h>

int main()
{
  int n;
  int *pn;

  pn = &n;

  printf("Digite a quantidade de vezes:\n");
  scanf("%d", pn);

  int v[n];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }

  int imenor = 0;
  int *pv = v + 1;
  for (int i = 0; i < n; i++)
  {
    if (*pv < v[imenor])
    {
      imenor = i;
    }
    pv++;
  }

  printf("Menor: %d\n", imenor);
}