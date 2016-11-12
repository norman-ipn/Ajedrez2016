#include <stdio.h>
/*Opino que la función se invoque cuando el jugador escriba "GIVEUP" y mande a llamar esta función*/
/*Cuando juegua contra otro jugador si seria necesario mandar al menos un parametro para saber cual de los dos jugadores invoco la funcion.*/ 
void /*Opino que la función sea void, ya que no veo necesario regresar nada */
rendirse () /*No veo necesario pasar parametros a la función por eso los quite */
{
   printf("Gracias por jugar y suerte para la proxima"); /*Esto esta validado para jugar contra PC falta como seria con un Jugador 2 */
 
   exit(-1); /*Forma de acabar el programa, la verdad no recuerdo como era*/
}


/*Si recibe el parametro de quien escribe "GIVEUP" quedaria asi la funcion*/
/*rendirse (int jugador){
   if(jugador==1){
      printf("El jugador dos gano ya que el jugador uno se rindio");
      exit(-1);
   }
   if(jugador==2){
      printf("El jugador uno gano ya que el jugador dos se rindio");
      exit(-1);
   }
}
*/
