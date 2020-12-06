#include <stdio.h>

void read(int values[], int n)
{
  printf("Informe os valores:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &values[i]);
  }
}

int main()
{
  int values[4], number;
  read(values, 4);

  printf("Informe um número:\n");
  scanf("%d", &number);

  for (int i = 0; i < 4; i++)
  {
    if (values[i] == number)
    {
      printf("%d\n", values[i]);
    }
  }
}