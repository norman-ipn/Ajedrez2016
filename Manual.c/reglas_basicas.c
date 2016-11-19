#include <stdio.h>
void
reglas_basicas (char tablero[8][8])
{
  printf
    ("\n El Ajedrez es un juego de estrategia en el que dos jugadores hacen uso de piezas con distintos tipos de movimiento para capturar (comer) a las del rival.\n El objetivo del juego es acorralar   al rey de tal modo que este no pueda moverse a ning%cn lugar sin ser amenazado \n ",
     u_acento);
  while (getchar () != '\n');
  printf
    ("\n El juego comienza en un tablero de 8 x 8  casillas en las que los jugadores deben de mover sus piezas con el fin de capturar las del oponente y darle el jaque mate al rey adversario.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[7][0], tablero[7][1],
	  tablero[7][2], tablero[7][3], tablero[7][4], tablero[7][5],
	  tablero[7][6], tablero[7][7]);
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[6][0], tablero[6][1],
	  tablero[6][2], tablero[6][3], tablero[6][4], tablero[6][5],
	  tablero[6][6], tablero[6][7]);
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[5][0], tablero[5][1],
	  tablero[5][2], tablero[5][3], tablero[5][4], tablero[5][5],
	  tablero[5][6], tablero[5][7]);
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[4][0], tablero[4][1],
	  tablero[4][2], tablero[4][3], tablero[4][4], tablero[4][5],
	  tablero[4][6], tablero[4][7]);
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[3][0], tablero[3][1],
	  tablero[3][2], tablero[3][3], tablero[3][4], tablero[3][5],
	  tablero[3][6], tablero[3][7]);
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[2][0], tablero[2][1],
	  tablero[2][2], tablero[2][3], tablero[2][4], tablero[2][5],
	  tablero[2][6], tablero[2][7]);
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[1][0], tablero[1][1],
	  tablero[1][2], tablero[1][3], tablero[1][4], tablero[1][5],
	  tablero[1][6], tablero[1][7]);
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[0][0], tablero[0][1],
	  tablero[0][2], tablero[0][3], tablero[0][4], tablero[0][5],
	  tablero[0][6], tablero[0][7]);
  printf (" |================|\n");
 getchar();
  return;
}
