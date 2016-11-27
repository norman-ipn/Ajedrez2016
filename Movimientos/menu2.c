#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* Las funciones getchar,putchar y los operadores AND y OR estan desbloqueadas :D*/

void
menu_jugador (void)
{
  printf ("\n");
  printf ("1- Continuar partida \n");
  printf ("2- Juega con un amigo :D \n");
  printf ("3- Juega con la computadora \n");
  printf ("4- Puntuacion \n\n");

}


void
manual (void)
{
  char cond = 's';
  int opc = 0, temp = 1, sn = 1;

  do
    {
      printf ("Escoja alguna de las siguientes opciones");
      printf ("\n 1.-Modos de juego");
      printf ("\n 2.-Guardar Partida");
      printf ("\n 3.-Instrucciones");
      printf ("\n 4.-Salir\n");
      scanf ("%d", &opc);

      do
	{
	  switch (opc)
	    {
	    case 1:
	      printf
		("\nExisten 2  diferentes modos de juego, usted puede elegir");
	      printf
		(" entre jugar con un amigo uno a uno o jugar contra la maquina");
	      break;
	    case 2:
	      printf
		("Para salvar la partida presione la letra G, aparecera un ");
	      printf ("mensaje que dira -se ha salvado correctamente- ");
	      break;
	    case 3:
	      printf ("\nInstrucciones de juego\n");
	      break;
	    case 4:
	      main (void);
	      break;
	    }

	  printf ("\n Presione n para salir\n");

	  scanf ("%c", &cond);
	  if (cond == 'n')
	    {
	      temp = -1;
	    }
	}
      while (temp >= 0);

      manual ();
    }
  while (sn >= 0);

}

void
iniciar_sesion ()
{

  int resp1 = 0, resp2 = 0;
  char user[99999] = "usuario", password[99999] = "clave";
  char usuario[99999], clave[99999];
  char buffer1[99999], buffer2[99999];

  printf ("\n");
  printf ("Ingrese usuario ");

  fgets (buffer1, 128, stdin);
  sscanf (buffer1, "%s", &usuario);

  printf ("\n");

  printf ("Ingrese clave   ");

  fgets (buffer2, 128, stdin);
  sscanf (buffer2, "%s", &clave);


  resp1 = strcmp (user, usuario);
  resp2 = strcmp (password, clave);

  if (resp1 == 0 && resp2 == 0)
    {
      menu_jugador ();
    }
  else
    {
      printf ("\n");
      printf ("Usuario incorrecto");
    }
}

int
main (void)
{
  int condicion = 0, test = 1;


  printf ("Bienvenido \n\n");

  printf ("1- Iniciar sesion \n");
  printf ("2- Manual/Instruciones \n");
  printf ("3- Salir \n\n");

  char buffer[128];
  fgets (buffer, 128, stdin);
  sscanf (buffer, "%d", &condicion);

  while (test >= 0)
    {
      switch (condicion)
	{
	case 1:
	  iniciar_sesion ();
	  break;
	case 2:
	  manual ();
	  break;
	case 3:
	  test = -1;
	  break;
	default:
	  printf ("Valor fuera del dominio \n");
	  break;
	}
      scanf ("%d", &condicion);
    }
  printf ("\n");
  return 0;
}
