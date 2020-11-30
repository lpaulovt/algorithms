#include <stdio.h>

int main()
{
  int number, count, negativeCount;
  count = 1;
  negativeCount = 0;
  while (count <= 5)
  {
    printf("Infomre um número:\n");
    scanf("%d", &number);

    if (number < 0)
    {
      negativeCount += 1;
    }
    count += 1;
  }
  printf("Há %d números negativos\n", negativeCount);
}