#include <stdio.h>

void main()
{
  // Declare variables
  int numberOfHamburgers;
  int hamburgerType;
  double totalCost, cardCharge;

  // Get user input for number of hamburgers
  printf("Ingrese la cantidad de hamburguesas que desea: ");
  scanf("%d", &numberOfHamburgers);

  // Get user input for hamburger type
  printf("\nSeleccione el tipo de hamburguesa:\n");
  printf("1. Sencilla ($2000)\n");
  printf("2. Doble ($2500)\n");
  printf("3. Triple ($2800)\n");
  printf("Su elección: ");
  scanf("%d", &hamburgerType);

  // Calculate hamburger cost based on type
  switch (hamburgerType)
  {
  case 1:
    totalCost = numberOfHamburgers * 2000.00;
    break;
  case 2:
    totalCost = numberOfHamburgers * 2500.00;
    break;
  case 3:
    totalCost = numberOfHamburgers * 2800.00;
    break;
  default:
    printf("Tipo de hamburguesa inválido.\n");
    return;
  }

  // Calculate card charge
  cardCharge = totalCost * 0.05;

  // Calculate final total
  totalCost += cardCharge;

  // Display the total cost
  printf("\n**Resumen de su pedido:**\n");
  printf("Hamburguesas (%d): $%.2lf\n", numberOfHamburgers, totalCost - cardCharge);
  printf("Cargo por tarjeta: $%.2lf\n", cardCharge);
  printf("Total a pagar: $%.2lf\n", totalCost);
}
