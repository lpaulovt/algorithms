#include <stdio.h>

int main()
{
  int studentQuantity;
  printf("Informe a quantidade de alunos: \n");
  scanf("%d", &studentQuantity);
  char students[studentQuantity][1000];

  for (int i = 0; i < studentQuantity; i++)
  {
    printf("Informe o nome do aluno: \n");
    scanf("%s", students[i]);
  }

  printf("===LISTA DE ALUNOS===\n");
  for (int i = 0; i < studentQuantity; i++)
  {
    printf("%s\n", students[i]);
  }
}