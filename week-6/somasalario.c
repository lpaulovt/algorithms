#include <stdio.h>

int main()
{
  float salary, sum;
  sum = 0;
  int count = 1;

  while (count <= 3)
  {
    printf("Informe o salario do funcionario:\n");
    scanf("%f", &salary);

    sum += salary;
    count += 1;
  }

  printf("O valor total é %.2f", sum);
}