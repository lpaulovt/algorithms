#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *pont_arq;

  pont_arq = fopen("arquivo.txt", "a");

  if (pont_arq == NULL)
  {
    printf('Erro ao abrir o arquivo!\n');
  }
  else
  {
    printf("O arquivo foi aberto com sucesso!\n");
  }

  fclose(pont_arq);

  printf("O arquivo foi criado com sucesso!");
}