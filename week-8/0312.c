#include <stdio.h>

int readQuantityEmployees()
{
  int quantity;
  printf("Informe a quantidade de funcionários:\n");
  scanf("%d", &quantity);
  return quantity;
}

void readCodeEmployees(int employees[], int quantity)
{
  for (int i = 0; i < quantity; i++)
  {
    printf("Informe o código do funcionário:\n");
    scanf("%d", &employees[i]);
  }
}

void verifyEmployees(int employees[], int position)
{
  switch (employees[position])
  {
  case 1:
    printf("Pedro\n");
    break;
  case 2:
    printf("Paulo\n");
  case 3:
    printf("Maria\n");
  default:
    break;
  }
}

int main()
{
  int quantityEmployees = readQuantityEmployees();
  int employees[quantityEmployees];

  readCodeEmployees(employees, quantityEmployees);

  printf("Compareceram à empresa, os funcionários:\n");
  for (int i = 0; i < quantityEmployees; i++)
  {
    verifyEmployees(employees, i);
  }
}