#include "tablero.h"
#include "piezas.h"
#define __TABLERO_H___

// recorte el codigo de inicializar y solo lo coloque en tablero.h
void
inicializar(a[8][8])
{
 +  int x = 0;
 +  int y = 0;
 +  int i = 0;
 +
 +  while (y <= 8)
 +    {
 +      while (x <= 8)
 +	{
 +	  a[x][y] = '\0';
 +	  x = x + 1;
 +	}
        y = y + 1;
 +    }
 +
 +  a[0][0] = 't';
 +  a[0][1] = 'c';
 +  a[0][2] = 'a';
 +  a[0][3] = 'd';
 +  a[0][4] = 'r';
 +  a[0][5] = 'a';
 +  a[0][6] = 'c';
 +  a[0][7] = 't';
 +  a[7][0] = 'T';
 +  a[7][1] = 'C';
 +  a[7][2] = 'A';
 +  a[7][3] = 'D';
 +  a[7][4] = 'R';
 +  a[7][5] = 'A';
 +  a[7][6] = 'C';
 +  a[7][7] = 'T';
 +
 +  while (i <= 7)
 +    {
 +      a[1][i] = 'p';
 +      a[6][i] = 'P';
 +      i = i + 1;
 +    }
 +}

int
validar_enroque_largo_negro(int mov_torre, int mov_rey, char tablero[8][8])
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
  se_puede = casilla_atacada(tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
  {
    se_puede = casilla_atacada(tablero, posini_x, posini_y, pos2_x, pos2_y);
    /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
    if (se_puede != -1)
    {
      se_puede = revisar_casilla_vacia(tablero, pos1_y, pos1_x);
      /*verificar que la primera casilla del enroque este vacia */
      if (se_puede != -1)
      {
        se_puede = revisar_casilla_vacia(tablero, pos2_y, pos1_x);
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
      se_puede = casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
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
validar_enroque_corto_negro(int mov_torre, int mov_rey, char tablero[8][8])
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
  se_puede = casilla_atacada(tablero, posini_x, posini_y, pos1_x, pos1_y);
	 /* Función para verificar que con el enroque el rey no se ve amenazado */
	 if (se_puede != -1)
	 {
		  se_puede = casilla_atacada(tablero, posini_x, posini_y, pos2_x, pos2_y);
		  /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
		  if (se_puede != -1)
		  {
			   se_puede = revisar_casilla_vacia(tablero, pos1_y, pos1_x);
			   /*verificar que la primera casilla del enroque este vacia */
			   if (se_puede != -1)
			   {
				    se_puede = revisar_casilla_vacia(tablero, pos2_y, pos1_x);
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
validar_enroque_corto_blanco(int mov_torre, int mov_rey, char tablero[8][8])
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
	 se_puede = casilla_atacada(tablero, posini_x, posini_y, pos1_x, pos1_y);
	 /* Función para verificar que con el enroque el rey no se ve amenazado */
	 if (se_puede != -1)
 	{
		  se_puede = casilla_atacada(tablero, posini_x, posini_y, pos2_x, pos2_y);
		  /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
		  if (se_puede != -1)
		  {
			   se_puede = revisar_casilla_vacia(tablero, pos1_y, pos1_x);
			   /*verificar que la primera casilla del enroque este vacia */
			   if (se_puede != -1)
			   {
				    se_puede = revisar_casilla_vacia(tablero, pos2_y, pos1_x);
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
conocer_turno_jugador(int turno)
{
  int contador_turno = turno;
  if((turno % 2) == 0)
  {
    return 0;
  }
  if((turno % 2) == 1)
  {
    return 1;
  }
}

/*
  función que permite indicar el tipo de enroque que será ejecutado
*/

void 
evaluar_enroque(char tablero[8][8], int turno, int pos_torre_x, int pos_torre_y)
{
  int mov_valido = 0;
  int turno_jug = conocer_turno_jugador(turno);     
  if(turno == 0)
  {
	   if ((pos_torre_x == 0) && (pos_torre_y == 0))
	   {
	     mov_valido = validar_enroque_largo_blanco(tablero);
	     if (mov_valido == 0)
		      enrocar(0, 7, 4, 7, 3, 2, tablero);
	   }
	   if ((pos_torre_x == 0) && (pos_torre_y == 7))
	   {
	     mov_valido = validar_enroque_corto_blanco(mov_torre, mov_rey, tablero);
	     if (mov_valido == 0)
	       enrocar(7, 7, 4, 7, 5, 6, tablero);
	   }
  }
    
  if(turno == 1)
  {
	   if ((pos_torre_x == 7) && (pos_torre_y == 0))
	   {
	     mov_valido = validar_enroque_corto_negro(tablero);
	     if (mov_valido == 0)
	       enrocar(7, 0, 4, 0, 5, 6, tablero);
	   }
	   if ((pos_torre_x == 7) && (pos_torre_y == 7))
	   {
	     mov_valido = validar_enroque_largo_negro(tablero);
	     if (mov_valido == 0)
	       enrocar(0, 0, 4, 0, 3, 2, tablero);
	   }
  }
} 

/* 
  función que realiza el intercambio de lugares para el movimiento de las piezas
*/

void
enrocar(int pos_torre_x, int pos_torre_y, int pos_rey_x, , int pos_rey_y, int fin_torre, int fin_rey, char tablero[8][8])
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

void
main (void)
{
  char tablero[8][8];
  incializar (tablero);
}
