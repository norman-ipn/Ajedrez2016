#include <stdlib.h>
/*Opino que la función se invoque cuando el jugador escriba "GIVEUP" y mande a llamar esta función*/
/*Cuando juegua contra otro jugador si seria necesario mandar al menos un parametro para saber cual de los dos jugadores invoco la funcion.*/
 
void /*Opino que la función sea void, ya que no veo necesario regresar nada */
rendirse (int jugador) /*No veo necesario pasar parametros a la función */
{ 
   printf("El jugador contrario gano ya que te rendiste."); /*Opino que esto se englobe y sea para IA y PvP, para evitar problemas.*/
   printf("Gracias por jugar y suerte para la proxima");
   exit(-1); 
}

