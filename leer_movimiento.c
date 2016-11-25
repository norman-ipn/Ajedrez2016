#include <stdio.h>

/*Esta funcion leera las coordenadas para obtener que pieza se quiere mover*/

int
main ()
{

  FILE *miarchivo;
  char *nombre_archivo = "coordenadas.txt";
  char coordenada[4];

  miarchivo = fopen (nombre_archivo, "r");

  fscanf (miarchivo, "%s", coordenada);

  printf ("Lectura: %s \n", coordenada);

  return 0;

}
