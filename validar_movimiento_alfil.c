/*Revisar si está bien, si falta algo o algo está incorrecto por favor corregirlo, o si no decirmelo para corregirlo*/

/* funcion para ordenar las coordenadas que recibimos de tal forma que puedan ser comparadas en la funcion validar movimiento sin que queden
numeros negativos*/

void
ordenar_casillas (int pos_ini_x, int pos_ini_y, int posicion_x,
		  int posicion_y)
{
  int tmp;
  if (pos_ini_x < posicion_x)
    {
 tmp = pos_ini_x;
 pos_ini_x = posicion_x;
 posicion_x = tmp;
    }
  if (pos_ini_y < posicion_y)
    {
      tmp = pos_ini_y;
      pos_ini_y = posicion_y;
      posicion_y = tmp;
    }
}
/*Funcion para revisar si las casillas son validas y no hay ninguna pieza del mismo color o contraria obstruyendo el paso, POR FAVOR REVISARLA,CORREGIR EN CASO DE ERROR*/ 
int revisar_casillas(char tablero[8][8],int pos_ini_x,int pos_ini_y, int posicion_x,int posicion_y)
{
int i=pos_ini_x;
int j=pos_ini_y;
if(pos_ini_x<posicion_x)
{
  if(pos_ini_y<posicion_y)
  {
   while(tablero[i][j]=='\0')
   {
   i=i+1;
   j=j+1;
   }
   if(tablero[i][j]!='\0')
   { 
   verificar_color(tablero[i][j])
   }
  return 0;
  }

int
validar_movimiento_alfil (int pos_ini_x, int pos_ini_y, int posicion_x,
			  int posicion_y, char tablero[8][8])
{
  ordenar_casillas (pos_ini_x, pos_ini_y, posicion_x, posicion_y);

  if (tablero[pos_ini_x][pos_ini_y] == 'A'
      || tablero[pos_ini_x][pos_ini_y] == 'a')
    {
      if (pos_ini_x - posicion_x == pos_ini_y - posicion_y)
	{
	  if (revisar_casillas (pos_ini_x, pos_ini_y, posicion_x, posicion_y)
	      == 0)
	    {
	      if (dar_jaque (tablero[8][8], coor_x, coor_y) == 0)
		{
		  return 0;
		}
	    }
	}
      return -1;
    }
}
  /*si la resta de las cordenadas en la misma direccion es igual, quiere decir que es un movimiento diagonal, y por lo tanto es 
     posible hacer el movimiento */
