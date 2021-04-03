/* Alunos: 
    01 - Caio Rafael da Rocha Gomes - Matrícula: 2020010301 - email: caio.gomes01460@alunos.ufersa.edu.br
    02 - Paulo Vitor Lopes da Silva - Matrícula: 2020010310 - email: paulo.silva06497@alunos.ufersa.edu.br
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *pont_arq;
  char brand[50];
  char car_name[50];
  float car_price;
  //A
  pont_arq = fopen("info_carro.txt", "w");
  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    puts("Arquivo aberto com sucesso.\n");
    //B
    puts("Insira o nome de uma marca de carro:\n");
    scanf(" %[^\n]*c", brand);
    fprintf(pont_arq, "%s\n", brand);
    fclose(pont_arq);
  }
  //C
  pont_arq = fopen("info_carro.txt", "r");
  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    puts("Arquivo aberto com sucesso.\n");
    //D
    int i = 0;
    while (fscanf(pont_arq, "%s", brand) != EOF)
    {
      printf("%s\n", brand);
    }
    //E
    fclose(pont_arq);
  }

  pont_arq = fopen("info_carro.txt", "a");
  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    puts("Arquivo aberto com sucesso.\n");
    //F
    puts("Insira o nome de um carro :\n");
    scanf(" %[^\n]*c", car_name);
    fprintf(pont_arq, "%s\n", car_name);
    puts("Insira o preço do carro:\n");
    scanf("%f", &car_price);
    fprintf(pont_arq, "%f", car_price);
    fclose(pont_arq);
  }
  //G
  pont_arq = fopen("info_carro.txt", "r");
  if (pont_arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    fclose(pont_arq);
  }
  else
  {
    puts("Arquivo aberto com sucesso.\n");
    while (fscanf(pont_arq, "%s %f %s", brand, &car_price, car_name) == 1)
    {
      printf("Marca:%s\nPreço:%.3f\nCarro:%s\n", brand, car_price, car_name);
    }

    fclose(pont_arq);
  }
}