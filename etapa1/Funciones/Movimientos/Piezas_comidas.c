
/*Esta función maneja una estructura de datos necesaria en el cuerpo
de la función principal, también emplea una segunda función para su funcionamiento interno*/
struct capturadas
{
  char negras[16];
  char blancas[16];
  int posn;
  int posb;
  int pieza;
  int color;
}


void
anadir (char arreglo[16], int b, int pos)
{
  switch (b)
    {
    case 1:
      arreglo[pos] = 'p';
      break;
    case 2:
      arreglo[pos] = 't';
      break;
    case 3:
      arreglo[pos] = 'a';
      break;
    case 4:
      arreglo[pos] = 'r';
      break;
    case 5:
      arreglo[pos] = 'c';
      break;
    }
  return;
}

void
pcomida (struct capturadas comida)
{
  if (comida.color == 0)
    {
    anadir (comida.blancas, comida.pieza, comida.posb)}
  if (comida.color == 1)
    {
    anadir (comida.blancas, comida.pieza, comida.posb)}
}
