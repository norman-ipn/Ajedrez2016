* /Segunda version,
  tiene cada tipo de movimiento que puede hacer la reina por separado * /int
validar_movimiento_reina (char tablero[8][8], int x_inicial, int y_inicial,
			  int x_final, int y_final, char reina)
{


  localizar_pieza (tablero, reina, &posicion_x, &posicion_y);

if (coordenada_valida(x_final, y_final) == 1) 
{

  /*Validar solo movimientos horizontales */

  if (y_final = y_inicial)
    {
      mover_horizontalmente (tablero, y_inicial, x_inicial, y_final, x_final);
    }

  else
    {
      return 0;
    }


  /*Validar solo movimientos verticales */

  if (x_final = x_inicial)

    {
      for (int i = 0; i < 8; i = i + 1)
	{
	  if (y_final = y_inicial)
	    {
	      return 0;
	    }
	  else
	    {
	      if (y_final > 8)
		{
		  return -1;
		}

	    }
	}
      return 0;
}

}
}
