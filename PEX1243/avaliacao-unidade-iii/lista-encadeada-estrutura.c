/* 
  Instituição: UFERSA;
  Curso: Interdisciplinar em Tecnologia da Informação;
  Disciplina: Laboratório de Algoritmos e Estrutura de Dados I;
  Docente: Reudismam Rolim;
  Discente: Paulo Vitor Lopes da Silva;
  Matrícula: 2020010310;

  Lista duplamente encadeada;
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estrut_aluno ESTRUTALUNO;

struct estrut_aluno
{
  char nome[50];
  char sexo[10];
  int matricula;
  char dataNascimento[8];
  ESTRUTALUNO *proximo;
  ESTRUTALUNO *anterior;
};

typedef struct lista
{
  ESTRUTALUNO *primeiro;
  ESTRUTALUNO *ultimo;
} LISTA;

void header()
{
  printf("=================================================\n");
  printf("==========  Olá, seja bem-vindo ao   ============\n");
  printf("======  Sistema de Gerenciamento Escolar  =======\n");
  printf("=================================================\n");
}

void menu()
{
  printf("1 - Cadastrar aluno\n");
  printf("2 - Pesquisar aluno\n");
  printf("3 - Remover aluno\n");
  printf("4 - Visualizar alunos cadastrados\n");
  printf("5 - Sair\n");
}

LISTA *criaLista()
{
  LISTA *lst = (LISTA *)malloc(sizeof(LISTA));
  if (lst == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }

  lst->primeiro = NULL;
  lst->ultimo = NULL;
  return lst;
}

int lista_vazia(LISTA *lst)
{
  return (lst->primeiro == NULL);
}

void cadastrarAluno(LISTA *lst, char *nome, char *sexo, char *dataNascimento, int matricula)
{
  ESTRUTALUNO *aluno = (ESTRUTALUNO *)malloc(sizeof(ESTRUTALUNO));
  if (aluno == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }

  strcpy(aluno->nome, nome);
  strcpy(aluno->sexo, sexo);
  strcpy(aluno->dataNascimento, dataNascimento);
  aluno->matricula = matricula;

  aluno->anterior = NULL;

  if (lista_vazia(lst))
  {
    aluno->proximo = NULL;
    lst->ultimo = aluno;
  }
  else
  {
    aluno->proximo = lst->primeiro;
    lst->primeiro->anterior = aluno;
  }
  lst->primeiro = aluno;
}

void visualizarALunos(LISTA *lst)
{
  printf("===== ALUNOS CADASTRADOS =====\n");
  if (lst != NULL)
  {
    ESTRUTALUNO *aux;
    for (aux = lst->primeiro; aux != NULL; aux = aux->proximo)
    {
      printf("======================\n");
      printf("Nome: %s\n", aux->nome);
      printf("Sexo: %s\n", aux->sexo);
      printf("Data de nascimento: %s\n", aux->dataNascimento);
      printf("Matrícula: %d\n", aux->matricula);
      printf("\n");
    }
    printf("Lista vazia, por favor cadastre um aluno.\n");
  }
  else
    printf("Lista vazia, por favor cadastre um aluno.\n");
}

ESTRUTALUNO *buscarAluno(LISTA *lst, int matricula)
{
  if (lst != NULL)
  {
    ESTRUTALUNO *aux;
    for (aux = lst->primeiro; aux != NULL; aux = aux->proximo)
    {
      if (aux->matricula == matricula)
      {
        return aux;
      }
    }
  }

  return NULL;
}

int removerAluno(LISTA *lst, int matricula)
{
  ESTRUTALUNO *aux, *anterior;
  if (lst->primeiro == NULL)
  {
    printf("Lista vazia, por favor cadastre um aluno.\n");
  }

  for (aux = lst->primeiro; aux != NULL; aux = aux->proximo)
  {
    if (aux->matricula == matricula)
    {
      if (aux == lst->primeiro)
      {
        if (aux->proximo != NULL)
        {
          lst->primeiro = aux->proximo;
          lst->primeiro->proximo->anterior = NULL;
          break;
        }
        else
        {
          lst->primeiro = NULL;
          lst->ultimo = NULL;
          break;
        }
      }
      else
      {
        //Remove o elemento no meio ou fim
        aux->proximo->anterior = aux->anterior;
        aux->anterior->proximo = aux->proximo;
      }

      free(aux);
      break;
    }
  }
}

int main()
{
  LISTA *lst = criaLista();
  ESTRUTALUNO *aux;

  int opcao;

  char nome[50];
  char sexo[10];
  int matricula;
  char dataNascimento[8];

  header();
  menu();
  scanf("%d", &opcao);

  while (opcao != 5)
  {
    switch (opcao)
    {
    case 1:
      printf("===== CADASTRAR ALUNOS =====\n");

      printf("Por favor insira os dados do estudante\n");
      printf("Como o aluno se chama?\n");
      scanf(" %[^\n]*s", nome);
      printf("Qual o sexo do aluno?\n");
      scanf("%s", sexo);
      printf("Tá pertinho de acabar, mas antes qual é a data de nascimento do aluno?\n");
      scanf("%s", dataNascimento);
      printf("Por fim, digite a matrícula do aluno para finalizar o cadastro! \n");
      scanf("%d", &matricula);

      cadastrarAluno(lst, nome, sexo, dataNascimento, matricula);
      break;

    case 2:
      printf("===== PESQUISAR ALUNO =====\n");
      printf("Digite a matrícula do aluno: \n");
      scanf("%d", &matricula);
      aux = buscarAluno(lst, matricula);
      if (aux != NULL)
      {
        printf("======================\n");
        printf("Nome: %s\n", aux->nome);
        printf("Sexo: %s\n", aux->sexo);
        printf("Data de nascimento: %s\n", aux->dataNascimento);
        printf("Matrícula: %d\n", aux->matricula);
        printf("\n");
      }
      printf("Lista vazia, por favor cadastre um aluno.\n");
      break;

    case 3:
      printf("===== REMOVER ALUNO =====\n");
      printf("Digite a matrícula do aluno: \n");
      scanf("%d", &matricula);
      removerAluno(lst, matricula);
      break;

    case 4:
      visualizarALunos(lst);
      break;

    default:
      break;
    }

    menu();
    scanf("%d", &opcao);
  }
}
