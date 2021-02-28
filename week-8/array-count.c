#include <stdio.h>

int main()
{
  int values[4];
  int number = 0;

  printf("Informe os quatros valores:\n");
  for (int i = 0; i < 4; i++)
  {
    scanf("%d", &values[i]);
  }

  for (int i = 0; i < 4; i++)
  {
    if (values[i] > 0)
    {
      number++;
    }
  }
  printf("O vetor apresenta %d valores positivos.\n", number);
}