#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double calculateFinalPrice(int minutos, int isDomingo, int isMatutino, int isVerpestino);
double calculate(int minutos);

int main(int argc, char *argv[])
{
  if (argc != 5 || strcmp(argv[1], "help") == 0)
  {
    printf("Documentación del programa:\n");
    printf("./program tiempo domingo matutino verpestino\n");
    printf("tiempo: minutos de la llamada.\n");
    printf("domingo: si es domingo o no (valores posibles 'si' o 'no').\n");
    printf("matutino: si es horario matutino o no (valores posibles 'si' o 'no').\n");
    printf("verpestino: si es horario verpestino o no (valores posibles 'si' o 'no').\n");
    printf("\nEjemplo: ./program 4(minutos) si(domingo) si(matutino) si(verpestino)\n");
    return 1;
  }

  int minutos = atoi(argv[1]);
  int isDomingo = (strcmp(argv[2], "si") == 0) ? 1 : 0;
  int isMatutino = (strcmp(argv[3], "si") == 0) ? 1 : 0;
  int isVerpestino = (strcmp(argv[4], "si") == 0) ? 1 : 0;

  printf("Valores de entrada:\n");
  printf("minutos:%d, domingo:%d, matutino:%d, verpestino: %d\n", minutos, isDomingo, isMatutino, isVerpestino);

  double result = calculateFinalPrice(minutos, isDomingo, isMatutino, isVerpestino);
  printf("RESULTADO: %.2lf\n", result); // Format output with 2 decimal places

  return 0;
}

double calculateFinalPrice(int minutos, int isDomingo, int isMatutino, int isVerpestino)
{
  double result = calculate(minutos);
  if (isDomingo)
  {
    result *= 1.03;
  }
  if (isMatutino)
  {
    result *= 1.15;
  }
  if (isVerpestino)
  {
    result *= 1.10;
  }
  return result;
}
double
calculate(int minutos)
{
  double result;

  if (minutos > 5)
  {
    if (minutos > 8)
    {
      if (minutos > 10)
      {
        result = 5;
        minutos -= 5;
        result += ((double)minutos) * 0.80;
        minutos -= 3;
        result += ((double)minutos) * 0.70;
        minutos -= 2;
        result += ((double)minutos) * 0.50;
      }
      else
      {
        result = 5;
        minutos -= 5;
        result += ((double)minutos) * 0.80;
        minutos -= 3;
        result += ((double)minutos) * 0.70;
      }
    }
    else
    {
      result = 5;
      minutos -= 5;
      result += ((double)minutos) * 0.80;
    }
  }
  else
  {
    result = (double)minutos;
  }

  return result;
}