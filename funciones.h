/*
 RECOPILACIÓN DE FUNCIONES
*/
/*CONSIDERÉ LAS FUNCIONES QUE A FUTURO PUEDEN TENER UTILIDAD EN EL CODIGO FINAL*/

void 
validar_enroque_corto(char tablero[8][8]);

void 
validar_enroque_largo(char tablero[8][8]);

int
validar_mov_peon_blanco (int posicion_ini_x, int posicion_ini_y, int posicion_y, int posicion_x, char tablero[8][8]);

int
validar_mov_peon_negro (char tablero[7][7]);

int
validar_movimiento_torre(char tablero[8][8]);

int 
validar_movimiento_caballo(char tablero[8][8]);

int
validar_movimiento_alfil (char posicion_ini_x,int posicion_ini_y,int posicion_y,char posicion_x,char tablero[8][8]);

int
validar_movimiento_dama(char tablero[8][8]);

int
validar_movimiento_rey (char tablero[8][8], int x, int y);

int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
                    int posicion_x, int posicion_y, char pieza);

int
tirar_blancas (char tablero[8][8]);

int
tirar_negras (char tablero[8][8]);

void 
print_row(char board[8][8], int j);

void 
print(char board[8][8]);

void
Mover_rey(char tablero[8][8]);

void
Mover_torre(char tablero[8][8]);

void
Mover_alfil(char tablero[8][8]);

void
Mover_caballo(char tablero[8][8]);

void
Mover_dama(char tablero[8][8]);

void
Mover_peon(char tablero[8][8]);

void
localizar_pieza (char tablero[8][8], char pieza, int *x, int *y);

void
inicializar_tablero (char tablero[8][8]);

void
reiniciar_tablero (char tablero[8][8]);

/*Opino que la funcion inicializar tablero realize sólo el llenado del tablero
  y que la de reiniciar tablero sólo lo ponga en vacío todo
  Se aceptan sugerencias*/

void 
enroque_corto(char tablero[8][8]);

void 
enroque_largo(char tablero[8][8]);

void
comer_al_paso(char tablero[8][8], int x, int y, int coordenadas_peon_enemigo[2]);

int
declarar_jaque_mate (char tablero[8][8], char pieza_dando_jaque, int coordenadas__pieza[2], int coordenadas_rey[2]);

void
dar_jaque(tablero[8][8]);

char
coronar_peon(char tablero, char entrada, int x, int y);

int
coordenada_valida (int x, int y);

void 
rendirse ();

void
declarar_tablas();

void
ofrecer_tablas(tablero[8][8]);

int
udhist (int win);

int
DetallesPartida (int partida, int jugador, char pieza, int x, int y);

void 
tablas (char tablero[8][8]);

int
GuardaPartida (char tablero[8][8]);

int
RecuperaPartida (char tablero[8][8]);

int 
comprobar_casilla (char tablero [8][8], int x_inicial, int y_inicial, int x_final, int y_final);

int 
MoverRey (char tablero [8][8], int x_inicial, int y_inicial, int x_final, int y_final);

void 
dibujarDiagonales (char simbolo, int ncolumnas, int nfilas);

void
alfabetoASCII (char letra[7][5], char c);

int
casilla_atacada (char tablero[8][8], int posicionini_x, int posicionini_y,
		 int posicionevaluar_x, int posicionevaluar_y);

void
inicializar (char tablero[8][8]);

void
menu_jugador (void);

void
modalidad_de_juego ();

void 
mostrar_resultados(int num_jugador);

int
opciones_movimiento_rey (char tablero[8][8], int rey[2]);

int 
empieza_jugador();

