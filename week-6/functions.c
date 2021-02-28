#include <stdio.h>

void menu()
{
  printf("===Escolhar uma opção===\n");
  printf("1 - Listar\n");
  printf("2 - Atualizar\n");
  printf("3 - Sair\n");
  printf("========================\n");
}

void analisa(int opcao)
{
  switch (opcao)
  {
  case 1:
    printf("Você escolheu a opção listar.\n");
    break;
  case 2:
    printf("Você escolheu a opção atualizar.\n");
    break;

  default:
    break;
  }
}

int leia()
{
  int x;
  scanf("%d", &x);
  return x;
}

int main()
{
  int opcao;
  menu();
  opcao = leia();

  while (opcao != 3)
  {
    analisa(opcao);
    menu();
    opcao = leia();
  }
  printf("Você escolheu a opção sair!\n");
}