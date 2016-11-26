/*Esta función verifica que el movimiento de un caballo es valido (1 valido,0 no valido),hace falta mandar valores de cordenadas validas y/o llamar a una función que las verifique para que funcione
 correctamente*/
#include <stdio.h>
int
movimiento_caballo (char pieza, char tablero[8][8], int colum_ini,
		    int fila_inicial, int colum_final, int fila_final)
{
  char a[6] = { 'K', 'Q', 'A', 'T', 'C', 'P' };
  if (pieza != 'C')		/*Si la pieza no es un caballo negro se cambia la comparacion */
    {
      a[0] = 'k';
      a[1] = 'q';
      a[2] = 'a';
      a[3] = 't';
      a[4] = 'c';
      a[6] = 'p';
    }
  if (tablero[fila_final][colum_final] != a[0] && a[1] && a[2] && a[3]
      && a[4] && a[5])
    {

      if ((fila_inicial + 2 == fila_final) && (colum_ini + 1 == colum_final))	/*En este caso por ejemplo se mueve 2 casillas hacia arriba y una a la derecha */
	{
	  return 1;
	}
      if ((fila_inicial + 2 == fila_final) && (colum_ini - 1 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial + 1 == fila_final) && (colum_ini + 2 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial + 1 == fila_final) && (colum_ini - 2 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial - 2 == fila_final) && (colum_ini + 1 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial - 2 == fila_final) && (colum_ini - 1 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial - 1 == fila_final) && (colum_ini + 2 == colum_final))
	{
	  return 1;
	}
      if ((fila_inicial - 1 == fila_final) && (colum_ini - 2 == colum_final))
	{
	  return 1;
	}
    }
  return 0;
}
