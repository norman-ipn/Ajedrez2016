#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h> 

void
pausa (void)
{

  printf ("Presione ENTER para continuar");

  getchar ();
  getchar ();
  system ("clear");

}
int
main ()
{
  int HORA, MINUTO, SEGUNDO, ML;
  time_t tiempo; 
  char cad[80]; 
  struct tm *tmPtr; 
  for (HORA = 0; HORA < 1000; HORA++)
    {
      for (MINUTO = 0; MINUTO < 60; MINUTO++)
	{
	  for (SEGUNDO = 0; SEGUNDO < 60; SEGUNDO++)
	    {
	      for (ML = 0; ML < 500; ML++)
		{
		  printf("Cronometro");
		  printf("%d : %d : %d . %d \n",HORA, MINUTO, SEGUNDO,ML);
		  system ("clear");
		}
	    }
	}
    }
  pausa ();
/* OPCIONAL: tiempo y hora local durante el juego */
  printf("\n---------HORA LOCAL-------\n");
  tiempo = time(NULL); 
  tmPtr = localtime(&tiempo); 
  strftime( cad, 80, "%H:%M.%S, %A de %B de %Y", tmPtr ); 

  printf( "La hora local es: %s\n", asctime(tmPtr) ); 
  printf( "La hora y fecha locales son: %s\n", cad ); 

return 0; 
		 
}










