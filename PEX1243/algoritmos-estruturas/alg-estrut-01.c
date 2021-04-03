#include <stdio.h>

struct funcionario
{
  int idade;
  float salario;
  int horas;
};

int main()
{
  struct funcionario f[3];
  printf("Informe os dados dos funcionários:\n");
  int i = 0;
  for (i = 0; i < 3; i++)
  {
    scanf("%d%*c %f%*c %d%*c", &f[i].idade, &f[i].salario, &f[i].horas);
  }

  int fMaior = 0;
  for (i = 0; i < 3; i++)
  {
    if (f[i].salario > f[fMaior].salario)
    {
      fMaior = i;
    }
  }

  printf('%d\n', fMaior + 1);
}