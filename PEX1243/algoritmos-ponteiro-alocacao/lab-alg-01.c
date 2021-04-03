#include <stdio.h>

int main()
{
  float x, y;
  float *pontX = &x;
  float *pontY = &y;

  printf("Informe o valor da coordenada X:\n");
  scanf("%f", pontX);
  printf("Informe o valor da coordenada Y:\n");
  scanf("%f", pontY);

  if (*pontX == 0 && *pontY == 0)
  {
    printf("O ponto se encontra na origem.\n");
  }
  else if (*pontY == 0 && *pontX > 0 || *pontY == 0 && *pontX < 0)
  {
    printf("O ponto se encontra sobre o eixo X.\n");
  }
  else if (*pontX == 0 && *pontY > 0 || *pontX == 0 && *pontY < 0)
  {
    printf("O ponto se encontra sobre o eixo Y.\n");
  }
  else if (*pontX > 0 && *pontY > 0)
  {
    printf("O ponto se encontra no quadrante 1.\n");
  }
  else if (*pontX < 0 && *pontY > 0)
  {
    printf("O ponto se encontra no quadrante 2.\n");
  }
  else if (*pontX < 0 && *pontY < 0)
  {
    printf("O ponto se encontra no quadrante 3.\n");
  }
  else if (*pontX > 0 && *pontY < 0)
  {
    printf("O ponto se encontra no quadrante 4.\n");
  }
}