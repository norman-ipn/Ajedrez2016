  /*Las cordenadas iniciales y finales las vamos a recibir, esta funcion solo va a revisar si el movimiento que quieren hacer es válido ;) */


/* funcion para ordenar las coordenadas que recibimos de tal forma que puedan ser comparadas en la funcion validar movimiento sin que queden
numeros negativos*/
void ordenar_casillas(int pos_ini_x,int pos_ini_y,int posicion_x,int posicion_y)
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
/*Se necesita una funcion que revise cada casilla si se encuentra libre o la obstaculiza una pieza de el mismo color*/
int
validar_movimiento_alfil (int pos_ini_x,int pos_ini_y,int posicion_x,int posicion_y,char tablero[8][8])
{
  ordenar_casillas(pos_ini_x,pos_ini_y,posicion_x,posicion_y)
    
  if(tablero[pos_ini_x][pos_ini_y]=='A'||tablero[pos_ini_x][pos_ini_y]=='a')
  {
    if(pos_ini_x-posicion_x==pos_ini_y-posicion_y)
    {
      return 0;
    }
    /*si la resta de las cordenadas en la misma direccion es igual, quiere decir que es un movimiento diagonal, y por lo tanto es 
    posible hacer el movimiento*/
  return -1;
  }
}
  
