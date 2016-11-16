/* Asumire que el tablero esta indexado de 0 a 7,
   ademas del parametro para representar el tablero,
   llevare dos enteros que representaran la coordenada a la cual
   se quiere llevar al rey */

/* Usare dos funciones "localizar_pieza" y "coordenada_valida" */

/* 1 significa que la coordenada es valida y -1 si no lo es */
/* Tambien asumire que el caracter 'R' significa Rey */
/* El ultimo parametro es el de la ficha del rey para saber si es el rey blanco o negro */ --> "R" o "r"

int
validar_rey (char tablero[8][8], int x, int y, char rey)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;
  int posicion_actual_x = 0;
  int posicion_actual_y = 0;
  int direccion[8][2] =
    { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };

  localizar_pieza (tablero, rey, &posicion_actual_x, &posicion_actual_y);
  
  while (i < 8)
    {
      siguiente_x = posicion_actual_x + direccion[i][0];
      siguiente_y = posicion_actual_y + direccion[i][1];
      if (coordenada_valida (siguiente_x, siguiente_y) == 1)
	      {
	        if (siguiente_x == x && siguiente_y == y)
		        {
		          return 1;
		        }
	      }
    }
  return -1;
}

