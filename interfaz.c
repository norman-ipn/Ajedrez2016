#include "interfaz.h"
#include <stdio.h>
void
setUp ()
{
  char confirmacion = ' ';
  printf ("Para mostrar las animaciones\n
	necesitamos que instales un programa por nosotros,\n
	su nombre es figlet, puedes instalarlo usando:\n\n
	sudo apt-get install figlet\n\n
	o bien podemos hacerlo por ti, presiona s para instalar\n
	o cualquier otra para no hacerlo, podras hacerlo despues.");
  if (confirmacion == 's' || confirmacion == 'S')
    {
      system ("sudo apt-get install figlet");
    }
}

void
animaciones (int n)
{
  switch (n)
    {
    case 1:
      system ("clear");
      system ("figlet 'Jaque!!'");
      sleep (2);
      system ("clear");
      break;
    case 2:
      system ("clear");
      system ("figlet 'JaqueMate!!'");
      sleep (2);
      system ("clear");
      break;
    case 3:
      system ("clear");
      system ("figlet 'Jugador 1 Gano!!'");
      sleep (2);
      system ("clear");
      break;
    case 4:
      system ("clear");
      system ("figlet 'Jugador 2 Gano!!'");
      sleep (2);
      system ("clear");
      break;
    case 5:
      system ("clear");
      system ("figlet 'Bienvenido'");
      sleep (2);
      system ("clear");
      break;
    case 6:
      system ("clear");
      system ("figlet 'Adios :)'");
      sleep (2);
      system ("clear");
      break;
    default:
      break;
    }
}
