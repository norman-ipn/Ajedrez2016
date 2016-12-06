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

void
alfil_inferior_izquierdo ()
{

  int a = 0;

  int b = 0;

  char alfil[0][2];

  for (a = 0; a <= 8; a++)
    {

      for (b = 0; b <= 8; b++)
	{

	  char alfil[a][b];





	  switch (alfil[a][b])

	    {

	    case 1:

	      alfil[0][2];

	      break;

	    case 2:

	      alfil[0][0];

	      break;

	    case 3:

	      alfil[0][4];

	      break;

	    case 4:

	      alfil[0][6];

	      break;

	    case 5:

	      alfil[1][1];

	      break;

	    case 6:

	      alfil[1][3];

	      break;

	    case 7:

	      alfil[1][5];

	      break;

	    case 8:

	      alfil[1][7];

	      break;

	    case 9:

	      alfil[2][0];

	      break;

	    case 10:

	      alfil[2][2];

	      break;

	    case 11:

	      alfil[2][4];

	      break;

	    case 12:

	      alfil[2][6];

	      break;

	    case 13:

	      alfil[3][1];

	      break;

	    case 14:

	      alfil[3][3];

	      break;

	    case 15:

	      alfil[3][5];

	      break;

	    case 16:

	      alfil[3][7];

	      break;

	    case 17:

	      alfil[4][0];

	      break;

	    case 18:

	      alfil[4][2];

	      break;

	    case 19:

	      alfil[4][4];

	      break;

	    case 20:

	      alfil[4][6];

	      break;

	    case 21:

	      alfil[5][1];

	      break;

	    case 22:

	      alfil[5][3];

	      break;

	    case 23:

	      alfil[5][5];

	      break;

	    case 24:

	      alfil[5][7];

	      break;

	    case 25:

	      alfil[6][0];

	      break;

	    case 26:

	      alfil[6][2];

	      break;

	    case 27:

	      alfil[6][4];

	      break;

	    case 28:

	      alfil[6][6];

	      break;

	    case 29:

	      alfil[7][1];

	      break;

	    case 30:

	      alfil[7][3];

	      break;

	    case 31:

	      alfil[7][5];

	      break;

	    case 32:

	      alfil[7][7];

	      break;

	    }

	}
    }



}

