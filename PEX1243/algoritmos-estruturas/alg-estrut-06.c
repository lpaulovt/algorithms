/* 
  Instituição: UFERSA;
  Curso: Interdisciplinar em Tecnologia da Informação;
  Disciplina: Laboratório de Algoritmos e Estrutura de Dados I;
  Docente: Reudismam Rolim;
  Discente: Paulo Vitor Lopes da Silva;
  Matrícula: 2020010310;
 */

#include <stdio.h>

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
  printf("1 - Adicionar novos aluno\n");
  printf("2 - Visualizar alunos cadastrados\n");
  printf("3 - Sair\n");
}

void adicionarAluno(estrut_aluno *aluno)
{
  printf("Você escolheu adicionar um novo aluno, por favor preencha todos os dados:\n");
  printf("Como o aluno se chama?\n");
  scanf(" %[^\n]*c", aluno->nome);
  printf("Qual o sexo do aluno?\n");
  scanf("%s", aluno->sexo);
  printf("Tá pertinho de acabar, mas antes qual é a data de nascimento do aluno?\n");
  scanf("%s", aluno->dataNascimento);
  printf("Por fim, digite a matrícula do aluno para finalizar o cadastro! \n");
  scanf("%d", &aluno->matricula);

  FILE *pont_arq = fopen("./alunos.txt", "a");

  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    fprintf(pont_arq, "%s %s %s %d\n", aluno->nome, aluno->sexo, aluno->dataNascimento, aluno->matricula);
    fclose(pont_arq);
    printf("Incrível!!! O estudante foi cadastrado com sucesso! :) \n");
  }
}

void visualizarAluno()
{
  FILE *pont_arq = fopen("./alunos.txt", "r");

  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    estrut_aluno aluno;

    while (fscanf(pont_arq, "%s %s %s %d",
                  aluno.nome, aluno.sexo, aluno.dataNascimento, &aluno.matricula) != EOF)
    {
      printf("===Aluno===\nNome:%s\nSexo:%s\nData de nascimento:%s\nMatrícula:%d\n", aluno.nome, aluno.sexo, aluno.dataNascimento, aluno.matricula);
    }
  }
}

int main()
{
  int isRunProgram;
  estrut_aluno aluno;
  menu();
  scanf("%d", &isRunProgram);

  while (isRunProgram != 3)
  {

    switch (isRunProgram)
    {
    case 1:
      adicionarAluno(&aluno);
      break;

    case 2:
      visualizarAluno();
      break;

    default:
      break;
    }

    menu();
    scanf("%d", &isRunProgram);
  }
}