#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Una compañía de viajes cuenta con tres tipos de autobuses (A, B y C),
cada uno tiene un precio por kilómetro recorrido por persona, los costos
respectivos son $2.0, $2.5 y $3.0. Se requiere determinar el costo total y
por persona del viaje considerando que cuando éste se presupuesta debe haber un mínimo de 20 personas, de lo contrario el cobro se realiza con base en este número límite.
*/

void calculatePrice(int personas, char *autoType);

int main(int argc, char *argv[])
{
  if (strcmp(argv[1], "help") == 0)
  {
    printf("Documentación del programa:\n");
    printf("./program personas(int) tipoDeAutobus(char) matutino verpestino\n");
    return 1;
  }

  int personas = atoi(argv[1]);
  char autoType[10] = argv[2];

  printf("Input Values: personas=%d, autotype=%s", personas, autoType);

  calculatePrice(personas, autoType);

  return 0;
}

void calculatePrice(int personas, char *autoType)
{
  double result = 20;

  if (strcmp(autoType, "A") == 0)
  {
    result *= 2;
  }
  if (strcmp(autoType, "B") == 0)
  {
    result *= 2.5;
  }
  if (strcmp(autoType, "C") == 0)
  {
    result *= 3;
  }

  printf("El precio final es de %f, y lo que debe pagar cada persona es de %f", result, result / personas);
}