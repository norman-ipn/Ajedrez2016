#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "app_ASCII.h"
/*
	**********************
	AAA   SSS  CC  III III
	A A  S    C     I   I
	AAA   S   C     I   I 
	A A    S  C     I   I 
	A A SSS    CC  III III
	**********************

	Como usar la funcion llenaCadena:
	se crea un arreglo con las letras en el orden en que se van a usar, se recibe la cadena de salida y a continuacion el numero de letrsa que son :)
*/
void
imprimeJaqueMate ()
{ int y=0;
  int x=0;
  int z=0;
  char jaquemate[7][45];
  char j[7][5];
  char a[7][5];
  char q[7][5];
  char u[7][5];
  char e[7][5];
  char m[7][5];
  char t[7][5];
  alfabetoASCII (j, 'j');
  alfabetoASCII (a, 'a');
  alfabetoASCII (q, 'q');
  alfabetoASCII (u, 'u');
  alfabetoASCII (e, 'e');
  alfabetoASCII (m, 'm');
  alfabetoASCII (t, 't');
  for(y=0;y<7;y=y+1)
  {
	for(x=0;x<5;x=x+1)
	{
		jaquemate[y][x]=j[y][x];
	}
	for(x=5;x<10;x=x+1)
	{
		jaquemate[y][x]=a[y][x-5];
	}
	for(x=10;x<15;x=x+1)
	{
		jaquemate[y][x]=q[y][x-10];
	}
	for(x=15;x<20;x=x+1)
	{
		jaquemate[y][x]=u[y][x-15];
	}
	for(x=20;x<25;x=x+1)
	{
		jaquemate[y][x]=e[y][x-20];
	}
	for(x=25;x<30;x=x+1)
	{
		jaquemate[y][x]=m[y][x-25];
	}
	for(x=30;x<35;x=x+1)
	{
		jaquemate[y][x]=a[y][x-30];
	}
	for(x=35;x<40;x=x+1)
	{
		jaquemate[y][x]=t[y][x-35];
	}
	for(x=40;x<45;x=x+1)
	{
		jaquemate[y][x]=e[y][x-40];
	}
  }
  for(z=0;z<3;z=z+1)
  {
  	for (y = 0; y < 7; y = y + 1)
    	{
      		for (x = 0; x < 45; x = x + 1)
		{
	  		printf ("%c", jaquemate[y][x]);
	  		usleep (10000);
	  	}
	  	printf("\n");
	}
	sleep(1);
	system("clear");

  }
  usleep (100000);
  system ("clear");

  
}

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
  imprimeJaque();
  imprimeJaqueMate ();
  return 0;
}
