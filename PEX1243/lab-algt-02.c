#include <stdio.h>

int main()
{
  int a, b, c, d, dif;
  int *pa, *pb, *pc, *pd, *pdif;
  pa = &a;
  pb = &b;
  pc = &c;
  pd = &d;
  pdif = &dif;

  printf("Digite os valores:\n");
  scanf("%d %d %d %d", pa, pb, pc, pd);

  *pdif = ((*pa * *pb) - (*pc * *pd));
  printf("O valor é %d", *pdif);
}