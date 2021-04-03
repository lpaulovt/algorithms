#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x, y;
  float *ponteirox = &x;
  float *ponteiroy = &y;
  printf("digite as cordenadas:");
  scanf("%f %f", ponteirox, ponteiroy);
  if (*ponteirox > 0)
  {
    if (*ponteiroy > 0)
    {
      printf("q1");
    }
    else if (*ponteiroy < 0)
    {
      printf("q4");
    }
    else if (*ponteiroy == 0)
    {
      printf("eixo x");
    }
  }
  else if (*ponteirox < 0)
  {
    if (*ponteiroy > 0)
    {
      printf("q2");
    }
    else if (*ponteiroy < 0)
    {
      printf("q3");
    }
    else if (*ponteiroy == 0)
    {
      printf("eixo x");
    }
  }
  else if (*ponteirox == 0)
  {
    if (*ponteiroy == 0)
    {
      printf("origem");
    }
    else if (*ponteiroy != 0)
    {
      printf("eixo y");
    }
  }

  return 0;
}