#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "app_ASCII.h"


void
cara (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', '*', ' ', '*', ' '},
    {' ', ' ', '*', ' ', ' '},
    {'*', ' ', ' ', ' ', '*'},
    {' ', '*', '*', '*', ' '},
    {' ', ' ', ' ', ' ', ' '}
  };
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }

}

void
letraX (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', ' ', 'X', ' ', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '}
  };
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
}

void
Imprimeanimacion ()
{
  char a[7][5];
  char a1[7][5];
  cara (a);
  letraX (a1);
  int i = 0;
  int j = 0;
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  printf ("%c", a[i][j]);
	  usleep (100000);
	}
      printf ("\n");

      sleep (1);
    }
  i = 0;
  j = 0;
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  printf ("%c", a1[i][j]);
	  usleep (100000);
	}
      printf ("\n");
      sleep (1);
    }

}

int
main (void)
{

  Imprimeanimacion ();


  return 0;
}
