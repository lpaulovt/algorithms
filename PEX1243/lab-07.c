#include <stdio.h>
void read(int n, int v[])
{
  for (int i = 0; i < n; i++)
  {
    scanf("%d", v + i);
  }
}

int main()
{
  int n;
  int *pn;
  pn = &n;

  printf("Informe a quantida de valores: \n");
  scanf("%d", pn);

  int v[n];
  read(n, v);

  int temVar = v[0];
  v[0] = v[n - 1];
  v[n - 1] = temVar;

  for (int i = 0; i < n; i++)
  {
    printf("%d", v[i]);
  }
}