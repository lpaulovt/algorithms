#include <stdio.h>

int main()
{
  float e1[2];
  float e2[2];
  float e3[2];
  float *estudantes[3];
  estudantes[0] = e1;
  estudantes[1] = e2;
  estudantes[2] = e3;
  for (int i = 0; i < 2; i++)
  {
    scanf("%f %f\n", &estudantes[i][0], &estudantes[i][1]);
  }

  for (int i = 0; i < 3; i++)
  {
    float media = (estudantes[i][0] + estudantes[i][1]) / 2;
    printf("Média: %f\n", media);
  }
}