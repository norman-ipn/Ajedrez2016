#include <stdio.h>

int
main ()
{
  int i = 0;
  int j = 0;
  int l = 0;
  int a = 95;

  char tablero[8][8];
  for (i = 0; i < 8; i = i + 1)
    {
      for (j = 0; j < 8; j = j + 1)
	{
	  tablero[i][j] = ' ';
	}
    }
  for (i = 0; i < 8; i = i + 1)
    {
      tablero[1][i] = 'P';
    }
  for (i = 0; i < 8; i = i + 1)
    {
      tablero[6][i] = 'p';
    }


  tablero[0][0] = 'T';
  tablero[0][1] = 'C';
  tablero[0][2] = 'A';
  tablero[0][3] = 'R';
  tablero[0][4] = 'D';
  tablero[0][5] = 'A';
  tablero[0][6] = 'C';
  tablero[0][7] = 'T';

  tablero[7][0] = 't';
  tablero[7][1] = 'c';
  tablero[7][2] = 'a';
  tablero[7][3] = 'r';
  tablero[7][4] = 'd';
  tablero[7][5] = 'a';
  tablero[7][6] = 'c';
  tablero[7][7] = 't';

  for (i = 0; i < 8; i++)
    {
      for (l = 0; l < 17; l++)
	printf ("%c%c", a, a);
      printf ("\n");
      for (j = 0; j < 8; j++)
	{
	  printf ("| %c ", tablero[i][j]);
	}
      printf ("|\n");
    }
  for (l = 0; l < 17; l++)
    printf ("%c%c", a, a);
  printf ("\n");
  return 0;
}

/*
void
main (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  int e = 0;

  for (i = 0; i < 10; i = i + 1)
    {
      tablero[i][j] = '*';
      printf (" ");
      printf ("%c", tablero[i][j]);
    }
*/
/*-------------------------------------*/
  /*printf ("\n");
  i = 0;
  while (j < 8)
    {
      printf (" ");
      tablero[9][j] = '*';
      printf ("%c", tablero[9][j]);

      if (j = 1)
	{
	  tablero[8][1] = 'T';
	  tablero[7][1] = 'C';
	  tablero[6][1] = 'A';
	  tablero[5][1] = 'K';
	  tablero[4][1] = 'Q';
	  tablero[3][1] = 'A';
	  tablero[2][1] = 'C';
	  tablero[1][1] = 'T';
	  /*
	  tablero[8][1] = 'T1';
	  tablero[7][1] = 'C1';
	  tablero[6][1] = 'A1';
	  tablero[5][1] = 'Ry';
	  tablero[4][1] = 'Re';
	  tablero[3][1] = 'A2';
	  tablero[2][1] = 'C2';
	  tablero[1][1] = 'T2';
	  */
		//no se si aqui va otro de espacio
/*	  printf ("%c", tablero[8][1]);
	  printf (" ");
	  printf ("%c", tablero[7][1]);
	  printf (" ");
	  printf ("%c", tablero[6][1]);
	  printf (" ");
	  printf ("%c", tablero[5][1]);
	  printf (" ");
	  printf ("%c", tablero[4][1]);
	  printf (" ");
	  printf ("%c", tablero[3][1]);
	  printf (" ");
	  printf ("%c", tablero[2][1]);
	  printf (" ");
	  printf ("%c", tablero[1][1]);
	  //igual no se si va un espacio mas//
	  e = 8;
	  while (e >= 1)
	    {
	      tablero[e][2] = 'P';
	      printf ("%c", tablero[e][2]);
	      e = e - 1;
	    }
	}
      if (j = 7)
	{
	  tablero[8][1] = 'T';
	  tablero[7][1] = 'C';
	  tablero[6][1] = 'A';
	  tablero[5][1] = 'K';
	  tablero[4][1] = 'Q';
	  tablero[3][1] = 'A';
	  tablero[2][1] = 'C';
	  tablero[1][1] = 'T';
	  /*
	  tablero[8][1] = 'T1';
	  tablero[7][1] = 'C1';
	  tablero[6][1] = 'A1';
	  tablero[5][1] = 'Ry';
	  tablero[4][1] = 'Re';
	  tablero[3][1] = 'A2';
	  tablero[2][1] = 'C2';
	  tablero[1][1] = 'T2';
	  */
	/*no se si aqui va otro de espacio */
/*	  printf ("%c", tablero[8][7]);
	  printf (" ");
	  printf ("%c", tablero[7][7]);
	  printf (" ");
	  printf ("%c", tablero[6][7]);
	  printf (" ");
	  printf ("%c", tablero[5][7]);
	  printf (" ");
	  printf ("%c", tablero[4][7]);
	  printf (" ");
	  printf ("%c", tablero[3][7]);
	  printf (" ");
	  printf ("%c", tablero[2][7]);
	  printf (" ");
	  printf ("%c", tablero[1][7]);
	  //igual no se si va un espacio mas//
	  e = 8;
	  while (e >= 1)
	    {
	      tablero[e][7] = 'P';
	      printf ("%c", tablero[e][7]);
	      e = e - 1;
	    }
	}
      /* while (e < 17)
         {
         printf (" ");
         e = e + 1;
         }
         e = 0; */

 /*     tablero[i][j] = '*';
      printf ("%c \n", tablero[i][j]);
      j = j + 1;
    }
  /*-------------------------------------*/
/*  i = 0;
  for (i = 0; i < 9; i = i + 1)
    {
      tablero[i][9] = '*';
      printf ("%c", tablero[i][9]);
    }
/*-------------------------------------*/
 /* printf ("\n");
*/
}
