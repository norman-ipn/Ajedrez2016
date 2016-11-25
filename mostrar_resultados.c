#include "mostrar_resultados.h"
#include "(F)historial_de_partidas.h"


void
mostrar_resultados (int num_jugador, int mostrar_historial)	/*Número del jugador que ha ganado */
{


  int mostrar_historial = 0;

  printf ("El jugador %d ha ganado esta partida, Felicidades  ", num_jugador);

  mostrar_historial = udhist ();
}


 /*Aqui yo creo se tendria que mandar a llamar lo que es el almacenado de partidas y el menu yo creo */
/*Propongo que se cambie el nombre de la función del historial por algo que se entienda sin tener que leer los comentarios*/
