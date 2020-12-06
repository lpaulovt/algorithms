#include <stdio.h>

void read(int values[], int n)
{
  printf("Informe os valores:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &values[i]);
  }
}

void printArray(int values[], int number, int searchNumber)
{
  printf("Informe o número para buscar:\n");
  scanf("%d", &searchNumber);

  printf("O número %d aparece nas posições:\n", searchNumber);
  for (int i = 0; i < number; i++)
  {
    if (values[i] == searchNumber)
    {
      printf("%d\n", i);
    }
  }
}

int main()
{
  int values[4], searchNumber;
  read(values, 4);
  printArray(values, 4, searchNumber);
}