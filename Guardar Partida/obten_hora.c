#include <stdio.h>
#include <time.h>
/* regresa 1 si es valido y -1 si no */
/* En caso de ser valido, hará el movimiento */

void obten_hora()
{
  FILE *archivo = fopen("hora.txt", "w+");

  time_t tiempo = time(0);
  struct tm *tiempo_local = localtime(&tiempo);
  char hora[9];
  strftime(hora, 9, "%H:%M:%S", tiempo_local);

  fwrite (hora, sizeof (char), 9, archivo);

  fclose (archivo);
}
