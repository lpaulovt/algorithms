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
  for (int i = 0; i < 3; i++)
  {
    scanf("%f %f\n", (estudantes[i] + 0), (estudantes[i] + 1));
  }

  for (int i = 0; i < 3; i++)
  {

    if (*estudantes[i] + 0 < *estudantes[i] + 1)
    {
      printf("Maior: %.1f\n", *(estudantes[i] + 1));
    }
    else
    {

      printf("Maior: %.1f\n", *(estudantes[i] + 0));
    }
  }
}