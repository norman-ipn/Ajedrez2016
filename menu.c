#include <stdio.h>
#include <stdlib.h>

/*La mayoría de los printf están colocados sólo como marcadores de que el
programa funciona hasta tal punto, en la versión final no estarán presentes.*/

/*Esta función genera una pausa en la ejecución del programa*/
void
pausa (void)
{
  printf ("Presione ENTER para continuar");

  getchar ();
  getchar ();
  system ("clear");
}

/*Esta función imprime el tablero en pantalla*/
void
imprimir_tablero (char a[8][8])
{

  int i = 0;
  int j = 8;
  char aux = 'A';

while (j > 0)
    {
      if (i == 0)
	{
	  printf ("%c | ", (aux + (j - 1)));
	}

      printf ("  %c  |", a[j - 1][i]);

      i = i + 1;

      if (i == 8)
	{


	  printf ("\n");
	  printf ("----");

i = 0;

	  while (i < 8)
	    {
	      printf ("------");

	      i = i + 1;
	    }
	  printf ("\n");
	  i = 0;
	  j = j - 1;

	}
    }

  j = 8;
  i = 0;
  printf ("  |  ");
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
regresar_mov (char tablero [8][8], char copia[8][8])
{
int i = 0;
int j = 0;

while (i < 8)
  {
    while (j < 8)
    {
    tablero[i][j] = copia [i][j];
    j = j + 1;
    }
  i = i + 1;
  }
}

/*Esta función prepara el tablero para iniciar una nueva partida*/
void
colocar_piezas (char a[8][8])
{
  int i = 0;
  int j = 0;

  while (j < 4)
    {
      a[j + 2][i] = '\0';
      i = i + 1;

      if (i == 8)
	{
	  i = 0;
	  j = j + 1;
	}
    }

/*Letras mayúsculas representa a las piezas blancas*/
	
  a[0][0] = 'T';
  a[0][1] = 'C';
  a[0][2] = 'A';
  a[0][3] = 'D';
  a[0][4] = 'R';
  a[0][5] = 'A';
  a[0][6] = 'C';
  a[0][7] = 'T';
  a[1][0] = 'P';
  a[1][1] = 'P';
  a[1][2] = 'P';
  a[1][3] = 'P';
  a[1][4] = 'P';
  a[1][5] = 'P';
  a[1][6] = 'P';
  a[1][7] = 'P';
  a[6][0] = 'p';
  a[6][1] = 'p';
  a[6][2] = 'p';
  a[6][3] = 'p';
  a[6][4] = 'p';
  a[6][5] = 'p';
  a[6][6] = 'p';
  a[6][7] = 'p';
  a[7][0] = 't';
  a[7][1] = 'c';
  a[7][2] = 'a';
  a[7][3] = 'd';
  a[7][4] = 'r';
  a[7][5] = 'a';
  a[7][6] = 'c';
  a[7][7] = 't';
}
/*Esta función debe evaluar y realizar el movimiento que requiere el jugador*/
void
mover_pieza (char tablero[8][8])
{
  char movimiento[5];
  char aux;
  int columna = 0, 
  int fila = 0;
 
  printf ("Introduzca la coordenada de la pieza que desea mover\n\n");
 
  scanf ("%s", movimiento);
  columna = movimiento[1] - '1';
  fila = movimiento[0] - 'A';
  aux = tablero[fila][columna];
  tablero[fila][columna] = ' ';
 
  movimiento[2] = 'i';
  printf ("\nIntroduzca la coordenada de destino \n\n");
char h[5];
  scanf ("%s", h);
  columna = h[1] - '1';
  fila = h[0] - 'A';
  tablero[fila][columna] = aux;
 // guardar_mov (movimiento);
 
  printf ("Tu pieza ha sido movida exitosamente\n\n");
 
  pausa ();
 
}
/*Esta función guarda un historial de los movimientos realizados*/
void 
guardar_mov(char a[5], int i;)
{	
  char partida[150][5];
  int j=0;
  	
  while(j<5)
  {
  partida[i][j]=a[j];
  j=j+1;
  }
	
}
/*Esta función guarda la partida actual*/
void
guardar_partida (char a[8][8])
{

  FILE *archivo;

  archivo = fopen ("tablero.tab", "w");

  fwrite (a, sizeof (char), 64, archivo);

  fclose (archivo);

  printf ("La partida se guardó exitosamente\n\n");

  pausa ();

}
/*Esta función es la que rige todo el juego. Aquí deben estar las funciones
que permitan el movimiento de las piezas.*/
int
jugar (char a[8][8])
{
  int i = 0;
  char opc_j;

  printf ("Comienza el juego\n\n");
  pausa ();

  while (i != 1)
    {
      imprimir_tablero (a);

      printf ("¿Qué desea hacer a continuación?\n\n");

      printf ("Para realizar un movimiento introduzca \"m\"\n");
      printf ("Para guardar la partida introduzca \"g\"\n");
      printf ("Para reiniciar la partida actual introduzca \"r\"\n");
      printf ("Para salir de la partida actual introduzca \"s\"\n\n");

      scanf ("%c", &opc_j);

      switch (opc_j)
	{

	case 'm':
	  system ("clear");
	  mover_pieza (a);
	  break;

	case 'g':
	  system ("clear");
	  guardar_partida (a);
	  break;

	case 'r':
	  system ("clear");
	  colocar_piezas (a);
	  printf ("Se ha iniciado una nueva partida\n\n");
	  pausa ();
	  break;

	case 's':
	  system ("clear");
	  printf ("Ha salido de la partida actual\n\n");
	  pausa ();
	  return 0;

	default:
	  system ("clear");
	  printf ("La opción no es válida\n\n");
	  pausa ();
	  break;
	}
    }
}

/*Esta función inicia un nuevo juego*/
int
nuevo_juego (void)
{
  char tablero[8][8];

  printf ("Se ha iniciado un nuevo juego.\n\n");
  colocar_piezas (tablero);
  jugar (tablero);

  return 0;
}

/*Esta función carga la partida e inicia el juego*/
int
cargar_partida (void)
{
  char tablero[8][8];

  printf ("Se ha cargado correctamente la partida.\n\n");
  pausa ();
  jugar (tablero);

  return 0;
}

/*Esta función abre el manual del juego*/
int
manual (void)
{
  printf ("Estas son las reglas del juego. \n\n");

/*Aquí deben escribirse las reglas del juego*/

  pausa ();

  return 0;
}

/*Esta función representa el menú principal del juego*/
int
menu (void)
{
  char opc;
  int i = 0;

  while (i != 1)		/*Aquí la condición solo es para rellenar al argumento del bucle.
	         		   La unica forma de salir es cuando ocurre el caso en que opc = 's' */
    {
      printf ("Bienvenido a AjedrezEscom\n\n");
      printf ("¿Qué desea hacer?\n\n");
      printf ("Para comenzar un nuevo juego introduzca \"n\"\n");
      printf ("Para cargar una partida introduzca \"c\"\n");
      printf ("Para consultar el manual del juego introduzca \"h\"\n");
      printf ("Para salir del juego introduzca \"s\"\n\n");

      scanf ("%c", &opc);

      switch (opc)
	{

	case 'n':
	  system ("clear");
	  nuevo_juego ();
	  break;

	case 'c':
	  system ("clear");
	  cargar_partida ();
	  break;

	case 'h':
	  system ("clear");
	  manual ();
	  break;

	case 's':
	  system ("clear");
	  printf ("Gracias por jugar\n\n");
	  pausa ();
	  return 0;

	default:
	  system ("clear");
	  printf ("La opción no es válida\n");
	  pausa ();
	  break;
	}
    }
}

int
main (void)
{
  pausa();
  menu ();

  return 0;
}
