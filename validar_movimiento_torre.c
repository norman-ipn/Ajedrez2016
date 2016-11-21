/*Se esta esperando actualización*/
/*Usar validar_horizontal */
int
validar_movimiento_torre (char tablero[8][8], int coordenadas_iniciales[2],
			  int coodenadas_finales[2])
{
  int i = -1;
  if ((tablero[coordenadas_iniciales[0]][coodenadas_iniciales[1]] == "T")
      || (tablero[coordenadas_iniciales[0]][coodenadas_iniciales[1]] == "t"))
    {
      i =
	mover_horizontal (tablero, coodenadas_iniciales, coodenadas_finales);
    }
}

return i;
}
