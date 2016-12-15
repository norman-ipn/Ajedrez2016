#include "ia.h"

typedef struct tablero Tablero;
int revisar_casilla_peon (Tablero * board, int x1, int y1);
int escapar (Tablero * board, int x1, int y1);
int atacar (Tablero * board, int x, int y);
int podemosComer (Tablero * board);
int podemosSerComidos (Tablero * board);
int MovimientoRandom (Tablero * board, int x0, int y0, int x, int y, int x1,
		      int y1, int x2, int y2);
int validar_movimiento_torre (Tablero * board, int x0, int y0, int x, int y);
int validar_peon (Tablero * board, int x1, int y1, int x2, int y2);
int validar_movimiento_caballo (Tablero * board, int x1, int y1, int x2,
				int y2);
int movimiento;
/* ============================== FUNCIÓN PRINCIPAL ======================= */
int
responder_jugada (Tablero * board, int turno, char *respuesta, int x, int y)
{

  int movimientoIndicado;
  /* Revisa si podemos comer y cuanto ganaríamos */
  int comer = podemosComer (board);

  /* Revisa si nos pueden comer y cuanto perderíamos */
  int comidos = podemosSerComidos (board);

  /* Es aquí donde toma la decisión de que hacer */
  /* Si no podemos ni comer nada ni estamos por ser comidos pues mueve algo random */
  if (comer == 0 && comidos == 0)
    {
      movimientoIndicado = MovimientoRandom (board, 0, 0, 0, 0, 0, 0, 0, 0);
    }

  /* Si  podemos comer o ser comido decide que es lo mejor y hazlo */
  if (comer <= comidos)
    {
      movimientoIndicado = escapar (board, x, y);
    }
  else
    {
      movimientoIndicado = atacar (board, x, y);
    }

  return movimientoIndicado;
}

  /* =========== FUNCIONES EN LAS QUE EVALUAMOS LA SITUACIÓN ============================ */

  /* ============================== Podemos comer ======================= 
     - ¿Qué hace?
     - Se va a encargar de revisar el tablero y ver si podemos comer una pieza, de ser no ser asi regresa 0
     y si es posible regresa el valor asignado (8 por ejemplo si podemos comernos un caballo)

     También va a modificar las coordenadas para que apunten a la pieza podemos comer y las coordenas de la pieza que
     tenemos que mover para lograrlo
   */

  /* =========== FUNCIONES EN LAS QUE ACTUAMOS ============================================== */

int
revisar_casilla_peon (Tablero * board, int x1, int y1)
{
  char pieza = 't';

  if (pieza != ' ')
    {
      return -1;
    }
  if (pieza != ' ')
    {
      return -1;
    }
  return 0;
}

/*Funcion para revisar la casilla cuando escogemos un peón, revisa si sus dos esquinas superiores están amenazadas, si regresa -1
quiere decir que hay una pieza en una de las esquinas.*/

  /* ============================== Escapar =======================
     - ¿Qué hace?
     - Se va a encargar de encontrar una pieza y buscar un movimiento valido y hacerlo
   */
int
escapar (Tablero * board, int x1, int y1)
{
  char pieza = 't';
  //pieza = board[x1][y1];

  if (pieza == 'P')
    {
      if (revisar_casilla_peon (board, x1, y1) == -1)
	{
	  //tablero[x1][y1] = tablero[x1][y1 + 1];
	}
    }

  return movimiento;
}


  /* ============================== Atacar =======================
     - ¿Qué hace?
     - Se va a encargar de tomando las coordenadas de la pieza que podemos comer, realizar la acción de comerla
     x1=Posición x Inicial   y1=Posición y inicial
   */
int
atacar (Tablero * board, int x, int y)
{

  char pieza = 't';

  if (pieza == 'P')
    {
      if (revisar_casilla_peon (board, x, y) == -1)
	{
	  //pieza = board[x + 1][y + 1];
	  if (pieza != ' ')
	    {
	      //board[x + 1][y + 1] = board[x][y];
	      //board[x][y] = ' ';
	    }
	  else
	    {
	      //board[x - 1][y + 1] = board[x][y];
	      //board[x][y] = ' ';
	    }
	}
    }
  return movimiento;
}


  /* ============================== Movimiento Aleatorio =======================
     - ¿Qué hace?
     - Se va a encargar de generar un movimiento de pieza aleatorio si no vamos a comer o ser comidos
   */

  /* ============================== Funciones AUXILIARES =======================
     ============================== Busca movimiento Valido =======================
     - ¿Qué hace?
     - Se encarga de ver que movimientos posibles tiene nuestras piezas
   */
int
podemosComer (Tablero * tablero)
{
  int valor = 0;
  return valor;
}


 /*  ============================== Podemos ser Comidos ======================= 
    - ¿Qué hace?
    - Se va a encargar de revisar el tablero y ver si estamos a punto de ser comidos, de ser no ser a si regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si nos van a comer a un caballo)

    También va a modificar las coordenadas para que apunten a la pieza que esta por ser comida y va a 
    poner las coordenadas de nuestro atacante */

int
podemosSerComidos (Tablero * un_tablero)
{
  int valor = 0;
  return valor;
}

int
MovimientoRandom (Tablero * board, int x0, int y0, int x, int y, int x1,
		  int y1, int x2, int y2)
{

  /* Genera una semilla Random */
  srand (time (NULL));

  char pieza = '\0';		//a esta variable se le asignará un valor por cada coordenada tal como aparece un poco más abajo
  int N = 0;
  int i = 0;
  int j = 0;

  for (i = 0; i < 8; i++)
    {
      for (j = 0; j < 8; i++)
	{
	  //pieza = board[i][j];

	  if (pieza == 'T')
	    {
	      /*A las coordenadas se les va a asignar la semilla rand para que mueva en un número no mayor a 8 y verificar la casilla */
	      x2 = rand () % 8;
	      y2 = rand () % (N + 1);
	      validar_movimiento_torre (board, x0, y0, x, y);
	    }
	  if (pieza == 'A')
	    {
	      x2 = rand () % 8;
	      y2 = rand () % (N + 1);
	      validar_movimiento_alfil (board, x0, y0, x, y);
	    }
	  if (pieza == 'P')
	    {
	      x2 = rand () % 8;
	      y2 = rand () % (N + 1);
	      validar_movimiento_peon (board, x1, y1, x2, y2);
	    }
	  if (pieza == 'C')
	    {
	      x2 = rand () % 8;
	      y2 = rand () % (N + 1);
	      validar_movimiento_caballo (board, x1, y1, x2, y2);
	    }
	  if (pieza == 'D')
	    {
	      x2 = rand () % 8;
	      y2 = rand () % (N + 1);
	      validar_movimiento_reina (board, x1, y1, x2, y2);
	    }
	}
    }
  return movimiento;
}
