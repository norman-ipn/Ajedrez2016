#include "Rendirse.h"
/*Opino que la función se invoque cuando el jugador escriba "GIVEUP" y mande a llamar esta función*/
/*Cuando juegua contra otro jugador si seria necesario mandar al menos un parametro para saber cual de los dos jugadores invoco la funcion.*/
 
void /*Opino que la función sea void, ya que no veo necesario regresar nada */
rendirse (int jugador) /*No veo necesario pasar parametros a la función */
{ 
   char o_acento = 162;
   int i = 0;  
   char cadena[5];
   printf("El jugador contrario gan%c ya que te rendiste.\n",o_acento); /*Opino que esto se englobe y sea para IA y PvP, para evitar problemas.*/
   printf("Gracias por jugar y suerte para la pr%cxima\n",o_acento);
   printf("¿Quieres volver a jugar?\n");
   printf("Presiona '1' para jugar otra vez o '2' para salir\n");
   fgets (cadena, sizeof (cadena), stdin);
   sscanf(cadena, "%d", &i);
   if (i == 1)
   {
    menu();
   }
   if (i == 2)
   {
   exit(-1); 
   }
}

