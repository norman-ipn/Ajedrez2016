#include "interfaz.h"
#include "tablero.h"
#include "guardar_partida.h" /*Bibloteca que se requiere para la opción de cargar partida*/
#define Reset     "\x1b[0m"	/*Agrego colores para poder visualizarlos en el menú para seleccionar el color del tablero */
#define Negro     "\x1b[30m"
#define Rojo      "\x1b[31m"
#define Verde     "\x1b[32m"
#define Amarillo  "\x1b[33m"
#define Azul      "\x1b[34m"
#define Magenta   "\x1b[35m"
#define Cyan      "\x1b[36m"

/*Esta función imprime el tablero en pantalla. Recibe la estructura definida en tablero.h*/
void
imprimir_tablero (struct tablero *tablero)
{
  int i = 0;
  int j = 8;
  char aux = 'A';

  printf ("\n\n");

  while (j > 0)
    {
      if (i == 0)
	{
	  printf (" %c ||", (aux + (j - 1)));
	}
     printf ("  %c  |", tablero->casillas[j - 1][i]);
     i = i + 1;

      if (i == 8)
	{
	  if (j != 1)
	    {
	      printf ("\n");
	      printf ("----");

	      i = 0;

	      while (i < 8)
		{
		  printf ("------");

		  i = i + 1;
		}
	    }
	  if (j == 1)
	    {
	      printf ("\n");
	      printf ("=====");

	      i = 0;

	      while (i < 8)
		{
		  printf ("======");

		  i = i + 1;
		}
	    }
	  printf ("\n");
	  i = 0;
	  j = j - 1;
	}
    }

  j = 8;
  i = 0;
  printf (">:v|| ");
  while (j > 0)
    {
      aux = '1';
      printf (" %c  | ", (aux + i));
      j = j - 1;
      i = i + 1;
    }
  printf ("\n\n");
}

void
setUp (void)
{
  char confirmacion = ' ';
  char buffer[4];
  system ("clear");
  printf
    ("Para mostrar las animaciones\n  necesitamos que instales un programa por nosotros,\n  su nombre es figlet, puedes instalarlo usando:\n\n  sudo apt-get install figlet\n\n  o bien podemos hacerlo por ti, presiona s para instalar(se te pedira tu contraseña)\n  o cualquier otra para no hacerlo, podras hacerlo despues. :)\n");
  fgets (buffer, 4, stdin);
  sscanf (buffer, "%c", &confirmacion);
  system ("clear");
  if (confirmacion == 's' || confirmacion == 'S')
    {
      printf ("Gracias, se instalará a continuación");
      system ("sudo apt-get install figlet");
    }
  system ("clear");
  printf ("Gracias por elegir este juego, disfrutalo");
  sleep (3);
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
    case 7:
      system ("clear");
      system ("figlet '.:Bienvenido:.'");
      sleep (2);
      system ("clear");
      break;
    default:
      break;
    }
}

void
piezas_comidas (int a)
{
  char TorreN[] = "\u265C";
  char AlfilB[] = "\u2657";
  char AlfilN[] = "\u265E";
  char CaballoB[] = "\u2658";	/* Piezas de ajedrez en unicode para imprimirlas cuando se coman */
  char CaballoN[] = "\u265D";
  char ReynaB[] = "\u2655";
  char ReynaN[] = "\u265B";
  char ReyB[] = "\u2654";
  char ReyN[] = "\u265A";
  char PeonB[] = "\u2659";
  char PeonN[] = "\u265F";
  char TorreB[] = "\u2656";
  switch (a)
    {
    case 1:
      printf (" %s ", TorreN);
      break;
    case 2:
      printf (" %s ", TorreB);
      break;
    case 3:
      printf (" %s ", AlfilN);
      break;
    case 4:
      printf (" %s ", AlfilB);
      break;
    case 5:
      printf (" %s ", CaballoN);
      break;
    case 6:
      printf (" %s ", CaballoB);
      break;
    case 7:
      printf (" %s ", PeonN);
      break;
    case 8:
      printf (" %s ", PeonB);
      break;
    case 9:
      printf (" %s ", ReyN);
      break;
    case 10:
      printf (" %s ", ReyB);
      break;
    case 11:
      printf (" %s ", ReynaN);
      break;
    case 12:
      printf (" %s ", ReynaB);
      break;
    default:
      break;
    }
}
void
letreros (int n)
{
  switch (n)
    {
    case 1:
      printf ("\n");
      system ("figlet '.:Ajedrez:.'");
      printf ("\n");
      break;
    default:
      break;
    }
}

/* ESto lo comente porque no compilaba
void
seleccionar_color_de_tablero ()
{
  int opcion;
  printf ("Seleccione el color del tablero:\n");
  printf ("1.Predeterminado\n");
  printf (Negro "2.Negro\n" Reset);
  printf (Rojo "3.Rojo\n" Reset);
  printf (Verde "4.Verde\n" Reset);
  printf (Amarillo "5.Amarillo\n" Reset);
  printf (Azul "6.Azul\n" Reset);
  printf (Magenta "7.Magenta\n" Reset);
  printf (Cyan "8.Cyan\n" Reset);
  scanf ("%d", &opcion);
  switch (opcion)
    {
    case 1:
      tablero ();		 Ya le pedí a unos compañeros del módulo de tablero que agregaran las funciones de los case con colores para que puedan llamarse desde aquí. Debido a eso también incluyo la cabecera "tablero.h" para que no haya errores. Ya compila, sólo hace falta agregar las funciones que ya mencioné 
      break;
    case 2:
      tablero_negro ();
      break;
    case 3:
      tablero_rojo ();
      break;
    case 4:
      tablero_verde ();
      break;
    case 5:
      tablero_amarillo ();
      break;
    case 6:
      tablero_azul ();
      break;
    case 7:
      tablero_magenta ();
      break;
    case 8:
      tablero_cyan ();
      break;
    }
}
*/
void
menu (void)
{
 /*hola aqui pondremos el menu, si ven que faltan opciones agreguenlas, por cierto, verifiquen que su editor no agregue nada más, en otras palabras, verifiquen que compile, el editor del ultimo que lo subio incerto diagonales de mas para que se visualizara el salto de linea, pero evitaba que compilara, ademas hay que pedir a los de archivos que nos creen persistencia para no ejecutar todo el tiempo el setup */
  char o = '\0';
  char buffer[4];

  system ("clear");
  animaciones (7);
  letreros (1);
  
  while(1 == 1)
  {
    system("clear");
    printf ("Escoge el numero de opcion\n");
    printf("1) Nueva Partida\n2) Cargar Partida\n3)Manual del juego\n4) Configuracion\n5) Salir\n\n");
    fflush(stdin);
    fgets (buffer, 4, stdin);
    sscanf (buffer, "%c", &o);
    switch (o)
      {
      case '1':
	system("clear");
        printf("Aquí va la función que inicia el juego");
        break;

      case '2':
	system("clear");
        printf("Aquí va la función que carga una partida");
        break;

      case '3':
	system("clear");
        printf("Aquí va la función que abre los manuales del juego");
        break;
      case '4':
	system("clear");
        setUp ();
        system ("clear");
        break;
      case '5':
        animaciones (6);
        system ("clear");
        return;
        break;
      default:
        printf("\nNo ha introducido una opción válida. Intente de nuevo por favor.\n");
        o = '\0';
        break;
      }
  }
}

int
main(int c, char **arg) /*temporal*/
{
  menu ();
  return 0;
}
