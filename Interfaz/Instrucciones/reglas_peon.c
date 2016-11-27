#include <stdio.h>
void
reglas_peon (void)
{

  printf
    ("Los peones son las principales unidades para cubrir terreno, no son muy fuertes y est%cn pensados m%cs para ocupar posiciones que para capturar, se mueven de la siguiente forma: \n",
     a_acento, a_acento);
  printf
    ("\n El peon puede avanzar 2 casillas y terminar en el caracter # solo si se encuentra en su casilla de arranque. Despu%cs de esto, tendr%c que avanzar 1 casilla a la vez \n");
  printf
    (" O puede hacerlo desde el inicio. Los 'O' representan las posiciones en las que si una pieza enemiga se encuentra ah%c, esta puede ser capturada.\n");

  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'X', ' ', 'X', ' ',
	  'X');
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', '#', ' ', 'X', ' ',
	  'X');
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'O', '%', 'O', ' ', 'X',
	  ' ');
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", ' ', 'X', ' ', 'P', ' ', 'X', ' ',
	  'X');
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", 'X', ' ', 'X', ' ', 'X', ' ', 'X',
	  ' ');
  printf (" |================|\n");

  printf
    ("\n NOTA: Si un peon consigue llegar hasta la linea del fondo del adversario, este podra convertirse en cualquier unidad que se desee, excepto el rey. \n");
  getchar();
  return;
}
