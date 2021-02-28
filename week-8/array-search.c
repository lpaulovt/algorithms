#include <stdio.h>

int main()
{
  int values[4];
  int number;

  for (int i = 0; i < 4; i++)
  {
    scanf("%d", &values[i]);
  }

  printf("Informe o número para buscar:\n");
  scanf("%d", &number);

  printf("O número %d aparece nas posições:\n", number);
  for (int i = 0; i < 4; i++)
  {
    if (values[i] == number)
    {
      printf("%d\n", i);
    }
  }
}