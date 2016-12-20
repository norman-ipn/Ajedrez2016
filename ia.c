#include "ia.h"


/* ============================== FUNCIÓN PRINCIPAL ======================= */
int
responder_jugada (struct tablero *board, int turno, char *respuesta, int x,
		  int y)
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
revisar_casilla_peon (struct tablero *board, int x1, int y1)
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
escapar (struct tablero *board, int x1, int y1)
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
atacar (struct tablero *board, int x, int y)
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
podemosComer (struct tablero *board)
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
podemosSerComidos (struct tablero *board)
{
  int valor = 0;
  return valor;
}

int
MovimientoRandom (struct tablero *board, int x0, int y0, int x, int y, int x1,
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

/* ============================== Aparte ======================= */

//Definir funcion cambiar a su conveniencia
void cambiar(int n1,int n2,int n3, int n4,char c[4]){


}

//Definir funcion calcula valor a u conveniencia
int calcularvalor(int n1,int n2, int n3,int n4){
 int resultado=0;
 return resultado;
}

//Definir duncion comparar a su conveniencia
int comparar(int n1, int n2, int n3, int n4, int n5){
 return 0;
}

void
mover_peon (struct tablero *board, char jugada[4])
{
  int i = 0;
  int j = 0;
  int aux = 0;
  int cont = 0;
  srand (time (NULL));
  while (aux < 9)
    {
      aux = rand () % 8 + 1;
      i = 0;
      j = 0;
      cont = 0;
      while (i < 8)
	{
	  while (j < 8)
	    {
	      if (board->casillas[i][j] == 'p')
		{
		  cont = cont + 1;
		}
	      if (cont == aux)
		{
		  if (board->casillas[i + 1][j] == 'X' || '-')
		    {
		      //cambiar (i + 1, j, i, j, jugada);   Marca error al compilar definir funcion cambiar
		      //return;
		    }
		}
	      j = j + 1;
	    }
	  j = 0;
	  i = i + 1;
	}
      if (cont == 0)
	{
	  //return;
	}
    }
}

int
arriba (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  int valor2=0;
  int comparacion=0;
  while (v < 8)
    {
      if (board->casillas[x + v][y] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x + v][y] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
          //comparacion=comparar (x + v, y, x, y, valor); definir funcion comparar
	  if ( comparacion== 1)
	    {
	      cambiar (x + v, y, x, y, jugada);
              //valor2=calcularvalor (x + v, y, x, y); DEfinir funcion calcular valor
	      return valor2;
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
abajo (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x - v][y] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x - v][y] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x - v, y, x, y, valor) == 1)
	    {
	      cambiar (x - v, y, x, y, jugada);
	      return calcularvalor (x - v, y, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
izquierda (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x][y - v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x][y - v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x, y - v, x, y, valor) == 1)
	    {
	      cambiar (x, y - v, x, y, jugada);
	      return calcularvalor (x, y - v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
derecha (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x][y + v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x][y + v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x, y + v, x, y, valor) == 1)
	    {
	      cambiar (x, y + v, x, y, jugada);
	      return calcularvalor (x, y + v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
cruz (struct tablero *board, int x, int y, char jugada[4], int valor)
{

  valor = arriba (board, x, y, jugada, valor);
  valor = abajo (board, x, y, jugada, valor);
  valor = izquierda (board, x, y, jugada, valor);
  valor = derecha (board, x, y, jugada, valor);
  return valor;

}

int
diagonalard (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x + v][y + v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x + v][y + v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x + v, y + v, x, y, valor) == 1)
	    {
	      cambiar (x + v, y + v, x, y, jugada);
	      return calcularvalor (x + v, y + v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
diagonalabd (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x - v][y + v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x - v][y + v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x - v, y + v, x, y, valor) == 1)
	    {
	      cambiar (x - v, y + v, x, y, jugada);
	      return calcularvalor (x - v, y + v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
diagonalari (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x + v][y - v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x + v][y - v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x + v, y - v, x, y, valor) == 1)
	    {
	      cambiar (x + v, y - v, x, y, jugada);
	      return calcularvalor (x + v, y - v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
diagonalabi (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int v = 1;
  while (v < 8)
    {
      if (board->casillas[x - v][y - v] ==
	  ('p' || 'a' || 'q' || 'k' || 'c' || 't'))
	{
	  return valor;
	}
      if (board->casillas[x - v][y - v] == ('T' || 'Q' || 'A' || 'C' || 'P'))
	{
	  if (comparar (x - v, y - v, x, y, valor) == 1)
	    {
	      cambiar (x - v, y - v, x, y, jugada);
	      return calcularvalor (x - v, y - v, x, y);
	    }
	  return valor;
	}
      v = v + 1;
    }
  return valor;
}

int
diagonal (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  valor = diagonalard (board, x, y, jugada, valor);
  valor = diagonalari (board, x, y, jugada, valor);
  valor = diagonalabd (board, x, y, jugada, valor);
  valor = diagonalabi (board, x, y, jugada, valor);

  return 0;//favor de agregar el valor de retorno necesario
}

int
cab1 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x + 2][y + 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x + 2, y + 1, x, y, valor) == 1)
	{
	  cambiar (x + 2, y + 1, x, y, jugada);
	  return calcularvalor (x + 2, y + 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab2 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x + 1][y + 2] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x + 1, y + 2, x, y, valor) == 1)
	{
	  cambiar (x + 1, y + 2, x, y, jugada);
	  return calcularvalor (x + 1, y + 2, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab3 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x + 1][y - 2] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x + 1, y - 2, x, y, valor) == 1)
	{
	  cambiar (x + 1, y - 2, x, y, jugada);
	  return calcularvalor (x + 1, y - 2, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab4 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x + 2][y - 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x + 2, y - 1, x, y, valor) == 1)
	{
	  cambiar (x + 2, y - 1, x, y, jugada);
	  return calcularvalor (x + 2, y - 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab5 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x - 2][y - 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x - 2, y - 1, x, y, valor) == 1)
	{
	  cambiar (x - 2, y - 1, x, y, jugada);
	  return calcularvalor (x - 2, y - 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab6 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x - 1][y - 2] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x - 1, y - 2, x, y, valor) == 1)
	{
	  cambiar (x - 1, y - 2, x, y, jugada);
	  return calcularvalor (x - 1, y - 2, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab7 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x - 1][y + 2] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x - 1, y + 2, x, y, valor) == 1)
	{
	  cambiar (x - 1, y + 2, x, y, jugada);
	  return calcularvalor (x - 1, y + 2, x, y);
	}
      return valor;
    }
  return valor;
}

