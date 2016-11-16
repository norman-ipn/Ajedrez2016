/* Asumire que el tablero esta indexado de 0 a 7,
   además del parametro para representar el tablero,
   llevare dos enteros que representaran la coordenada a la cual
   se quiere llevar a la torre */

/* Usare dos funciones "localizar_pieza" y "coordenada_valida" */

/* 1 significa que la coordenada es valida y -1 si no lo es */
/* Tambien asumire que el caracter 'T' significa Reina */
/* El ultimo parametro es el de la ficha de la torre para saber si es la torre blanca o negra --> 'T' o 't' */
/* Asumire que '.' es una casilla libre */
int
validar_torre (char tablero[8][8], int x, int y, char torre)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;
  int posicion_actual_x = 0;
  int posicion_actual_y = 0;
  int direccion[8][2] =
    { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

  localizar_pieza (tablero, torre, &posicion_actual_x, &posicion_actual_y);

  while (i < 8)
    {

      siguiente_x = posicion_actual_x;
      siguiente_y = posicion_actual_y;

      /* No temais, esto solo es "la siguiente posición" */
      while(coordenada (siguiente_x + direccion[i][0], siguiente_y + direccion[i][1]) == 1 &&
             tablero[siguiente_x + direccion[i][0]][siguiente_y + direccion[i][1]] == '.')
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
