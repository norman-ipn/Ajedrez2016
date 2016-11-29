#include "situacion_1.h"
int
situacion_1 (char tablero[8][8], int coor_x, int coor_y)
{
  int copia_x = coor_x;
  int copia_y = coor_y;
  int a = 0; /*Variable que sirve para detener el ciclo while cuando encuentra una pieza en la direccion en la que se verifica*/
  int numero_jaque = 0;
  char pieza = 'a';
  while (copia_x < 9 && a == 0)
  {
    pieza = verificar_casilla (tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal lado derecho*/
    if (pieza == 'T' || pieza == 'D')
    {
      numero_jaque = numero_jaque + 1;
      a = a + 1;
    }
    if (pieza == 'P' || pieza == 'C' || pieza == 'A' || pieza == 'R') /*Linea con posibles cambios*/
    {
      a = a + 1;
    }
    copia_x = copia_x + 1;
  }
  copia_x = coor_x;
  a = 0;
  
  while (copia_x > 0 && a == 0)
  {
    pieza = verificar_casilla (tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal lado izquierdo*/
    if (pieza == 'T' || pieza == 'D') /*If que sirve para indicar el jaque y salir del ciclo*/
    {
      numero_jaque = numero_jaque + 1;
      a = a + 1;
    }
    if (pieza == 'P' || pieza == 'C' || pieza == 'A' || pieza == 'R') /*Linea con posibles cambios pero sirve para salir del ciclo cuando se encuentre una pieza*/
    {
      a = a + 1;
    }
    copia_x = copia_x - 1;
  }
  return numero_jaque; 
}
