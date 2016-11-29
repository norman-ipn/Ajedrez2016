
/* Asumire que las las piezas blancas de encuentran en la parte superior */
/* De lo contrario el cambio no sera mucho */
/* Asumire que 'p' es para blancas y 'P' para negras */
/* Indexado desde 0 (el tablero) */
/* 1 para valido, -1 para invalido */

int
validar_peon(char tablero[8][8], char negro_blanco, int x1, int y1, int x2, int y2)
{
  if(coordenada_valida(x2, y2) != 1 || y1 != y2) return -1;

  int un_paso = 0;
  int sentido = 0;
  int dos_pasos = 0;
  int paso_extra = 0;

  sentido = (negro_blanco == 'p')? 1 : -1;

  //Eje inicial en x de los peones
  if( (negro_blanco == 'p' && x1 == 1) || (negro_blanco == 'P' && x1 == 6))
  {
  	paso_extra= sentido;
  }

  un_paso = x1 + sentido;
  dos_pasos = x1 + sentido + paso_extra;	

  if(un_paso == x2 && coordenada_valida(un_paso, y1) == 1 && tablero[un_paso][y1] == ' ')
  {
    return 1;
  }

  if(dos_pasos == x2 && coordenada_valida(dos_pasos, y1) == 1 && tablero[dos_pasos][y1] == ' ')
  {
    return 1;
  }

  return -1;
}
