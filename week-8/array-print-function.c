#include <stdio.h>

void read(int values[], int n)
{
  printf("Informe os valores:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &values[i]);
  }
}

void printArray(int values[], int number)
{
  for (int i = 0; i < number; i++)
  {
    printf("%d\n", values[i]);
  }
}

int main()
{
  int values[4];
  read(values, 4);
  printArray(values, 4);
}