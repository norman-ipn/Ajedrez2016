int
obtener_posicion (int Columna, int Fila) /* esta funcion transforma la columna y la fila a un valor de 1 a 64, columa y fila tienen valor del 0 al 7(por ser de un arreglo de 8x8) */
{
  return (Fila * 8) + (Columna + 1);
}

char
color_reemplazo (int columna, int fila)	/* Esta funcion regresa un caracter del color sobre el cual la pieza se encontraba antes de desplazarse, B=Blanco, N=Negro */
{
  int n = (fila + columna) % 2;
  if (n == 0)
    {
      return 'B';
    }
  else
    {
      return 'N';
    }
}
