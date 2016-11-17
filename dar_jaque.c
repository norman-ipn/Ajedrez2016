int
dar_jaque(char tablero[8][8], int coor_x, int coor_y)
{
 situacion_1(tablero[8][8], coor_x, coor_y); /*Verifica jaques verticales y horizontales*/
 situacion_2(tablero[8][8], coor_x, coor_y); /*Verifica jaques diagonales*/
 situacion_3(tablero[8][8], coor_x, coor_y); /*Verifica jaques del caballo*/
 

return 0;
}
