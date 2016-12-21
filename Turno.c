#include <stdio.h>
/*Cuando se este jugando, saber el turno de la piesa que le toca tirar*/

void jugada(int*,int*,int*,int*)/* Declarando función */

void jugada(int *imov_inicio, int *jmov_inicio, int *imov_final, int *jmov_final){
  int turno = 1; 
  char desde[5], hasta[5];
  
  if (turno == 1){  /* 1 significa que le toca las blancas tirar*/
      printf("Juega blanco");
      turno = 1 - turno;
      }
 if (turno == 0){  /* 0 significa que le toca las negras tirar*/
      printf("Juega negro");
      turno = 1 - turno;
     }
  scanf("%s", desde);
  scanf("%s", hasta);

    *imov_inicio = desde[0] - 'a';
    *jmov_inicio = desde[1] - '0';
    *imov_final = hasta[0] - 'a';
    *jmov_final = hasta[1] - '0';
}

int main() {
    int imov_inicio, movj_inicio; /* Coordenadas de la pieza que se va a mover. */
    int imov_final, jmov_final; /* Coordenadas de a donde se va a mover la pieza. */
  
    while(!final_partidad()){
        jugada(&imov_inicial, &jmov_inicial, &imov_final, &mov_final);
        
       } 
    return 0;
}

int final_partidad(){ /* Funcion de la partida terminada */
  
  return 0;
}
