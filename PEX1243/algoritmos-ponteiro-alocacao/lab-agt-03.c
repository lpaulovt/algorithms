#include <stdio.h>
//Imprimindo um ponteiro

int main()
{
  float a, b, average;
  float *pa, *pb, *paverage;
  pa = &a;
  pb = &b;
  paverage = &average;

  printf("Digite as notas");
  scanf("%f %f", pa, pb);

  *paverage = ((*pa * 3.5) + (*pb * 7.5)) / 11;

  printf("Média: %f\n Endereço da média: %p", *paverage, paverage);
}