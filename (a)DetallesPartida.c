#include <stdio.h>

/*Funcion DetallesPartida:
Actualiza el historial de movimientos de una partida en curso,
agregando uno por linea.
Recibe el numero de partida como un entero,
el numero de jugador como un entero,
la pieza movida como un char,
y las coordenadas de destino como enteros.
Devuelve 1 si la escritura fue correcta, 0 en otro caso*/

int
DetallesPartida (int partida, int jugador, char pieza, int x, int y)
{
  char nombre_archivo[100];
  char cadena[100];
  int tamano = 0;
  int resultado = 0;
  FILE *fp = 0;
  sprintf (nombre_archivo, "partida_%d.txt", partida);
  fp = fopen (nombre_archivo, "a+");
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      tamano =
	sprintf (cadena,
		 "El jugador %d movio la pieza %c a la posicion (%d, %d).\n",
		 jugador, pieza, x, y);
      resultado = fprintf (fp, "%s", cadena);
      fclose (fp);
      if (tamano == resultado)
	{
	  return 1;
	}
      else
	{
	  return 0;
	}
    }
}
