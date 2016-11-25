/* Cronómetro que contabiliza el tiempo total de la partida.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int
main (int argc, char **argv)
{
/* Inicialización de las variables, contará con minutos, segundos y horas. */
  int hrs = 0;
  int min = 0;
  int seg = 0;

/* Contabiliza desde el momento en que se da inicio a la partida.*/
      printf("I'm a  test");
      printf ("%d:%d:%d", hrs, min, seg);
/*  while (1)
    {
      if ((seg % 60) != 0)
	{
	  seg = 0;
	  min = min + 1;

	  if ((min % 60) != 0)
	    {
	      min = 0;
	      hrs = hrs + 1;
	    }
	}
      sleep (1);
 Limpia la pantalla de la consola para que se muestre la siguiente. 
      seg = seg + 1;*/
//      system ("clear");*/
    
  return 0;
}
