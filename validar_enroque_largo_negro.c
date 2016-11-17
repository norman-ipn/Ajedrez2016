
int
validar_enroque_largo_negro (int mov_torre_dama_negra, int mov_rey_negro, char tablero[8][8])
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
      (tablero[7][4], tablero[7][3], tablero[7][2]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[7][3]), tablero[7][2] != -1)
    {
      se_puede = 0;
    }

  return se_puede;
}
