#include<stdio.h>

void
inicializar (char tablero[8][8])
{
  /* Arreglo de enteros para su posterior conversion a codigo ASCII */
  int partesuperior[50] =
    { 218, 196, 196, 196, 196, 194, 196, 196, 196, 196, 194, 196, 196, 196,
196, 194, 196, 196, 196, 196, 194, 196, 196, 196, 196, 194, 196, 196, 196, 196, 194, 196, 196,
196, 196, 194, 196, 196, 196, 196, 191
  };
  int parteinferior[50] =
    { 192, 196, 196, 196, 196, 193, 196, 196, 196, 196, 193, 196, 196, 196,
196, 193, 196, 196, 196, 196, 193, 196, 196, 196, 196, 193, 196, 196, 196, 196, 193, 196, 196,
196, 196, 193, 196, 196, 196, 196, 217
  };
  int cuerpo[50] =
    { 195, 196, 196, 196, 196, 197, 196, 196, 196, 196, 197, 196, 196, 196,
196, 197, 196, 196, 196, 196, 197,
    196, 196, 196, 196, 197, 196, 196, 196, 196, 197, 196, 196, 196, 196, 197,
      196, 196, 196, 196, 180,
  };
  int a = 0;			/* variable de control de ciclos */
  int c = 179;
  int x = 0;			/* variable de control de la posicion del tablero en x */
  int y = 0;			/* variable de control de la posicion del tablero en y */
  int f = 8;			/* variable para la nmeracion de filas */
  int blanca = 220;
  int i = 0;
  /* Se inicializa el tablero con caracteres nulos para no tener basura */
  for (y = 0; y <= 8; y++)
    {
      for (x = 0; x <= 8; x++)
	{
	  tablero[x][y] = '\0';
	}
    }
  /* Iniciando piezas */
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  for (i = 0; i < 8; i++)
    {
/* Piezas blancas se identifican por estar en mayusculas, negras en minuscula */
      tablero[6][i] = 'P';
      tablero[1][i] = 'p';
    }
  /* impresion del tablero de ajedrez */
  printf ("\n");
  printf ("    ");
  for (a = 0; a < 50; a++)
    {
      /* Se indica el tipo de dato %c para que interprete el entero segun el codigo ASCII */
      printf ("%c", partesuperior[a]);
      a++;
    }
  a = 0;
  for (y = 0; y < 7; y++)
    {

      printf ("\n");
      printf ("  %d ", f);
      for (a = 0; a < 8; a++)
	{
	  printf ("%c %c  ", c, tablero[y][x]);
	  x++;
	}
      printf ("%c", c);
      printf ("\n");
      printf ("    ");
      for (a = 0; a < 50; a++)
	{
	  printf ("%c", cuerpo[a]);
	}
      x = 0;
      y++;
      f--;
    }
  printf ("\n");
  printf ("  %d ", f);
  for (a = 0; a < 8; a++)
    {
      printf ("%c %c  ", c, tablero[y][x]);
      x++;
    }
  printf ("%c", c);
  printf ("\n");
  printf ("    ");
  for (a = 0; a < 50; a++)
    {
      printf ("%c", parteinferior[a]);
    }
  printf ("\n");
  printf ("    ");
  a = 0;
  for (a = 0; a < 8; a++)
    {
      printf ("  %c  ", 65 + a);
    }
}
