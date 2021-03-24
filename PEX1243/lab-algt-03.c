/* Aluno: 
   Paulo Vitor Lopes da Silva - email: paulo.silva06497@alunos.ufersa.edu.br
 */

#include <stdio.h>
#include <stdlib.h>

void checksLargerNumbers(int v[], int n, int *pCompareNumber)
{
  printf("Os valores maiores ou iguais a 3 no vetor são:\n");
  for (int i = 0; i < n; i++)
  {
    if (v[i] >= *pCompareNumber)
    {
      printf("%d\n", v[i]);
    }
  }
}

int main()
{
  int arraySize;
  int *pArraySize = &arraySize;

  printf("Digite o tamanho do vetor:\n");
  scanf("%d", pArraySize);

  int *arrayNumbers = (int *)malloc(*pArraySize * sizeof(int));
  if (arrayNumbers == NULL)
  {
    printf("Memória insuficiente");
    exit(1);
  }

  printf("Digite os valores do vetor:\n");
  for (int i = 0; i < *pArraySize; i++)
  {
    scanf("%d", &arrayNumbers[i]);
  }

  int compareNumber;
  int *pCompareNumber = &compareNumber;

  printf("Digite um valor a ser avaliado:\n");
  scanf("%d", pCompareNumber);

  checksLargerNumbers(arrayNumbers, *pArraySize, pCompareNumber);

  free(arrayNumbers);
}