int
cab8 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x - 2][y + 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x - 2, y + 1, x, y, valor) == 1)
	{
	  cambiar (x - 2, y + 1, x, y, jugada);
	  return calcularvalor (x - 2, y + 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
caballo (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  valor = cab1 (board, x, y, jugada, valor);
  valor = cab2 (board, x, y, jugada, valor);
  valor = cab3 (board, x, y, jugada, valor);
  valor = cab4 (board, x, y, jugada, valor);
  valor = cab5 (board, x, y, jugada, valor);
  valor = cab6 (board, x, y, jugada, valor);
  valor = cab7 (board, x, y, jugada, valor);
  valor = cab8 (board, x, y, jugada, valor);
  return valor;
}

int
pe1 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x][y + 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x, y + 1, x, y, valor) == 1)
	{
	  cambiar (x, y + 1, x, y, jugada);
	  return calcularvalor (x, y + 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
pe2 (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  if (board->casillas[x][y - 1] == ('T' || 'Q' || 'A' || 'C' || 'P'))
    {
      if (comparar (x, y - 1, x, y, valor) == 1)
	{
	  cambiar (x, y - 1, x, y, jugada);
	  return calcularvalor (x, y - 1, x, y);
	}
      return valor;
    }
  return valor;
}

int
peon (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  valor = pe1 (board, x, y, jugada, valor);
  valor = pe2 (board, x, y, jugada, valor);
  return valor;
}

int
lados (struct tablero *board, int x, int y, char jugada[4], int valor)
{
  int i = -1;
  int k = -1;
  while (i < 2)
    {
      k = -1;
      while (k < 2)
	{
	  if (board->casillas[x + i][y + k] ==
	      ('T' || 'Q' || 'A' || 'C' || 'P'))
	    {
	      if (comparar (x + i, y + k, x, y, valor) == 1)
		{
		  cambiar (x + i, y + k, x, y, jugada);
		  valor = calcularvalor (x + i, y + k, x, y);
		}
	    }
	  k = k + 1;
	}
      i = i + 1;
    }
  return valor;
}

int
verificar (struct tablero *board, int x, int y, int valor, char jugada[4])
{
  switch (board->casillas[x][y])
    {
    case 'd':
      valor = cruz (board, x, y, jugada, valor);
      valor = diagonal (board, x, y, jugada, valor);
      return valor;
      break;
    case 't':
      valor = cruz (board, x, y, jugada, valor);
      return valor;
      break;
    case 'c':
      valor = caballo (board, x, y, jugada, valor);
      return valor;
      break;
    case 'p':
      valor = peon (board, x, y, jugada, valor);
      return valor;
      break;
    case 'k':
      valor = lados (board, x, y, jugada, valor);
      return valor;
      break;
    case 'a':
      valor = diagonal (board, x, y, jugada, valor);
      return valor;
      break;
    }
    return -1; //necesita un return por default agrego -1...
}

int
analizar (struct tablero *board, char jugada[4])
{
  int x = 0;
  int y = 0;
  int valor = -9;
  while (x < 8)
    {
      y = 0;
      while (y < 8)
	{
	  valor = verificar (board, x, y, valor, jugada);
	  y = y + 1;
	}
      x = x + 1;
    }
  return valor;
}

void
ia (struct tablero *board, char jugada[4])
{
  int valor = 0;
  valor = analizar (board, jugada);
  if (valor == -9)
    {
      mover_peon (board, jugada);
      return;
    }
  return;
}
