#include "piezas.h"

/* Asumiendo que minusculas son las blancas */
/*  R es para rey */
/*  Q es para reina */
/*  A es para alfil */
/*  T es para torre */
/*  C es para caballo */
/*  P es para peon */

/*DEVUELVE -1 SI ES INVALIDO, 1 SI ES VALIDO */


/*-----FUNCIONES AUXILIARES PAR VALIDAR EL MOVIMIENTO DE CADA PIEZA*/
int
casilla_atacada (struct tablero *tab, int x, int y, int x1, int y1)
{
  return 0;
}


/* Recibe dos enteros, representando una coordenada,
   devolvera el numero 1 si la coordenada esta dentro del tablero,
   devolvera el numero -1 si la coordenada esta fuera del tablero. */
int
coordenada_valida (int x, int y)
{
  if (x < 0 || y < 0)
    {
      return -1;
    }

  if (x >= 8 || y >= 8)
    {
      return -1;
    }

  return 1;
}


/*
 Piezas negras en mayúsculas
 Piezas blancas en minúsculas
*/
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
  return '\0';
}

/* 
 Regresa 1 si es valido, -1 si no lo es
*/
int
validar_movimientos_continuos (struct tablero *un_tablero,
			       int direccion[4][2], int x1, int y1, int x2,
			       int y2)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;

  while (i < 4)
    {
      siguiente_x = x1 + direccion[i][0];
      siguiente_y = y1 + direccion[i][1];
      while (coordenada_valida (siguiente_x, siguiente_y) &&
	     (un_tablero->casillas[siguiente_x][siguiente_y] == ' '
	      || color_pieza (un_tablero->casillas[x1][y1]) !=
	      color_pieza (un_tablero->casillas[siguiente_x][siguiente_y])))
	{

	  if (siguiente_x == x2 && siguiente_y == y2)
	    {
	      return 1;
	    }

	  siguiente_x = siguiente_x + direccion[i][0];
	  siguiente_y = siguiente_y + direccion[i][1];
	}
      i = i + 1;
    }
  return -1;
}

