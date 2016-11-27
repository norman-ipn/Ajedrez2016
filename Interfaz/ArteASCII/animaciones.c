#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "app_ASCII.h"
void
imprimeJaque ()
{
  int i = 0;
  int j = 0;
  char jaque[7][32];
  char j0[7][5];
  char a[7][5];
  char q[7][5];
  char u[7][5];
  char e[7][5];
  char x[7][5];
  char es[7][5];
  system ("clear");
  alfabetoASCII (j0, 'j');
  alfabetoASCII (a, 'a');
  alfabetoASCII (q, 'q');
  alfabetoASCII (x, '0');
  alfabetoASCII (u, 'u');
  alfabetoASCII (e, 'e');
  alfabetoASCII (es, ' ');
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  jaque[i][j] = j0[i][j];
	}
      for (j = 5; j < 10; j = j + 1)
	{
	  jaque[i][j] = a[i][j - 5];
	}
      for (j = 10; j < 15; j = j + 1)
	{
	  jaque[i][j] = q[i][j - 10];
	}
      for (j = 15; j < 20; j = j + 1)
	{
	  jaque[i][j] = u[i][j - 15];
	}
      for (j = 20; j < 25; j = j + 1)
	{
	  jaque[i][j] = e[i][j - 20];
	}
      for (j = 25; j < 30; j = j + 1)
	{
	  jaque[i][j] = x[i][j - 25];
	}
      jaque[i][30] = '\n';
      jaque[i][31] = '\0';
    }
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 32; j = j + 1)
	{
	  printf ("%c", jaque[i][j]);

	  usleep (10000);
	}

    }
  usleep (100000);
  system ("clear");

  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 25; j = j + 1)
	{
	  printf ("%c", jaque[i][j]);

	}
      printf ("\n");

    }
  usleep (100000);
  system ("clear");
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 32; j = j + 1)
	{
	  printf ("%c", jaque[i][j]);

	}

    }

  sleep (1);
  system ("clear");
}

int
main (int c, char **args)
{
  imprimeJaque ();
  return 0;
}
