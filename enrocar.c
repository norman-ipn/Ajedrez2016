/*trabajo conjunto de Jorge Mendez y Carlos Ochoa*/

#include "validaciones.h"

void enrocar_corto(char tablero[8][8])
{
    /* la siguiente funcion va a retornar cero si el enroque no se puede hacer, y devolvera 1 en caso contrario*/
    if(validar_enroque(tablero) == 1)
    {
          tablero[0][1] = tablero[0][3];
          tablero[0][2] = tablero[0][0];
    }
    return;
}

/*
   funcion para verificar que el enroque se puede hacer
   donde mov_torre es el contador de veces que se ha movido torre
   lo mismo para rey
*/

int validar_enroque(int mov_torre, int mov_rey, char tablero[8][8])
{
    int se_puede = 1;
    if(mov_torre != 0)
    {
          se_puede = 0;
    }
    if(mov_rey != 0)
    {
          se_puede = 0;
    }
    /*funcion para verificar que con el enroque el rey no se ve amenazado*/
    if(casilla_atacada(tablero[0][4],tablero[0][5],tablero[0][6],tablero[0][7]) != 0)
    {
          se puede = 0;
    }
/*
   funcion para verificar si no hay piezas que interrumpan el movimiento entre la torre
 y el Rey.
*/
 if(revisar_casilla(tablero[0][5]), tablero[0][6] != -1)
    {
          se_puede = 0;
    }

    return se_puede;
}
