#include <stdio.h>

int main()
{
  int numberClient, parcel;
  int count = 1;
  float value;
  printf("Informe a quantidade de clientes.\n");
  scanf("%d", &numberClient);

  while (count <= numberClient)
  {
    printf("Informe o valor da compra do cliente %d\n", count);
    scanf("%f", &value);
    printf("Informe em quantas parcelas o  cliente dividiu:\n");
    scanf("%d", &parcel);

    printf("O cliente pagará %d parcelas de R$%.2f.\n", parcel, (value / parcel));
    count += 1;
  }
}