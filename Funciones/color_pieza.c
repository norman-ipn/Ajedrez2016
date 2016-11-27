/*voy a asumir que los caracteres en mayuscula son las piezas negras
y los caracteres en minuscula son piezas blancas*/

char
color_pieza (char pieza)
{
  /* B=Blanca, N=Negra, 0=Caracter invalido */
  if ('a' <= pieza && pieza <= 'z')
    {
      return 'B';
    }
  else if ('A' <= pieza && pieza <= 'Z')
    {
      return 'N';
    }
  else
    {
      return '\0';
    }
}
