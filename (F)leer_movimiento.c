#include <stdio.h>

/*Esta funcion leera las coordenadas para obtener que pieza se quiere mover*/

void
leer_movimiento()
{

  FILE *miarchivo;
  char *nombre_archivo = "coordenadas.txt";
  char coordenada[4];

  miarchivo = fopen (nombre_archivo, "r");

  fscanf (miarchivo, "%s", coordenada);

  printf ("Lectura: %s \n", coordenada);

  return 0;

}
