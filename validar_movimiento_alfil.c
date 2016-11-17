/* funcion para ordenar las coordenadas que recibimos de tal forma que puedan ser comparadas en la funcion validar movimiento sin que queden
numeros negativos*/
void ordenar casillas(int pos_ini_x,int pos_ini_y,int posicion_x,int posicion_y)
{
  int tmp;
  if(pos_ini_x<posicion_x)
  {
    tmp=pos_ini_x;
    pos_ini_x=posicion_x;
    posicion_x=tmp;
  }
  if(pos_ini_y<posicion_y)
  {
    tmp=pos_ini_y;
    pos_ini_y=posicion_y;
    posicion_y=tmp;
  }
}

int
validar_movimiento_alfil (int pos_ini_x,int pos_ini_y,int posicion_x,int posicion_y,char tablero[8][8])
{
  
  if(tablero[pos_ini_x][pos_ini_y]=='A'||tablero[pos_ini_x][pos_ini_y]=='a')
 
  return 0;

}
    /*Las cordenadas iniciales y finales las vamos a recibir, esta funcion solo va a revisar si el movimiento que quieren hacer es válido ;) */
