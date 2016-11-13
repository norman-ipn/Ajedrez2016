/* ¡Hola compañeros!, Este es un codigo en el que he estado trabajando, quisiera por favor que comentaran este codigo con sugerencias o cambios que le harian, ademas, si les parece que sigamos el estilo que utilice en este para el proyecto */

/*NOTA: LAS VARIABLES EN LA FUNCION PARTIDA "columna_inicial" y "columna_final" estan inicializadas solo para poder ejecutar el programa, una vez el codigo tenga los inputs, estas tendran el valor caracter 0*/

#include <stdio.h>
int
obtener_posicion (int Columna, int Fila) /* esta funcion transforma la columna y la fila a un valor de 1 a 64*/
{
  int i = 0;
  int cuadrante = 0;
  Fila = Fila + 1;

  while (Columna != 0 + i)
    {
      i = i + 1;
    }
  cuadrante = (8 * (Fila - 1)) + (i + 1);
  return cuadrante;
}

int
obtener_columna (char Columna) /*Esta funcion transforma la columna a un digito del 0 al 7 */
{
  int i = 0;
  while (Columna != 'A' + i)
    {
      i = i + 1;

    }
  return i;
}


/*
Esta funcion averigua si el movimiento de un peon es válido 
  1 . no es válido
  0 . si es válido  
*/

