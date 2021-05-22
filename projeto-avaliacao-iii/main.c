#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente CLIENTE;

struct cliente
{
  char nome[100];
  int idade;
  int numeroConta;
  float saldo;
  CLIENTE *proximo;
  CLIENTE *anterior;
};

/* LISTA DUPLA */

typedef struct lista
{
  CLIENTE *primeiro;
  CLIENTE *ultimo;
} LISTA;

void Menu()
{
  printf("==================================================\n");
  printf("1 - Cadastrar cliente (Lista dupla)\n");
  printf("2 - Visualizar clientes cadastrados\n");
  printf("3 - Acessar caixa interno (Fila)\n");
  printf("4 - Visualizar tamanho da fila\n");
  printf("5 - Visualizar tempo de espera das pessoas na fila;\n");
  printf("6 - Sair\n");
  printf("==================================================\n");
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

void cadastrarCliente(LISTA *lst, char *nome, int idade, int numeroConta, float saldo)
{
  CLIENTE *cliente = (CLIENTE *)malloc(sizeof(CLIENTE));
  if (cliente == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }

  strcpy(cliente->nome, nome);
  cliente->idade = idade;
  cliente->numeroConta = numeroConta;
  cliente->saldo = saldo;

  cliente->anterior = NULL;

  if (lista_vazia(lst))
  {
    cliente->proximo = NULL;
    lst->ultimo = cliente;
  }
  else
  {
    cliente->proximo = lst->primeiro;
    lst->primeiro->anterior = cliente;
  }
  lst->primeiro = cliente;
}

void lista_percorre(LISTA *lst)
{
  printf("===== CLIENTES CADASTRADOS =====\n");
  if (lst != NULL)
  {
    CLIENTE *aux;
    for (aux = lst->primeiro; aux != NULL; aux = aux->proximo)
    {
      printf("================================\n");
      printf("Nome: %s\n", aux->nome);
      printf("Idade: %d anos\n", aux->idade);
      printf("Numero da conta: %d\n", aux->numeroConta);
      printf("Saldo da conta: R$%.2f\n", aux->saldo);
      printf("\n");
    }
    printf("Lista vazia, por favor cadastre um cliente.\n");
  }
  else
    printf("A lista esta vazia\n");
}

/* FILA */

typedef struct pessoaFila PESSOAFILA;

struct pessoaFila
{
  int ficha;
  PESSOAFILA *proximo;
};

typedef struct fila
{
  int tamanho;
  PESSOAFILA *primeiro;
  PESSOAFILA *ultimo;
} FILA;

FILA *criaFila(void)
{
  FILA *f = (FILA *)malloc(sizeof(FILA));
  if (f == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }

  f->primeiro = NULL;
  f->ultimo = NULL;
  return f;
}

int fila_vazia(FILA *f)
{
  return (f->primeiro == NULL);
}

void fila_insere_elemento(FILA *f)
{
  PESSOAFILA *pessoa = (PESSOAFILA *)malloc(sizeof(PESSOAFILA));
  if (pessoa == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }

  if (fila_vazia(f))
  {
    pessoa->proximo = f->primeiro;
    f->primeiro = pessoa;
    f->ultimo = pessoa;
    f->tamanho = f->tamanho + 1;
    pessoa->ficha = f->tamanho;
  }
  else
  {
    f->ultimo->proximo = pessoa;
    pessoa->proximo = NULL;
    f->ultimo = pessoa;
    f->tamanho = f->tamanho + 1;
    pessoa->ficha = f->tamanho;
  }
}

void exibe_fila(FILA *f)
{
  PESSOAFILA *aux;
  printf("===== FILA =====\n");

  for (aux = f->primeiro; aux != NULL; aux = aux->proximo)
  {
    printf("Pessoa %d\n", aux->ficha);
  }
}

/* PILHA */

typedef struct elementoPilha ELEMENTOPILHA;

struct elementoPilha
{
  ELEMENTOPILHA *proximo;
  int ficha;
  int tempo;
};

typedef struct
{
  ELEMENTOPILHA *topo;

} PILHA;

PILHA *criaPilha(void)
{
  PILHA *p = (PILHA *)malloc(sizeof(PILHA));
  p->topo = NULL;
  return p;
}

int pilha_vazia(PILHA *p)
{
  return (p->topo == NULL);
}

void empilha(PILHA *p, int ficha, int tempo)
{
  ELEMENTOPILHA *elementoPilha = (ELEMENTOPILHA *)malloc(sizeof(ELEMENTOPILHA));
  if (elementoPilha == NULL)
  {
    printf("Erro ao alocar");
    exit(1);
  }
  elementoPilha->ficha = ficha;
  elementoPilha->tempo = tempo;
  elementoPilha->proximo = p->topo;
  p->topo = elementoPilha;
}

void preenche_pilha(FILA *f, PILHA *p)
{
  PESSOAFILA *pessoaFila;
  printf("===== FILA =====\n");

  for (pessoaFila = f->primeiro; pessoaFila != NULL; pessoaFila = pessoaFila->proximo)
  {
    empilha(p, pessoaFila->ficha, rand() % 10);
  }
}

void exibe_pilha(PILHA *p)
{
  printf("Elementos da pilha:\n");
  ELEMENTOPILHA *elementoPilha;
  if (pilha_vazia(p))
  {
    printf("Pilha vazia!\n");
  }
  else
  {
    for (elementoPilha = p->topo; elementoPilha != NULL; elementoPilha = elementoPilha->proximo)
    {
      printf("Ficha %d - %d minutos;\n", elementoPilha->ficha, elementoPilha->tempo);
    }
  }
}

int main()
{
  LISTA *lst = criaLista();
  FILA *f = criaFila();
  PILHA *p = criaPilha();

  int opcao;

  char nome[100];
  int idade;
  int numeroConta;
  float saldo;

  Menu();
  scanf("%d", &opcao);

  while (opcao != 6)
  {
    switch (opcao)
    {
    case 1:

      printf("===== CADASTRO DE CLIENTES =====\n");
      printf("Digite o nome do cliente:\n");
      scanf("%s", nome);
      printf("Digite a idade do cliente:\n");
      scanf("%d", &idade);
      printf("Número da conta:\n");
      scanf("%d", &numeroConta);
      printf("Digite o saldo total da conta:\n");
      scanf("%f", &saldo);

      cadastrarCliente(lst, nome, idade, numeroConta, saldo);

      break;
    case 2:
      lista_percorre(lst);
      break;
    case 3:
      printf("===== ENTRAR NA FILA =====\n");
      fila_insere_elemento(f);
      break;

    case 4:
      printf("===== TAMANHO DA FILA =====\n");
      printf("Número de pessoas na fila: %d\n", f->tamanho);
      exibe_fila(f);
      break;
    case 5:
      printf("===== TEMPO DE ESPERA DA FILA =====\n");
      preenche_pilha(f, p);
      exibe_pilha(p);
      break;
    default:
      break;
    }

    Menu();
    scanf("%d", &opcao);
  }

  /*  cadastrarCliente(lst, "Paulo", 19, 1, 100.00);
  cadastrarCliente(lst, "Vitor", 18, 2, 200.00);
  cadastrarCliente(lst, "Paulo", 20, 3, 150.00);
  cadastrarCliente(lst, "Paulo", 20, 3, 120.00);
  lista_percorre(lst); */
}