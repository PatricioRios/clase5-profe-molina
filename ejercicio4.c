#include <stdio.h>

int main()
{
  // Declare variables
  int appointmentNumber;
  int totalPayment = 0;
  double appointmentCost;

  // Get user input for appointment number
  printf("Ingrese el número de cita: \n");
  scanf("%d", &appointmentNumber);
  printf("Ingrese el precio de la cita: \n");
  scanf("%d", &totalPayment);

  // Determine appointment cost based on appointment number
  if (appointmentNumber <= 3)
  {
    appointmentCost = 200.00;
  }
  else if (appointmentNumber <= 5)
  {
    appointmentCost = 150.00;
  }
  else if (appointmentNumber <= 8)
  {
    appointmentCost = 100.00;
  }
  else
  {
    appointmentCost = 50.00;
  }

  // Calculate total payment
  totalPayment += appointmentCost;

  // Display the appointment cost and total payment
  printf("\nCosto de la cita: $%.2lf\n", appointmentCost);
  printf("Total pagado hasta ahora: $%.2lf\n", totalPayment);

  return 0;
}
