#include <stdio.h>
#include <string.h>

void verifica(char email[])
{
  int i;
  int valido = 0;
  for (i = 0; email[i] != '\0'; i++)
  {

    if (email[i] == '@')
    {
      valido = 1;
    }
  }
  if (valido == 0)
  {
    printf("O email não é válido\n");
  }
  else
  {
    if (strcmp(email, "pedro@gmail.com") == 0)
    {
      printf("Já existe um usuário com o e-mail informado. Informe um e-mail diferente.\n");
    }
    else if (strcmp(email, "bruno@gmail.com") == 0)
    {
      printf("Já existe um usuário com o e-mail informado. Informe um e-mail diferente.\n");
    }
    else if (strcmp(email, "maria@gmail.com") == 0)
    {
      printf("Já existe um usuário com o e-mail informado. Informe um e-mail diferente.\n");
    }
    else
    {
      printf("E-mail informado é válido e foi cadastrado com sucesso no SEADF.\n");
    }
  }
}

int main()
{
  char email[100];
  printf("Informe o e-mail:\n");
  scanf(" %s", email);
  verifica(email);
}