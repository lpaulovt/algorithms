#include <stdio.h>

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
    printf("O email não é válido");
  }
  else
  {
    printf("O email informado é válido");
  }
}

int main()
{
  int quantidade;
  char email[100];
  printf("Informe a quantidade de e-mails:\n");
  scanf("%d", &quantidade);

  for (int i = 0; i <= quantidade; i++)
  {
    printf("Informe o e-mail:\n");
    scanf(" %s", email);
    verifica(email);
  }
}