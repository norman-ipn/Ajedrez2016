
int
validar_enroque_largo_negro (int mov_torre_dama_negra, int mov_rey_negro, char tablero[8][8])
{
  int se_puede = 1;
  int se_puede = 1;
  int posini_x = 4;
  int posini_y = 0;
  int pos1_x = 3;
  int pos1_y = 0;
  int pos2_x = 2;
  int pos2_y = 0;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {

      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	return -1:
	}

    }
  else
    {
      return -1;

    }

return se_puede;
}


