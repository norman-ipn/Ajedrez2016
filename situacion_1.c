int
situacion_1(char tablero[8][8], int coor_x, int coor_y)
{
 int copia_x = coor_x;
 int copia_y = coor_y;
 int num_jaque = 0;
 while(copia_x<9)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal*/
  copia_x = copia_x + 1;
 }
 while(copia_x>0)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal*/
  copia_x = copia_x - 1;
 }
 while(copia_y<9)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque vertical*/
  copia_y = copia_y + 1;
 }
 while(copia_y>0)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque vertical*/
  copia_y = copia_y - 1;
 }
}
