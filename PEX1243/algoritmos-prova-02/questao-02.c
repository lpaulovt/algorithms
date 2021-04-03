/* Alunos: 
    01 - Caio Rafael da Rocha Gomes - Matrícula: 2020010301 - email: caio.gomes01460@alunos.ufersa.edu.br
    02 - Paulo Vitor Lopes da Silva - Matrícula: 2020010310 - email: paulo.silva06497@alunos.ufersa.edu.br
 */

#include <stdio.h>
#include <string.h>

int main()
{
  int m, n;

  int matricula;
  int *pMatricula = &matricula;

  char nome[200];
  char *pNome = nome;
  float n1, n2, n3, media;

  float *pN1 = &n1;
  float *pN2 = &n2;
  float *pN3 = &n3;
  float *pMedia = &media;

  FILE *file = fopen("./dados_alunos.txt", "w");

  printf("Informe a quantidade de Turmas:\n");
  scanf("%d", &m);
  for (int i = 0; i < m; i++)
  {
    printf("Informe a quantidade de alunos da turma %d:\n", i + 1);
    scanf("%d", &n);
    fprintf(file, "TURMA %d\n", i + 1);
    for (int x = 0; x < n; x++)
    {
      printf("Matricula: ");
      scanf("%d", pMatricula);
      fprintf(file, "Matricula: %d\n", matricula);

      printf("Nome: ");
      scanf(" %[^\n]*c", pNome);
      fprintf(file, "Nome: %s\n", nome);

      printf("Nota1: ");
      scanf("%f", pN1);
      fprintf(file, "Nota1: %.1f\n", n1);

      printf("Nota2: ");
      scanf("%f", pN2);
      fprintf(file, "Nota2: %.1f\n", n2);

      printf("Nota3: ");
      scanf("%f", pN3);
      fprintf(file, "Nota3: %.1f\n", n3);

      *pMedia = (n1 + n2 + n3) / 3;
      printf("Media: %.2f\n", media);
      fprintf(file, "Media: %.1f\n", media);

      if (media >= 7)
      {
        printf("Status: APROVADO\n");
        fprintf(file, "Status: APROVADO\n");
      }
      else if (media <= 7 && media >= 3.5)
      {
        printf("Status: RECUPERACAO\n");
        fprintf(file, "Status: RECUPERACAO\n");
      }
      else if (media < 3.5)
      {
        printf("Status: REPROVADO\n");
        fprintf(file, "Status: REPROVADO\n");
      }
    }
    fprintf(file, "\n");
  }
  fclose(file);
  return 0;
}