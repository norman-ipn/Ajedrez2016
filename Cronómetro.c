#include <stdlib.h>
#include <iostream>
using namespace std;
int
main ()
{
  int HORA, MINUTO, SEGUNDO, ML;
  for (HORA = 0; HORA < 1000; HORA++)
    {
      for (MINUTO = 0; MINUTO < 60; MINUTO++)
	{
	  for (SEGUNDO = 0; SEGUNDO < 60; SEGUNDO++)
	    {
	      for (ML = 0; ML < 18.9; ML++)	/* Hacemos for que hasta 18.9 milesimas, en tiempo real 100 milesimas */
		{
		  cout << "Cronometro   ";
		  cout << HORA << ":" << MINUTO << ":" << SEGUNDO << "." << ML
		    << "\n";
		  system ("cls");
		}
	    }
	}
    }
  system ("PAUSE>NUL");		/* Pausamos el proyecto, al presionar cualquier tecla se cierra */
}

/* OPCIONAL: tiempo y hora local durante el juego */

#include <stdio.h> 
#include <time.h> 

int main() 
{ 
time_t tiempo; 
char cad[80]; 
struct tm *tmPtr; 

tiempo = time(NULL); 
tmPtr = localtime(&tiempo); 
strftime( cad, 80, "%H:%M.%S, %A de %B de %Y", tmPtr ); 

printf( "La hora local es: %s\n", asctime(tmPtr) ); 
printf( "La hora y fecha locales son: %s\n", cad ); 

return 0; 
}
