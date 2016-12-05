#include "tablero.h"
#include "piezas.h"
#define __TABLERO_H___

// recorte el codigo de inicializar y solo lo coloque en tablero.h
void
inicializar(a[8][8])
{
 +  int x = 0;
 +  int y = 0;
 +  int i = 0;
 +
 +  while (y <= 8)
 +    {
 +      while (x <= 8)
 +	{
 +	  a[x][y] = '\0';
 +	  x = x + 1;
 +	}
        y = y + 1;
 +    }
 +
 +  a[0][0] = 't';
 +  a[0][1] = 'c';
 +  a[0][2] = 'a';
 +  a[0][3] = 'd';
 +  a[0][4] = 'r';
 +  a[0][5] = 'a';
 +  a[0][6] = 'c';
 +  a[0][7] = 't';
 +  a[7][0] = 'T';
 +  a[7][1] = 'C';
 +  a[7][2] = 'A';
 +  a[7][3] = 'D';
 +  a[7][4] = 'R';
 +  a[7][5] = 'A';
 +  a[7][6] = 'C';
 +  a[7][7] = 'T';
 +
 +  while (i <= 7)
 +    {
 +      a[1][i] = 'p';
 +      a[6][i] = 'P';
 +      i = i + 1;
 +    }
 +}

void
main (void)
{
  char tablero[8][8];
  incializar (tablero);
}
