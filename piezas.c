#include "tablero.h"
#include "piezas.h"
#define __TABLERO_H___
/* Asumiendo que minusculas son las blancas */
/*  R es para rey */
/*  Q es para reina */
/*  A es para alfil */
/*  T es para torre */
/*  C es para caballo */
/*  P es para peon */

/*DEVUELVE -1 SI ES INVALIDO, 1 SI ES VALIDO */
/* Necesitamos una biblioteca con todas las funciones de validados */

/* Asumire que ya esta incluida, por favor incluir */
int
movimiento_valido (char tablero[8][8], int x1, int y1, int x2, int y2)
{
  char piezaActual = ' ';
  piezaActual = tablero[x1][y2];

  if (piezaActual == 'R' || piezaActual == 'r')
    {
      return validar_movimiento_rey (tablero, x1, y1, x2, y2);
    }

  if (piezaActual == 'Q' || piezaActual == 'q')
    {
      return validar_movimiento_reina (tablero, x1, y1, x2, y2);
    }

  if (piezaActual == 'A' || piezaActual == 'a')
    {
      return validar_movimiento_alfil (tablero, x1, y1, x2, y2);
    }

  if (piezaActual == 'T' || piezaActual == 't')
    {
      return validar_movimiento_torre (tablero, x1, y1, x2, y2);
    }

  if (piezaActual == 'C' || piezaActual == 'c')
    {
      return validar_movimiento_caballo (tablero, x1, y1, x2, y2);
    }

  return validar_movimiento_peon (tablero, tablero[x1][y1], x1, y1, x2, y2);
}

/*-----FUNCIONES AUXILIARES PAR VALIDAR EL MOVIMIENTO DE CADA PIEZA*/


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


