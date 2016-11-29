/*Podrias comentar que es lo que hace tu funcion*/

int
ver_coordenada (int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y)
{
  int resultado = 0;
  if ((x_i + 1 == x_f) && (y_i + 2 == x_f))
    {
      resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i + 2 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i + 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i - 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i - 2 == y_f))
 {
      resultado = 1;
    }
  else if ((x_i + 1 == x_f) && (y_i - 2 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i + 1 == y_f))
    {
      resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i - 1 == y_f))
    {
      resultado = 1;
    }
  else
    {
      resultado = -1;
    }
  return resultado;
}
