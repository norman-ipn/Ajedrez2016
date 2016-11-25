/* Asumire que el tablero esta indexado de 0 a 7,
   ademas del parametro para representar el tablero,
   llevare dos enteros que representaran la coordenada a la cual
   se quiere llevar al rey */

/* Usare dos funciones "localizar_pieza" y "coordenada_valida" */

/* 1 significa que la coordenada es valida y -1 si no lo es */
/* Tambien asumire que el caracter 'R' significa Rey */
/* El ultimo parametro es el de la ficha del rey para saber si es el rey blanco o negro */ --> "R" o "r"

int
validar_movimiento_rey(char tablero[8][8], int x1, int y1, int x2, int y2)
{
	int direccion[8][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
	return validar_movimientos_instanteos(tablero, direccion, x1, y1, x2, y2);
}

