#include <stdio.h>
void
reglas_reyna (void)
{
  printf
    ("\n La Reina o Dama es la pieza más poderosa de un jugador, combina la forma de movimiento de la torre y el alfil, y al igual que estas dos, puede moverse cuanto quiera.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'O', ' ', 'X', ' ',
	  'O');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', 'O', 'X', ' ', 'O',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'O', ' ', 'O', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', 'O', 'O', 'R', 'O', 'O', 'O',
	  'O');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', 'O', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'O', ' ', 'O', ' ', 'O', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'O', ' ', 'X', 'O', 'X', ' ', 'O',
	  ' ');
  printf (" |================|\n");
  getchar();
  return;
}
