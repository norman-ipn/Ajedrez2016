/*RECOPILACION DE FUNCIONES*/
/*CONSIDERÉ LAS FUNCIONES QUE A FUTURO PUEDEN TENER UTILIDAD EN EL CODIGO FINAL*/

int
validar_mov_peon_blanco (char tablero[8][8]);

int
validar_movimiento_torre(char tablero[8][8]);

int
validar_rey (char tablero[8][8], int x, int y);

int
validar_movimiento_reina(char tablero[8][8]);

int
validar_peon_negro (char tablero[7][7]);

int 
validar_movimiento_caballo(char tablero[8][8]);

int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
                    int posicion_x, int posicion_y, char pieza);

int
validar_movimiento_alfil (char posicion_ini_x,int posicion_ini_y,int posicion_y,char posicion_x,char tablero[8][8]);

int
tirar_blancas (char tablero[8][8]);

void 
rendirse ();

void 
print_row(char board[8][8], int j);

void 
print(char board[8][8]);

void
Mover_rey(char tablero[8][8]);

void
localizar_pieza (char tablero[8][8], char pieza, int *x, int *y);

void
inicializar_o_reiniciar_tablero (char tablero[8][8]);

void 
enrocar_corto(char tablero[8][8]);

int
declarar_jaque_mate (char tablero[8][8], char pieza_dando_jaque, int coordenadas__pieza[2], int coordenadas_rey[2]);

void
dar_jaque(tablero[8][8]);

char
coronar_peon ();

int
coordenada_valida (int x, int y);
