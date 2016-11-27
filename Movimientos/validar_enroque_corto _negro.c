
/*
   Función para verificar que el enroque se puede hacer
   donde mov_torre es el contador de veces que se ha movido torre
   lo mismo para rey.
*/

int
validar_enroque_corto_negro (int mov_torre_rey_negra, int mov_rey_negro, char tablero[8][8])
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
      (tablero[7][4], tablero[7][5], tablero[7][6]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[7][5]), tablero[7][6] != -1)
    {
      se_puede = 0;
    }

  return se_puede;
}
