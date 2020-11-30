#include <stdio.h>

int main()
{
  int cont, qtdCliente;
  float compra;
  float maior = 0;

  printf("Informe a quantidade de clientes:\n");
  scanf("%d", &qtdCliente);

  for (cont = 1; cont <= qtdCliente; cont++)
  {
    printf("Informe o valor da compra do cliente %d:\n", cont);
    scanf("%f", &compra);
    if (compra > maior)
    {
      maior = compra;
    }
  }
  printf("O maior valor é %.2f", maior);
}