/*Asumirr que los caracteres en mayuscula son las piezas negras
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

/* Regresa 1 si es valido, -1 si no lo es*/
int
validar_movimientos_continuos (char tablero[8][8], int direccion[4][2],
			       int x1, int y1, int x2, int y2)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;

  while (i < 4)
    {
      siguiente_x = x1 + direccion[i][0];
      siguiente_y = y1 + direccion[i][1];
      while (coordenada_valida (siguiente_x, siguiente_y) &&
	     (tablero[siguiente_x][siguiente_y] == ' '
	      || color_pieza (tablero[x1][y1]) !=
	      color_pieza (tablero[siguiente_x][siguiente_y])))
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
validar_movimiento_lineal(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[4][2] = {  {0,1}, {0,-1}, {1,0}, {-1,0} };
	return validar_movimientos_continuos(tablero, direccion, x1, y1, x2, y2);
}


/*La funcion va a ser invalida si no revisas si cuando se va a mover la funcion da lugar a un jaque*/
/*Devuelve 1 si es valido, -1 si no lo es*/
int
validar_movimiento_diagonal(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[4][2] = {  {1,1}, {1,-1}, {-1,1}, {-1,-1} };
	return validar_movimientos_continuos(tablero, direccion, x1, y1, x2, y2);
}


/* En el arreglo "direccion" deben ir todos los posibles movimientos de la pieza */
/* Esta funcion esta para la ficha de rey y caballo */

int
validar_movimientos_instantaneos (char tablero[8][8], int direccion[8][2],
				  int x1, int y1, int x2, int y2)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;

  while (i < 8)
    {
      siguiente_x = x1 + direccion[i][0];
      siguiente_y = y1 + direccion[i][1];
      if (coordenada_valida (siguiente_x, siguiente_y) &&
	  (tablero[siguiente_x][siguiente_y] == ' '
	   || color_pieza (tablero[x1][y1]) !=
	   color_pieza (tablero[siguiente_x][siguiente_y])))
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
validar_movimiento_torre(char tablero[8][8], int x1, int y1, int x2, int y2)
{
  return validar_movimiento_lineal(tablero, x1, y1, x2, y2);
}

int
validar_movimiento_alfil(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	return validar_movimiento_diagonal(tablero, x1, y1, x2, y2);
}

int
validar_movimiento_caballo(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[8][2] = { {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {-1, 2}, {-1, -2}, {1, -2} };
	return validar_movimientos_instantaneos(tablero, direccion, x1, y1, x2, y2);
}

int
validar_movimiento_reina (char tablero[8][8], int x1, int y1, int x2, int y2)
{
  if (x2 == x1 || y2 == y1)
    {
      return validar_movimiento_lineal (tablero, x1, y1, x2, y2);
    }
  else
    {
      return validar_movimiento_diagonal (tablero, x1, y1, x2, y2);
    }
}

int
validar_movimiento_rey(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[8][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
	return validar_movimientos_instanteos(tablero, direccion, x1, y1, x2, y2);
}

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


void
inicializar (char a[8][8])
{
  int x = 0;
  int y = 0;
  int i = 0;
  while (y <= 8)

    {
      while (x <= 8)

	{
	  a[x][y] = '\0';
	  x = x + 1;
	}
      y = y + 1;
    }
  a[0][0] = 't';
  a[0][1] = 'c';
  a[0][2] = 'a';
  a[0][3] = 'd';
  a[0][4] = 'r';
  a[0][5] = 'a';
  a[0][6] = 'c';
  a[0][7] = 't';
  a[7][0] = 'T';
  a[7][1] = 'C';
  a[7][2] = 'A';
  a[7][3] = 'D';
  a[7][4] = 'R';
  a[7][5] = 'A';
  a[7][6] = 'C';
  a[7][7] = 'T';
  while (i <= 7)

    {
      a[1][i] = 'p';
      a[6][i] = 'P';
      i = i + 1;
    }
}

int
validar_enroque_largo_negro (int mov_torre, int mov_rey, char tablero[8][8])
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
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
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
validar_enroque_largo_blanco (int mov_TD, int mov_R, char tablero[8][8])
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
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
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
validar_enroque_corto_negro (int mov_torre, int mov_rey, char tablero[8][8])
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
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	return -1:
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}

int
validar_enroque_corto_blanco (int mov_torre, int mov_rey, char tablero[8][8])
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
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	return -1:
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}

/*
  la variable turno se recibe desde el main
  cuenta los turnos jugados hasta el momento dentro del ciclo while principal
  esta función retorna 0 si es turno de blancas
  retorna 1 en turno de negras
  
  si soy sincero no se si esta función encaja bien aquí o en otro módulo, pero dado que se ocupa para varias funciones de
  movimiento la dejo aquí
*/

int
conocer_turno_jugador (int turno)
{
  int contador_turno = turno;
  if ((turno % 2) == 0)
    {
      return 0;
    }
  if ((turno % 2) == 1)
    {
      return 1;
    }
}

/*
  función que permite indicar el tipo de enroque que será ejecutado
*/

void
evaluar_enroque (char tablero[8][8], int turno, int pos_torre_x,
		 int pos_torre_y)
{
  int mov_valido = 0;
  int turno_jug = conocer_turno_jugador (turno);
  if (turno == 0)
    {
      if ((pos_torre_x == 0) && (pos_torre_y == 0))
	{
	  mov_valido = validar_enroque_largo_blanco (tablero);
	  if (mov_valido == 0)
	    enrocar (0, 7, 4, 7, 3, 2, tablero);
	}
      if ((pos_torre_x == 0) && (pos_torre_y == 7))
	{
	  mov_valido =
	    validar_enroque_corto_blanco (mov_torre, mov_rey, tablero);
	  if (mov_valido == 0)
	    enrocar (7, 7, 4, 7, 5, 6, tablero);
	}
    }
  if (turno == 1)
    {
      if ((pos_torre_x == 7) && (pos_torre_y == 0))
	{
	  mov_valido = validar_enroque_corto_negro (tablero);
	  if (mov_valido == 0)
	    enrocar (7, 0, 4, 0, 5, 6, tablero);
	}
      if ((pos_torre_x == 7) && (pos_torre_y == 7))
	{
	  mov_valido = validar_enroque_largo_negro (tablero);
	  if (mov_valido == 0)
	    enrocar (0, 0, 4, 0, 3, 2, tablero);
	}
    }
}

void
CoronacionPeon (char tablero[8][8], char pieza, int x, int y)
{
  if (tablero[x][y] == 'P')
    {
      switch (pieza)
	{
	case 'Q':
	  tablero[x][y] = 'Q';
	  break;
	case 'T':
	  tablero[x][y] = 'T';
	  break;
	case 'A':
	  tablero[x][y] = 'A';
	  break;
	case 'C':
	  tablero[x][y] = 'C';
	  break;
	default:
	  printf ("\n Pieza no válida\n");
	}
    }

  else if (tablero[x][y] == 'p')
    {
      switch (pieza)
	{
	case 'q':
	  tablero[x][y] = 'q';
	  break;
	case 't':
	  tablero[x][y] = 't';
	  break;
	case 'a':
	  tablero[x][y] = 'a';
	  break;
	case 'c':
	  tablero[x][y] = 'c';
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
enrocar (int pos_torre_x, int pos_torre_y, int pos_rey_x, int pos_rey_y,
	 int fin_torre, int fin_rey, char tablero[8][8])
{
  char aux_torre;
  char aux_rey;
  /*
     parte de la función que mueve a la torre de sitio
   */
  aux_torre = tablero[pos_torre_x][pos_torre_y];
  tablero[pos_torre_x][pos_torre_y] = tablero[fin_torre][pos_torre_y];
  tablero[fin_torre][pos_torre_y] = aux_torre;
  /*
     parte de la función que mueve al rey de sitio
   */
  aux_rey = tablero[pos_rey_x][pos_rey_y];
  tablero[pos_rey_x][pos_rey_y] = tablero[fin_rey][pos_rey_y];
  tablero[fin_rey][pos_rey_y] = aux_rey;
}
