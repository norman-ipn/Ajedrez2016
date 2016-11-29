/* Función sobre el movimiento gráfico en el tablero de las piezas. Se pone parte de la función tablero.c como ejemplo de cómo funcionará la función Movimiento_grafico_pieza*/

/* Iniciando piezas */
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  while (i < 8)
    {
/* Piezas blancas se identifican por estar en mayúsculas, negras en minúsculas */
      tablero[6][i] = 'P';
      tablero[1][i] = 'p';
      i = i + 1;
    }
/* impresion del tablero de ajedrez*/
	printf("\n");
	printf("    ");
	while(juego = 1){
		printf("%s",Partesuperior);
	while (y < 7){
			printf("\n");
				printf("  %d ",f);
				while (a<8){
				printf("\u2503 %c ",tablero[y][x]);
				a= a +1; 
				x = x +1;
				
			}	
			printf("\u2503");
			printf("\n");
			printf("   ");
			a = 0;
			printf(" %s ",cuerpo);
		a = 0;
		x = 0;
		y = y +1;
		f = f -1;
	}
	printf("\n");
		printf("  %d ",f);
				while (a<8){
				printf("\u2503 %c ",tablero[y][x]);
				a= a +1; 
				x = x +1;
			}	
			printf("\u2503");
			printf("\n");
			printf("    ");
			a = 0;
		printf("%s",parteinferior);
	printf("\n");
		printf("    ");
	a = 0;
	while (a < 8){
		printf("  %c  ",65 + a);
		a = a +1;
}

/*Comienza esta función, se hará uso de todas las funciones de validar movimientos de las piezas */
    
 /*Esta función debe evaluar y realizar el movimiento que requiere el jugador*/
void
mover_pieza (char tablero[8][8])
{
  char movimiento[1];
  char aux;
  int columna = 0; 
  int fila = 0;
 printf ("Turno de las negras\n\n")
  printf ("Introduzca la coordenada de la pieza que desea mover\n\n");
  scanf ("%s", movimiento);
  columna = movimiento[0];
  fila = movimiento[0];
  aux = tablero[fila][columna];
  tablero[fila][columna] = 't';
 
  movimiento[2] = 'i';
  printf ("\nIntroduzca la coordenada de destino \n\n");
char h[1];
  scanf ("%s", h);
  columna = h[0];
  fila = h[1];
  tablero[fila][columna] = aux;
 // guardar_mov (movimiento);
	
void
mover_pieza (char tablero[8][8])
{
  char movimiento[1];
  char aux;
  int columna = 0; 
  int fila = 1;
 printf ("Turno de las negras\n\n")
  printf ("Introduzca la coordenada de la pieza que desea mover\n\n");
  scanf ("%s", movimiento);
  columna = movimiento[0];
  fila = movimiento[2];
  aux = tablero[fila][columna];
  tablero[fila][columna] = 'c';
 
  movimiento[2] = 'i';
  printf ("\nIntroduzca la coordenada de destino \n\n");
char h[2];
  scanf ("%s", h);
  columna = h[0];
  fila = h[3];
  tablero[fila][columna] = aux;
 // guardar_mov (movimiento);
	
	
	
	
	
	
printf ("t\n\n");
    scanf ("%c", &opc_j);	
  switch (opc_j)
	{
      
	case '':
	  system ("clear");
	 printf ("  \n\n");
	  break;

	case '':
	  system ("clear");
	  printf ("Gracias por jugar\n\n");
      
	case '':
	  system ("clear");
	  printf ("Gracias por jugar\n\n");

return 0;

	default:
	  system ("clear");
	  printf ("La opción no es válida\n");
	  pausa ();
	  break;
	}
    }
  pausa ();
 
}
 
    
}


	
  a[0][0] = 'T';
  a[0][1] = 'C';
  a[0][2] = 'A';
  a[0][3] = 'D';
  a[0][4] = 'R';
  a[0][5] = 'A';
  a[0][6] = 'C';
  a[0][7] = 'T';
  a[1][0] = 'P';
  a[1][1] = 'P';
  a[1][2] = 'P';
  a[1][3] = 'P';
  a[1][4] = 'P';
  a[1][5] = 'P';
  a[1][6] = 'P';
  a[1][7] = 'P';
  a[6][0] = 'p';
  a[6][1] = 'p';
  a[6][2] = 'p';
  a[6][3] = 'p';
  a[6][4] = 'p';
  a[6][5] = 'p';
  a[6][6] = 'p';
  a[6][7] = 'p';
  a[7][0] = 't';
  a[7][1] = 'c';
  a[7][2] = 'a';
  a[7][3] = 'd';
  a[7][4] = 'r';
  a[7][5] = 'a';
  a[7][6] = 'c';
  a[7][7] = 't';
}







