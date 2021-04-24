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

int main()
{
  int quantidade;
  estrut_aluno aluno;
  FILE *file;

  file = fopen("./alunos.b", "wb");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(file);
  }

  header();
  printf("Digite a quantidade de alunos:\n");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++)
  {
    printf("Por favor insira os dados do estudante\n");
    printf("Como o aluno se chama?\n");
    scanf(" %[^\n]*c", aluno.nome);
    printf("Qual o sexo do aluno?\n");
    scanf("%s", aluno.sexo);
    printf("Tá pertinho de acabar, mas antes qual é a data de nascimento do aluno?\n");
    scanf("%s", aluno.dataNascimento);
    printf("Por fim, digite a matrícula do aluno para finalizar o cadastro! \n");
    scanf("%d", &aluno.matricula);

    fwrite(&aluno, sizeof(estrut_aluno), 1, file);
  }
  fclose(file);

  file = fopen("./alunos.b", "rb");
  int matriculaAluno;
  printf("Digite a matrícula do aluno a ser buscado: \n");
  scanf("%d", &matriculaAluno);

  while (fread(&aluno, sizeof(estrut_aluno), 1, file))
  {
    if (aluno.matricula == matriculaAluno)
    {

      printf("======================\n");
      printf("Nome: %s\n", aluno.nome);
      printf("Sexo: %s\n", aluno.sexo);
      printf("Data de nascimento: %s\n", aluno.dataNascimento);
      printf("Matrícula: %d\n", aluno.matricula);
    }
  }
  fclose(file);

  printf("Sessão finalizada!");
}