int
peon (char pieza, char tablero[8][8], int columnai, int filai, int columnaf,
      int filaf)
{
  int i = 0;
  char vacio = '0';
  int control = 0;
  if (pieza == 'P')
    {
      if (filai == 1)
	{
	  if (filaf == filai + 2)
	    {
	      vacio = tablero[filai + 1][columnai];

	      if (vacio != 'X')
		{
		  control = control + 1;
		}
	      if (vacio != ' ')
		{
		  control = control + 1;
		}
	      if (control == 2)
		{
		  return 1;
		}

	      while (filai + i < filaf)
		{
		  i = i + 1;
		  if (tablero[filai + i][columnai] != vacio)
		    {
		      return 1;
		    }
		  switch (vacio)
		    {
		    case 'X':
		      vacio = ' ';
		      break;

		    case ' ':
		      vacio = 'X';
		      break;
		    }

		}
	      return 0;
	    }
	}
      if (filaf == filai + 1)
	{
	  vacio = tablero[filai + 1][columnai];
	  while (filai + i < filaf)
	    {
	      i = i + 1;
	      if (tablero[filai + i][columnai] != vacio)
		{
		  return 1;
		}
	      switch (vacio)
		{
		case 'X':
		  vacio = ' ';
		  break;

		case ' ':
		  vacio = 'X';
		  break;

		}
	    }
	  return 0;
	}
      if (tablero[filaf][columnaf] >= 97)
	{
	  if (tablero[filaf][columnaf] <= 122)
	    {
	      return 0;
	    }
	}

    }
  if (pieza == 'p')
    {
      if (filai == 6)
	{
	  if (filaf == filai - 2)
	    {
	      vacio =tablero[filai - 1][columnai];
	      while (filai - i > filaf)
		{
		  i = i + 1;
		  if (tablero[filai - i][columnai] != vacio)
		    {
		      return 1;
		    }
		  switch (vacio)
		    {
		    case 'X':
		      vacio = ' ';
		      break;

		    case ' ':
		      vacio = 'X';
		      break;
		    }

		}
	      return 0;
	    }
	}
      if (filaf == filai - 1)
	{
	  vacio = tablero[filai - 1][columnai];
	  while (filai - i > filaf)
	    {
	      i = i + 1;
	      if (tablero[filai - i][columnai] != vacio)
		{
		  return 1;
		}
	      switch (vacio)
		{
		case 'X':
		  vacio = ' ';
		  break;

		case ' ':
		  vacio = 'X';
		  break;
		}

	    }
	  return 0;
	}
      if (tablero[filaf][columnaf] >= 65)
	{
	  if (tablero[filaf][columnaf] <= 84)
	    {
	      return 0;

	    }
	}



    }
  return 1;
}
/*Esta funcion verificara si el movimiento de una pieza hasta un punto esta despejado de forma vertical*/
int
mover_verticalmente (char tablero[8][8], int columnai, int filai,
		     int columnaf, int filaf)
{
  int i = 0;
  char vacio = '0';
  if (filai > filaf)
    {

      vacio = tablero[filai - 1][columnai];
      i = i + 1;
      while (filai - i != filaf)
	{

	  if (tablero[filai - i][columnai] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  if (filai < filaf)
    {

      vacio = tablero[filai + 1][columnai];
      i = i + 1;
      while (filai + i != filaf )
	{

	  if (tablero[filai + i][columnai] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  return 1;
}
 /*Esta funcion verificara si el movimiento de una pieza hasta un punto esta despejado de forma Horizontal*/

int
mover_horizontalmente (char tablero[8][8], int columnai, int filai,
		       int columnaf, int filaf)
{
  int i = 0;
  char vacio = '0';
  if (columnai > columnaf)
    {

      vacio = tablero[filai][columnai - 1];
      i = i + 1;
      while (columnai - i != columnaf)
	{

	  if (tablero[filai][columnai - i] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  if (columnai < columnaf)
    {

      vacio = tablero[filai][columnai + 1];
      i = i + 1;
      while (columnai + i != columnaf)
	{

	  if (tablero[filai][columnai + i] != vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  return 1;
}
 /*Esta funcion analiza la petición de movimiento de la torre */
int
torre (char pieza, char tablero[8][8], int columnai, int filai, int columnaf,
       int filaf)
{
  int control = 0;
  if (pieza == 'T')
    {
	if ((tablero[filaf][columnaf] != 'T')
	    && (tablero[filaf][columnaf] != 'C'))
	  {

	    if ((tablero[filaf][columnaf] != 'Q')
		&& (tablero[filaf][columnaf] != 'A'))
	      {
		if ((tablero[filaf][columnaf] != 'P')
		    && (tablero[filaf][columnaf] != 'K'))
		  {
		    if (filai != filaf)
		      {
			control =
			  mover_verticalmente (tablero, columnai, filai,
					       columnaf, filaf);
			return control;
		      }
		    if (columnai != columnaf)
		      {
			control =
			  mover_horizontalmente (tablero, columnai, filai,
						 columnaf, filaf);
			return control;
		      }
		  }
	      }
	  }
      }
      if (pieza == 't'){
	if ((tablero[filaf][columnaf] != 't')
	    && (tablero[filaf][columnaf] != 'c'))
	  {

	    if ((tablero[filaf][columnaf] != 'q')
		&& (tablero[filaf][columnaf] != 'a'))
	      {
		if ((tablero[filaf][columnaf] != 'p')
		    && (tablero[filaf][columnaf] != 'k'))
		  {
		    if (filai != filaf)
		      {
			control =
			  mover_verticalmente (tablero, columnai, filai,
					       columnaf, filaf);
			return control;
		      }
		    if (columnai != columnaf)
		      {
			control =
			  mover_horizontalmente (tablero, columnai, filai,
						 columnaf, filaf);
			return control;
		      }
		  }
	      }
	  }
     }
  return 1;
}
int alfil  (char pieza, char tablero[8][8], int columnai, int filai, int columnaf,int filaf){
	return 0;
}
	
/*Esta función llama a otra, de aucerdo a la pieza seleccionada*/
int
analisis_movimiento (char pieza, char tablero[8][8], int columnai,
		     int filai, int columnaf, int filaf)
{
  int jugada = 0;

  if (pieza == 'p')
    {
      jugada = peon (pieza, tablero, columnai, filai, columnaf, filaf);
      return jugada;
    }
  if (pieza == 'P')
    {
      jugada = peon (pieza, tablero, columnai, filai, columnaf, filaf);
      return jugada;
    }
  if (pieza == 'T')
    {
      jugada = torre (pieza, tablero, columnai, filai, columnaf, filaf);
      return jugada;
    }
  if (pieza == 't')
    {
      jugada = torre (pieza, tablero, columnai, filai, columnaf, filaf);
      return jugada;
    }
  if(pieza=='A'){
	         jugada= alfil(pieza, tablero, columnai, filai, columnaf, filaf);
                 }	         
if(pieza=='a'){
	       jugada= alfil (pieza, tablero, columnai, filai, columnaf, filaf);
               }
			     
			       
  return 1;
}

char
color_remplazo (int columna, int fila) /* Esta funcion regresa un caracter del color sobre el cual la pieza se encontraba antes de desplazarce*/
{
  int cuadrante = 0;
  int alterno = 0;
  int j = 1;
  char impar = 'X';
  char par = ' ';
  cuadrante = obtener_posicion (columna, fila);
  while (j <= 63)
    {
      if (alterno == 4)
	{
	  alterno = 0;
	  switch (impar)
	    {
	    case 'X':
	      impar = ' ';

	      break;
	    case ' ':
	      impar = 'X';
	      break;
	    }
	}
      alterno = alterno + 1;
      if (cuadrante == j)
	{
	  return impar;
	}
      j = j + 2;

    }
  j = 2;
  while (j <= 64)
    {
      if (alterno == 4)
	{
	  alterno = 0;
	  switch (par)
	    {
	    case 'X':
	      par = ' ';

	      break;
	    case ' ':
	      par = 'X';
	      break;
	    }
	}
      alterno = alterno + 1;
      if (cuadrante == j)
	{
	  return par;
	}
      j = j + 2;

    }
  return 'F';
}

void
Imprimir_tablero (char tablero[8][8]) /* Esta función imprime el tablero, hace falta agregar que lo imprima del proximo jugador */
{
  printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[7][0], tablero[7][1],
	  tablero[7][2], tablero[7][3], tablero[7][4], tablero[7][5],
	  tablero[7][6], tablero[7][7]);
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[6][0], tablero[6][1],
	  tablero[6][2], tablero[6][3], tablero[6][4], tablero[6][5],
	  tablero[6][6], tablero[6][7]);
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[5][0], tablero[5][1],
	  tablero[5][2], tablero[5][3], tablero[5][4], tablero[5][5],
	  tablero[5][6], tablero[5][7]);
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[4][0], tablero[4][1],
	  tablero[4][2], tablero[4][3], tablero[4][4], tablero[4][5],
	  tablero[4][6], tablero[4][7]);
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[3][0], tablero[3][1],
	  tablero[3][2], tablero[3][3], tablero[3][4], tablero[3][5],
	  tablero[3][6], tablero[3][7]);
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[2][0], tablero[2][1],
	  tablero[2][2], tablero[2][3], tablero[2][4], tablero[2][5],
	  tablero[2][6], tablero[2][7]);
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[1][0], tablero[1][1],
	  tablero[1][2], tablero[1][3], tablero[1][4], tablero[1][5],
	  tablero[1][6], tablero[1][7]);
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[0][0], tablero[0][1],
	  tablero[0][2], tablero[0][3], tablero[0][4], tablero[0][5],
	  tablero[0][6], tablero[0][7]);
  printf (" |================|\n");
  return;
}

int
rey_en_jaque_o_no(char tablero[8][8], int turno)
{
  /*Aquí tendremos una función que analize las casillas a las que tienen acceso todas las piezas de un jugador y ver si una de ellas apunta al rey del jugador contrario*/

  return 0;
}

int
Partida (char tablero[8][8], int turno)/*Esta función controla  las demas funciones*/
{
  /*Valores en ASCII:A=65 C=67 K=75 P=80 Q=81 T=84 Blancas
                    a=97 c=99 k=107 p=112 q=113 t=116
   espacio (casilla blanca) =32 X (casilla negra) =88  */
  
  int finalizacion = 0;
  int aplicacion = 1;
  int fila_inicial = 2;
  int fila_final = 4;
  int columnaf_int = 0;
  int columnai_int = 0;
  char columna_inicial = 'A';
  char columna_final = 'A';
  char color = '0';
  char pieza = '0';
  if (turno == 0)
    {
      printf ("\nTurno de las Blancas\n");
    }
  if (turno == 1)
    {
      printf ("\nTurno de las Negras\n");
    }

  printf ("\n Selecciona la pieza: \n");
  /*Aquí se requiere un input del usuario */
  printf ("\n Selecciona la nueva posicion: \n");
  /*Aquí se requiere un input del usuario */
  columnai_int = obtener_columna (columna_inicial);
  columnaf_int = obtener_columna (columna_final);
  fila_inicial = fila_inicial - 1;
  fila_final = fila_final - 1;
  pieza = tablero[fila_inicial][columnai_int];
  if (tablero[fila_inicial][columnai_int] > 84) /*Si la pieza que se selecciona tiene un valor mayor a 84 que es 'T', torre de las blancas y 65, 'A' alfil, y no es turno de ellas, la funcion regresa  */
   { if (tablero[fila_inicial][columnai_int] < 65) 
    {
      if (turno == 0)
	{
	  printf ("\n No es una pieza blanca: \n");
	  return 0;
	}
     }
   }
  if (tablero[fila_inicial][columnai_int] > 116) /* Lo mismo para las negras*/
  { if (tablero[fila_inicial][columnai_int] < 97)
    {
      if (turno == 1)
	{
	  printf ("\n No es una pieza negra: \n");
	  return 0;
	}
    }
 }
  aplicacion =
    analisis_movimiento (pieza, tablero, columnai_int, fila_inicial,
			 columnaf_int, fila_final); 
  while (aplicacion == 1)
    {
      if (aplicacion == 1)
	{
	  printf ("\n Movimiento invalido:  \n");
	  printf ("\n Selecciona otra nueva posicion: \n");
          /*Aquí se requiere un input del usuario */	  
	  columnaf_int = obtener_columna (columna_final);
	  fila_final = fila_final - 1;
	  columnaf_int = columnaf_int - 1;
	}
      aplicacion =
	analisis_movimiento (pieza, tablero, columnai_int, fila_inicial,
			     columnaf_int, fila_final);
    }			     
    tablero[fila_final][columnaf_int] = pieza;
  color = color_remplazo (columnai_int, fila_inicial);
  tablero[fila_inicial][columnai_int] = color;
  Imprimir_tablero (tablero);
  finalizacion = rey_en_jaque_o_no (tablero,turno);

  return finalizacion;

}

int
main (void)
{
  int estado = 0;
  int turno = 0;        /*A    B    C    D    E    F    G    H */
  char tablero[8][8] = { 'T', 'C', 'A', 'Q', 'K', 'A', 'C', 'T',  /*1 */
                         'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',  /*2 */
                         'X', ' ', 'X', ' ', 'X', ' ', 'X', ' ',  /*3 */
                         ' ', 'X', ' ', 'X', ' ', 'X', ' ', 'X',  /*4 */
                         'X', ' ', 'X', ' ', 'X', ' ', 'X', ' ',  /*5 */
                         ' ', 'X', ' ', 'X', ' ', 'X', ' ', 'X',  /*6 */
                         'X', 'p', 'p', 'p', 'p', 'p', 'p', 'p',  /*7 */
                         't', 'c', 'a', 'q', 'k', 'a', 'c', 't'   /*8 */
                       };
 printf ("  A B C D E F G H  \n");
  printf (" |================|\n");
  printf ("8|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[7][0], tablero[7][1],
          tablero[7][2], tablero[7][3], tablero[7][4], tablero[7][5],
          tablero[7][6], tablero[7][7]);
  printf ("7|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[6][0], tablero[6][1],
          tablero[6][2], tablero[6][3], tablero[6][4], tablero[6][5],
          tablero[6][6], tablero[6][7]);
  printf ("6|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[5][0], tablero[5][1],
          tablero[5][2], tablero[5][3], tablero[5][4], tablero[5][5],
          tablero[5][6], tablero[5][7]);
  printf ("5|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[4][0], tablero[4][1],
          tablero[4][2], tablero[4][3], tablero[4][4], tablero[4][5],
          tablero[4][6], tablero[4][7]);
  printf ("4|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[3][0], tablero[3][1],
          tablero[3][2], tablero[3][3], tablero[3][4], tablero[3][5],
          tablero[3][6], tablero[3][7]);
  printf ("3|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[2][0], tablero[2][1],
          tablero[2][2], tablero[2][3], tablero[2][4], tablero[2][5],
          tablero[2][6], tablero[2][7]);
  printf ("2|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[1][0], tablero[1][1],
          tablero[1][2], tablero[1][3], tablero[1][4], tablero[1][5],
          tablero[1][6], tablero[1][7]);
  printf ("1|%c|%c|%c|%c|%c|%c|%c|%c|\n", tablero[0][0], tablero[0][1],
          tablero[0][2], tablero[0][3], tablero[0][4], tablero[0][5],
          tablero[0][6], tablero[0][7]);
  printf (" |================|\n");


  while (estado == 0)/*este "while" ciclea el proceso hasta que un jugador de el jaque mate*/
    {
      estado = Partida (tablero,turno);
      switch (turno)
	{
	case 0:
	  turno = 1;
	  break;
	case 1:
	  turno = 0;
	  break;
	}
       estado=3; /*SE BORRARA ESTA LINEA UNA VEZ EL PROCESO INCLUYA INPUT'S*/
    }

  if (estado == 2)
    {
      printf ("Gana jugador 1\n");
    }
  if (estado == 1)
    {
      printf ("Gana jugador 2\n");
    }
  return 0;
}