int
validar_movimiento_lineal (struct tablero *un_tablero, int x1, int y1, int x2,
			   int y2)
{
  int direccion[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
  return validar_movimientos_continuos (un_tablero, direccion, x1, y1, x2,
					y2);
}


/*La funcion va a ser invalida si no revisas si cuando se va a mover la funcion da lugar a un jaque*/
/*Devuelve 1 si es valido, -1 si no lo es*/
int
validar_movimiento_diagonal (struct tablero *un_tablero, int x1, int y1,
			     int x2, int y2)
{
  int direccion[4][2] = { {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
  return validar_movimientos_continuos (un_tablero, direccion, x1, y1, x2,
					y2);
}


/* En el arreglo "direccion" deben ir todos los posibles movimientos de la pieza */
/* Esta funcion esta para la ficha de rey y caballo */

int
validar_movimientos_instantaneos (struct tablero *un_tablero,
				  int direccion[8][2], int x1, int y1, int x2,
				  int y2)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;

  while (i < 8)
    {
      siguiente_x = x1 + direccion[i][0];
      siguiente_y = y1 + direccion[i][1];
      if (coordenada_valida (siguiente_x, siguiente_y) &&
	  (un_tablero->casillas[siguiente_x][siguiente_y] == ' '
	   || color_pieza (un_tablero->casillas[x1][y1]) !=
	   color_pieza (un_tablero->casillas[siguiente_x][siguiente_y])))
	{

	  if (siguiente_x == x2 && siguiente_y == y2)
	    {
	      return 1;
	    }
	}
      i = i + 1;
    }
  return -1;
}


/*-------FUNCIONES PARA VALIDAR EL MOVIMIENTO DE CADA PIEZA-------*/
int
validar_movimiento_torre (struct tablero *un_tablero, int x1, int y1, int x2,
			  int y2)
{
  return validar_movimiento_lineal (un_tablero, x1, y1, x2, y2);
}

int
validar_movimiento_alfil (struct tablero *un_tablero, int x1, int y1, int x2,
			  int y2)
{
  return validar_movimiento_diagonal (un_tablero, x1, y1, x2, y2);
}

int
validar_movimiento_caballo (struct tablero *un_tablero, int x1, int y1,
			    int x2, int y2)
{
  int direccion[8][2] =
    { {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {-1, -2}, {1,
								      -2}
  };
  return validar_movimientos_instantaneos (un_tablero, direccion, x1, y1, x2,
					   y2);
}

int
validar_movimiento_reina (struct tablero *un_tablero, int x1, int y1, int x2,
			  int y2)
{
  if (x2 == x1 || y2 == y1)
    {
      return validar_movimiento_lineal (un_tablero, x1, y1, x2, y2);
    }
  else
    {
      return validar_movimiento_diagonal (un_tablero, x1, y1, x2, y2);
    }
}

int
validar_movimiento_rey (struct tablero *un_tablero, int x1, int y1, int x2,
			int y2)
{
  int direccion[8][2] =
    { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
  return validar_movimientos_instantaneos (un_tablero, direccion, x1, y1, x2,
					   y2);
}

/* 1 para valido, -1 para invalido */
int
validar_peon (struct tablero *un_tablero, char negro_blanco, int x1, int y1,
	      int x2, int y2)
{
  int un_paso = 0;
  int sentido = 0;
  int dos_pasos = 0;
  int paso_extra = 0;

  if (coordenada_valida (x2, y2) != 1 || y1 != y2)
    {
      return -1;
    }

  sentido = (negro_blanco == 'p') ? 1 : -1;

  /*Eje inicial en x de los peones */
  if ((negro_blanco == 'p' && x1 == 1) || (negro_blanco == 'P' && x1 == 6))
    {
      paso_extra = sentido;
    }

  un_paso = x1 + sentido;
  dos_pasos = x1 + sentido + paso_extra;

  if (un_paso == x2 && coordenada_valida (un_paso, y1) == 1
      && un_tablero->casillas[un_paso][y1] == ' ')
    {
      return 1;
    }

  if (dos_pasos == x2 && coordenada_valida (dos_pasos, y1) == 1
      && un_tablero->casillas[dos_pasos][y1] == ' ')
    {
      return 1;
    }

  return -1;
}

int
movimiento_valido (struct tablero *un_tablero, int x1, int y1, int x2, int y2)
{
  char piezaActual = ' ';
  piezaActual = un_tablero->casillas[x1][y2];

  if (piezaActual == 'R' || piezaActual == 'r')
    {
      return validar_movimiento_rey (un_tablero, x1, y1, x2, y2);
    }
  if (piezaActual == 'Q' || piezaActual == 'q')
    {
      return validar_movimiento_reina (un_tablero, x1, y1, x2, y2);
    }
  if (piezaActual == 'A' || piezaActual == 'a')
    {
      return validar_movimiento_alfil (un_tablero, x1, y1, x2, y2);
    }
  if (piezaActual == 'T' || piezaActual == 't')
    {
      return validar_movimiento_torre (un_tablero, x1, y1, x2, y2);
    }
  if (piezaActual == 'C' || piezaActual == 'c')
    {
      return validar_movimiento_caballo (un_tablero, x1, y1, x2, y2);
    }
  return validar_movimiento_peon (un_tablero, x1, y1, x2, y2);
}

int
revisar_casilla_vacia (struct tablero *un_tablero, int i, int j)
{
  /* Se verifica si la casilla introducida está vacía, si es así, se regresa el entero 1 */
  if (un_tablero->casillas[i][j] != ' ')
    {
      return -1;
    }
  return 1;
}


int
validar_enroque_largo_negro (struct tablero *un_tablero, int mov_torre,
			     int mov_rey)
{
  int se_puede = 1;
  int posini_x = 4;
  int posini_y = 0;
  int pos1_x = 3;
  int pos1_y = 0;
  int pos2_x = 2;
  int pos2_y = 0;
  if ((mov_torre != 0) || (mov_rey != 0))
    {
      se_puede = 0;
    }
  se_puede = casilla_atacada (un_tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (un_tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (un_tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (un_tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	  return -1;
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}


int
validar_enroque_largo_blanco (struct tablero *un_tablero, int mov_TD,
			      int mov_R)
{
  int se_puede = 0;
  int posini_x = 4;
  int posini_y = 7;
  int pos1_x = 3;
  int pos1_y = 7;
  int pos2_x = 2;
  int pos2_y = 7;

  if ((mov_TD != 0) || (mov_R != 0))
    {
      se_puede = -1;
    }
  se_puede = casilla_atacada (un_tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (un_tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (un_tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (un_tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	  return -1;
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}

int
validar_enroque_corto_negro (struct tablero *un_tablero, int mov_torre,
			     int mov_rey)
{
  int se_puede = 1;
  int posini_x = 4;
  int posini_y = 0;
  int pos1_x = 7;
  int pos1_y = 0;
  int pos2_x = 6;
  int pos2_y = 0;

  if ((mov_torre != 0) || (mov_rey != 0))
    {
      se_puede = 0;
    }
  se_puede = casilla_atacada (un_tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (un_tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (un_tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (un_tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	  return -1;
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}

int
validar_enroque_corto_blanco (struct tablero *un_tablero, int mov_torre,
			      int mov_rey)
{
  int se_puede = 1;
  int posini_x = 7;
  int posini_y = 7;
  int pos1_x = 6;
  int pos1_y = 7;
  int pos2_x = 5;
  int pos2_y = 7;
  if ((mov_torre != 0) || (mov_rey != 0))
    {
      se_puede = 0;
    }
  se_puede = casilla_atacada (un_tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (un_tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (un_tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (un_tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	  return -1;
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}


/*
  función que permite indicar el tipo de enroque que será ejecutado
*/

void
evaluar_enroque (struct tablero *un_tablero, int turno, int pos_torre_x,
		 int pos_torre_y)
{
  int mov_valido = 0;
  if (turno == 0)
    {
      if ((pos_torre_x == 0) && (pos_torre_y == 0))
	{
	  mov_valido = validar_enroque_largo_blanco (un_tablero, 1, 1);
	  if (mov_valido == 0)
	    {
	      enrocar (un_tablero, 0, 7, 4, 7, 3, 2);
	    }
	}
      if ((pos_torre_x == 0) && (pos_torre_y == 7))
	{
	  mov_valido = validar_enroque_corto_blanco (un_tablero, 1, 1);
	  if (mov_valido == 0)
	    enrocar (un_tablero, 7, 7, 4, 7, 5, 6);
	}
    }
  if (turno == 1)
    {
      if ((pos_torre_x == 7) && (pos_torre_y == 0))
	{
	  mov_valido = validar_enroque_corto_negro (un_tablero, 1, 1);
	  if (mov_valido == 0)
	    enrocar (un_tablero, 7, 0, 4, 0, 5, 6);
	}
      if ((pos_torre_x == 7) && (pos_torre_y == 7))
	{
	  mov_valido = validar_enroque_largo_negro (un_tablero, 1, 1);
	  if (mov_valido == 0)
	    enrocar (un_tablero, 0, 0, 4, 0, 3, 2);
	}
    }
}

void
CoronacionPeon (struct tablero *un_tablero, char pieza, int x, int y)
{
  if (un_tablero->casillas[x][y] == 'P')
    {
      switch (pieza)
	{
	case 'Q':
	  un_tablero->casillas[x][y] = 'Q';
	  break;
	case 'T':
	  un_tablero->casillas[x][y] = 'T';
	  break;
	case 'A':
	  un_tablero->casillas[x][y] = 'A';
	  break;
	case 'C':
	  un_tablero->casillas[x][y] = 'C';
	  break;
	default:
	  printf ("\n Pieza no válida\n");
	}
    }

  else if (un_tablero->casillas[x][y] == 'p')
    {
      switch (pieza)
	{
	case 'q':
	  un_tablero->casillas[x][y] = 'q';
	  break;
	case 't':
	  un_tablero->casillas[x][y] = 't';
	  break;
	case 'a':
	  un_tablero->casillas[x][y] = 'a';
	  break;
	case 'c':
	  un_tablero->casillas[x][y] = 'c';
	  break;
	default:
	  printf ("\n Pieza no válida\n");
	}
    }
}

/* 
  función que realiza el intercambio de lugares para el movimiento de las piezas
*/

void
enrocar (struct tablero *un_tablero, int pos_torre_x, int pos_torre_y,
	 int pos_rey_x, int pos_rey_y, int fin_torre, int fin_rey)
{
  char aux_torre = '\0';
  char aux_rey = '\0';
  /*
     parte de la función que mueve a la torre de sitio
   */
  aux_torre = un_tablero->casillas[pos_torre_x][pos_torre_y];
  un_tablero->casillas[pos_torre_x][pos_torre_y] =
    un_tablero->casillas[fin_torre][pos_torre_y];
  un_tablero->casillas[fin_torre][pos_torre_y] = aux_torre;
  /*
     parte de la función que mueve al rey de sitio
   */
  aux_rey = un_tablero->casillas[pos_rey_x][pos_rey_y];
  un_tablero->casillas[pos_rey_x][pos_rey_y] =
    un_tablero->casillas[fin_rey][pos_rey_y];
  un_tablero->casillas[fin_rey][pos_rey_y] = aux_rey;
}
