/*Cronómetro que muestra al usuario el tiempo que lleva la partida después de que el usuario ingrese el movimiento deseado y posterior a ello la partida continuara normalmente. Se colocara cronómetro con función de inicio de partida y se hará printf en tablero.c después de que se ingrese la coordenada del movimiento por parte del usuario*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

struct variables {
/* Inicialización de las variables, contará con minutos, segundos y horas. */
  int hrs = 0;
  int min = 0;
  int seg = 0;
  time_t inicial = 0;
  int tiempo = 0;
}

int
tiempo (void) /*Recuerda que solo existe un solo main*/
{
  struct variables V;
  
/* Diferencia del tiempo de inicio de partida con el tiempo transcurrido desde 1970 como marca time */
  V.inicial = time(0);

  while(1)
  {
    V.tiempo = time(0) - V.inicial;
     		  
    printf(" %d min, %d seg\n", V.tiempo/60, V.tiempo%60 );		  
  }
/* Aquí se ingresara la función de partidas, para que se contabilice el tiempo de la partida*/

  return 0;
}
