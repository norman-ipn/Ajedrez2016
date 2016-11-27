#include "validar_enroques.h"

/*
  la variable turno viene desde un contador del main, que indica el número de turno
  que se está jugando
*/

void evaluar_enroque(char tablero[8][8], int turno, int pos_torre_x, int pos_torre_y)
{
  int turno_jug = conocer_turno_jugador(turno);     
  if(turno == 0)
  {
    if((pos_torre_x == 0) && (pos_torre_y == 0)) 
      validar_enroque_largo_blanco(tablero);      
    if((pos_torre_x == 0) && (pos_torre_y == 7)) 
      validar_enroque_corto_blanco(tablero);
  }
    
  if(turno == 1)
  {
    if((pos_torre_x == 7) && (pos_torre_y == 0)) 
      validar_enroque_corto_negro(tablero);      
    if((pos_torre_x == 7) && (pos_torre_y == 7)) 
      validar_enroque_largo_negro(tablero);
  }
}
        
