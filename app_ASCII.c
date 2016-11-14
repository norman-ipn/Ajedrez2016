#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void
jaqueAnimacion ()
{
  int x = 0;
  int y = 0;
  char letraA[10][10] = {
    {' ', ' ', 'A', 'A', 'A', 'A', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', 'A', 'A', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', 'A', 'A', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', 'A', 'A', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
    {' ', ' ', 'A', 'A', ' ', ' ', 'A', 'A', ' ', ' '},
  };
  while (y < 10)
    {
      while (x < 10)
	{
	  printf ("%c", letraA[y][x]);
	  x = x + 1;
	}
      x = 0;
      sleep (1);
      printf ("\n");
      y = y + 1;
    }

  sleep (1);
  printf ("paso 1 segundo\n");
  sleep (1);
  printf ("pasaron 2 segundos\n");
}

/*
void
imprime()
{
	
  printf("%s",); 
  	
}*/

int
main (int argc, char const *argv[])
{
  jaqueAnimacion ();		/*delay(1000);
				   jaqueAnimacion(); delay(1000); */
  return 0;
}
