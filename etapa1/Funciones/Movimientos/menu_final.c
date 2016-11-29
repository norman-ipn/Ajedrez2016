/*Este menu no tiene ningun sentido, comenta aqui su función si no tendra que ser borrado, solo le estas dando pie al menu normal*/
#include "menu_final.h"

int
menu_final (void)
{

  char opc;
  int i = 0;

  while (i != 1)

    {

      printf ("Nuevo juego 'n' \n");
      printf ("Menú principal 'm' \n");
      printf ("Salir 's' \n");

      sscanf ("%c", &opc);

      switch (opc)

	{

	case 'n':
	  system ("clear");
	  nuevo_juego ();
	  break;

	case 'm':
	  system ("clear");
	  menu ();
	  break;

	case 's':
	  system ("clear");
	  break;


	default:
	  system ("clear");
	  printf ("La opción no es válida");
	  pausa ();


	}

    }

}
