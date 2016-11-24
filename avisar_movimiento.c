/*ésta función comprobara si alguna pieza ha sido movida al rededor de cada juego
  Regresará 1 si la pieza ha sido movia y -1 en caso contrario
*/
int avisar_movimiento(char historial[100], char pieza){
	int i=0:
	while(historial[i]!='/0'){
		if(historial[i]==pieza){
			return 1;
		}
	}
	return -1;
}