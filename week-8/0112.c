#include <stdio.h>

void installmentPurchases(int purchase[], int quantity)
{
  int purchaseNumber = 1;
  for (int i = 0; i < quantity; i++)
  {
    printf("Compra %d:\n", purchaseNumber);
    if (purchase[i] > 200)
    {
      printf("Parcele em até 6 vezes.\n");
    }
    else if (purchase[i] <= 200 && purchase[i] > 100)
    {
      printf("Parcele em duas vezes.\n");
    }
    else if (purchase[i] <= 100)
    {
      printf("Não parcela.\n");
    }
    purchaseNumber++;
  }
}

int main()
{
  int purchasesQuantity;

  printf("Informe a quantidade de compras:\n");
  scanf("%d", &purchasesQuantity);
  int purchases[purchasesQuantity];

  for (int i = 0; i < purchasesQuantity; i++)
  {
    printf("Informe o valor compra: ");
    scanf("%d", &purchases[i]);
  }

  printf("=== OPÇÕES DE PARCELAMENTO ===\n");
  installmentPurchases(purchases, purchasesQuantity);
}