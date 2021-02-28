#include <stdio.h>

int main()
{
  float salary;
  int count;
  count = 1;
  while (count <= 5)
  {
    printf("Infomre um número:\n");
    scanf("%f", &salary);

    if (salary >= 2000)
    {
      printf("%.2f\n", salary);
    }
    count += 1;
  }
}