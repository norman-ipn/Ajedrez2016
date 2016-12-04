#include "ia.h"
#include "time.h"

/* === Funcion principal del Sistema de AI =======

Vamos a considerar que cuando jugemos contra un usuario siempre seran ellos piezas blancas

y que la AI va a interpretar que hay piezas mas importantes que otras
Torre = 8
Cabello = 8
Alfil = 8

Rey = 100
Reina = 20
Peon = 1

*/

/* Variables Globales */


void
tirar_ai(struct tablero *un_tablero)
{
  /* Genera una semilla Random */
  srand (time(NULL));
  
  /* Revisa si podemos comer y cuanto ganariamos*/
  int comer = podemosComer(*un_tablero);
	
  /* Revisa si nos pueden comer y cuanto perderiamos*/
  int comidos = podemosSerComidos(*un_tablero);
	
  if(comer<comidos){
    come
  }
}



