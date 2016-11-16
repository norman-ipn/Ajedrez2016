/* Asumire que el tablero esta indexado de 0 a 7,
   ademas del parametro para representar el tablero,
   llevare dos enteros que representaran la coordenada a la cual
   se quiere llevar a la reina */

/* Usare dos funciones "localizar_pieza" y "coordenada_valida" */

/* 1 significa que la coordenada es valida y -1 si no lo es */
/* Tambien asumire que el caracter 'Q' significa Reina */
/* El ultimo parametro es el de la ficha de la reina para saber si es la reina blanca o negra --> 'Q' o 'q' */

int
validar_reina (char tablero[8][8], int x, int y, char reina)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;
  int posicion_actual_x = 0;
  int posicion_actual_y = 0;
  int direccion[8][2] =
    { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };

  localizar_pieza (tablero, reina, &posicion_actual_x, &posicion_actual_y);

  while (i < 8)
    {

      siguiente_x = posicion_actual_x;
      siguiente_y = posicion_actual_y;

      while(coordenada (siguiente_x + direccion[i][0], 
                         siguiente_y + direccion[i][1]) == 1 )
        {
          siguiente_x += direccion[i][0];
          siguiente_y += direccion[i][1];

  	      if (siguiente_x == x && siguiente_y == y)
            {
  		        return 1;
  	        }
  	       
        }
    }
  return -1;
}

