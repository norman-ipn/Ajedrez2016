char 
ver_pieza (int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y,
           char tablero[8][8])
{ 
  /* Aqui se necesita saber el color las fichas  del que tira la 
     jugada y tambien el color de las fichas del enemigo.
     Supongamos que las fichas negras son en mayusculas y las 
     blancas son en minusculas. Para jugador, b = blancas, n = 
     negras, v = vacio. */
  char jugador = 'v';
  if (((int) tablero[pos_i_x][pos_i_y]) >= 65 
      && ((int) tablero[pos_i_x][pos_i_y]) <= 90)
    { 
      jugador = 'n';
    }
  else if (((int) tablero[pos_i_x][pos_i_y]) >= 97 
           && ((int) tablero[pos_i_x][pos_i_y]) <= 122)
    { 
      judador = 'b';
    }
  return jugador;
}

