#include <stdio.h>

void menu()
{
  printf("======= Escolha um pacote de cursos =======\n");
  printf("1 - Pacote (HTML5+CSS3) - R$20,00\n");
  printf("2 - Pacote (JavaScript e Reactjs) - R$30,00\n");
  printf("3 - Front-end completo (4 cursos) - R$40,00\n");
  printf("4 - Nenhum Pacote\n");
  printf("===========================================\n");
}

void pacote1()
{
  printf("Você escolheu o pacote (HTML5+CSS3) - R$20,00.\n");
}

void pacote2()
{
  printf("2 - Pacote (JavaScript e Reactjs) - R$30,00\n");
}

void pacote3()
{
  printf("3 - Front-end completo (4 cursos) - R$40,00\n");
}

void packages(int package)
{
  switch (package)
  {
  case 1:
    pacote1();
    break;
  case 2:
    pacote2();
    break;
  case 3:
    pacote3();
    break;

  default:
    break;
  }
}

int read()
{
  int x;
  scanf("%d", &x);
  return x;
}

int main()
{
  int package;
  menu();
  package = read();

  while (package != 4)
  {
    packages(package);
    menu();
    package = read();
  }
  printf("Você não escolheu um pacote!\n");
}