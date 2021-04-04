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

//1. O aluno deve utilizar typedef para definir as estruturas propostas na tarefa anterior;
typedef struct
{
  char nome[50];
  int codigoCurso;
} estrut_curso;

typedef struct
{
  char codigoTurma[7];
  int codigoCurso;
} estrut_turma;

typedef struct
{
  char nome[50];
  char sexo[10];
  int registro;
} estrut_professor;

typedef struct
{
  char nome[50];
  char sexo[10];
  int matricula;
  char dataNascimento[8];
} estrut_aluno;

//2. Escrever uma função que recebe uma estrutura como parâmetro e imprime os membros da estrutura.
void printCurso(estrut_curso curso)
{
  printf("O curso é %s - %d\n", curso.nome, curso.codigoCurso);
}

//3. Escrever uma função que recebe um ponteiro para uma estrutura como parâmetro e imprime os membros da estrutura.
void printPontProfessor(estrut_professor *pProfessor)
{
  printf("O nome do professor é %s, seu sexo é %s e o registro é %d\n", (*pProfessor).nome, (*pProfessor).sexo, (*pProfessor).registro);
};

//4. Modificar a função anterior que recebe um ponteiro como parâmetro e utilizar o operador seta (->) para acessar os membros.
void printPontSetaProfessor(estrut_professor *pProfessor)
{
  printf("O nome do professor é %s, seu sexo é %s e o registro é %d\n", pProfessor->nome, pProfessor->sexo, pProfessor->registro);
};

int main()
{
  estrut_curso curso;
  estrut_professor professor;
  estrut_professor *pProfessor = &professor;
  estrut_turma turma;
  estrut_aluno aluno;
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
  strcpy((*pProfessor).nome, string);
  scanf(" %[^\n]*c", string);
  strcpy((*pProfessor).sexo, string);
  scanf("%d%*c", &(*pProfessor).registro);

  printf("Informe o nome, sexo, matrícula e data de nascimento do aluno(a):\n");
  scanf(" %[^\n]*c", string);
  strcpy(aluno.nome, string);
  scanf(" %[^\n]*c", string);
  strcpy(aluno.sexo, string);
  scanf("%d%*c", &aluno.matricula);
  scanf(" %[^\n]*c", string);
  strcpy(aluno.dataNascimento, string);

  printf("=================================================\n");
  printCurso(curso);
  printf("O código da turma é %s e o código do curso é %d\n", turma.codigoTurma, turma.codigoCurso);
  printPontProfessor(pProfessor);
  printPontSetaProfessor(pProfessor);
  printf("O nome do aluno é %s, seu sexo é %s, a matrícula é %d e a data de nascimento é %s\n", aluno.nome, aluno.sexo, aluno.matricula, aluno.dataNascimento);
  printf("=================================================\n");
}