
/*
   Función para verificar que el enroque se puede hacer
   donde mov_torre es el contador de veces que se ha movido torre
   lo mismo para rey.
*/

int
validar_enroque (int mov_torre, int mov_rey, char tablero[8][8])
{
  int se_puede = 1;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }

  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (casilla_atacada
      (tablero[0][4], tablero[0][3], tablero[0][2]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[0][3]), tablero[0][2] != -1)
    {
      se_puede = 0;
    }

  return se_puede;
}
