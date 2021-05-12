/* 
  Instituição: UFERSA;
  Curso: Interdisciplinar em Tecnologia da Informação;
  Disciplina: Laboratório de Algoritmos e Estrutura de Dados I;
  Docente: Reudismam Rolim;
  Discente: Paulo Vitor Lopes da Silva;
  Matrícula: 2020010310;

  Busca binária não recursiva;
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[50];
  char sexo[10];
  int matricula;
  char dataNascimento[8];
} estrut_aluno;

void header()
{
  printf("=================================================\n");
  printf("==========  Olá, seja bem-vindo ao   ============\n");
  printf("======  Sistema de Gerenciamento Escolar  =======\n");
  printf("=================================================\n");
}

void menu()
{
  printf("1 - Pesquisar aluno\n");
  printf("2 - Visualizar alunos cadastrados\n");
  printf("3 - Sair\n");
}

int buscaBinaria(int matricula, int quantidade, estrut_aluno alunos[])
{
  int i = 0;
  int f = quantidade - 1;

  while (i <= f)
  {
    int middle = (i + f) / 2;

    if (alunos[middle].matricula == matricula)
    {
      return middle;
    }
    else if (alunos[middle].matricula < matricula)
    {
      i = middle + 1;
    }
    else
    {
      f = middle - 1;
    }
  }
  return -1;
}

void preencher(estrut_aluno alunos[], int quantidade)
{
  for (int i = 0; i < quantidade; i++)
  {

    printf("Informe o nome, sexo, matrícula e data de nascimento do aluno(a):\n");
    scanf(" %[^\n]", alunos[i].nome);
    scanf(" %[^\n]", alunos[i].sexo);
    scanf("%d", &alunos[i].matricula);
    scanf(" %[^\n]", alunos[i].dataNascimento);
  }
}

void visualizar(estrut_aluno alunos[], int quantidade)
{
  for (int i = 0; i < quantidade; i++)
  {

    printf("======================\n");
    printf("Nome: %s\n", alunos[i].nome);
    printf("Sexo: %s\n", alunos[i].sexo);
    printf("Data de nascimento: %s\n", alunos[i].dataNascimento);
    printf("Matrícula: %d\n", alunos[i].matricula);
  }
}

int main()
{
  header();
  int quantidade;
  printf("Digite a quantidade de alunos que você ver cadastrar:\n");
  scanf("%d", &quantidade);

  estrut_aluno alunos[quantidade];
  preencher(alunos, quantidade);
  int opcao;
  menu();
  scanf("%d", &opcao);

  while (opcao != 3)
  {
    switch (opcao)
    {
    case 1:
      printf("Pesquisar aluno por busca binária não recursiva:\n");
      int matricula;
      printf("Digite a matricula do aluno:\n");
      scanf("%d", &matricula);

      int index = buscaBinaria(matricula, quantidade, alunos);

      printf("======================\n");
      printf("Nome: %s\n", alunos[index].nome);
      printf("Sexo: %s\n", alunos[index].sexo);
      printf("Data de nascimento: %s\n", alunos[index].dataNascimento);
      printf("Matrícula: %d\n", alunos[index].matricula);

      break;
    case 2:
      printf("Visualizar alunos cadastrados:\n");
      visualizar(alunos, quantidade);
      break;

    default:
      break;
    }

    menu();
    scanf("%d", &opcao);
  }
}