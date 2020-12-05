#include <stdio.h>

int main()
{
  int n;
  printf("Informe a qunatidade de valores: \n");
  scanf("%d", &n);

  int valores[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &valores[i]);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d\n", valores[i]);
  }
}