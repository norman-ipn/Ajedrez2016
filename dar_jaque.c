int
dar_jaque (char tablero[8][8], int coor_x, int coor_y)
{
  situacion_1 (tablero[8][8], coor_x, coor_y); /*Verifica jaques horizontales*/
  situacion_2 (tablero[8][8], coor_x, coor_y); /*Verifica jaques verticales*/
  situacion_3 (tablero[8][8], coor_x, coor_y); /*Verifica jaques diagonales ascendentes*/
  situacion_4 (tablero[8][8], coor_x, coor_y); /*Verifica jaques diagonales descendentes*/
  situacion_5 (tablero[8][8], coor_x, coor_y); /*Verifica jaques del caballo*/
  
  /*Falta por agregar código*/

return 0;
}
