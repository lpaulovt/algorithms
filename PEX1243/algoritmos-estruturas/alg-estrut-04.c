/* 
  Instituição: UFERSA;
  Curso: Interdisciplinar em Tecnologia da Informação;
  Disciplina: Laboratório de Algoritmos e Estrutura de Dados I;
  Docente: Reudismam Rolim;
  Discente: Paulo Vitor Lopes da Silva;
  Matrícula: 2020010310;
 */

#include <stdio.h>
#include <string.h>

struct estrut_curso
{
  char nome[50];
  int codigoCurso;
};

struct estrut_turma
{
  char codigoTurma[7];
  int codigoCurso;
};

struct estrut_professor
{
  char nome[50];
  char sexo[10];
  int registro;
};

struct estrut_aluno
{
  char nome[50];
  char sexo[10];
  int matricula;
  char dataNascimento[8];
};

int main()
{
  struct estrut_curso curso;
  struct estrut_professor professor;
  struct estrut_turma turma;
  struct estrut_aluno aluno;
  char string[50];

  printf("=================================================\n");
  printf("==========  Olá, seja bem-vindo ao   ============\n");
  printf("======  Sistema de Gerenciamento Escolar  =======\n");
  printf("=================================================\n");

  printf("Informe o código e o nome do curso:\n");
  scanf("%d%*c", &curso.codigoCurso);
  scanf(" %[^\n]*c", string);
  strcpy(curso.nome, string);

  printf("Informe o código da turma e o código do curso:\n");
  scanf(" %[^\n]*c", string);
  strcpy(turma.codigoTurma, string);
  scanf("%d%*c", &turma.codigoCurso);

  printf("Informe o nome, sexo e o registro do professor:\n");
  scanf(" %[^\n]*c", string);
  strcpy(professor.nome, string);
  scanf(" %[^\n]*c", string);
  strcpy(professor.sexo, string);
  scanf("%d%*c", &professor.registro);

  printf("Informe o nome, sexo, matrícula e data de nascimento do aluno(a):\n");
  scanf(" %[^\n]*c", string);
  strcpy(aluno.nome, string);
  scanf(" %[^\n]*c", string);
  strcpy(aluno.sexo, string);
  scanf("%d%*c", &aluno.matricula);
  scanf(" %[^\n]*c", string);
  strcpy(aluno.dataNascimento, string);

  printf("=================================================\n");
  printf("O curso é %s - %d\n", curso.nome, curso.codigoCurso);
  printf("O código da turma é %s e o código do curso é %d\n", turma.codigoTurma, turma.codigoCurso);
  printf("O nome do professor é %s, seu sexo é %s e o registro é %d\n", professor.nome, professor.sexo, professor.registro);
  printf("O nome do aluno é %s, seu sexo é %s, a matrícula é %d e a data de nascimento é %s\n", aluno.nome, aluno.sexo, aluno.matricula, aluno.dataNascimento);
  printf("=================================================\n");
}