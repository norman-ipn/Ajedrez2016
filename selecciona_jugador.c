#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int 
empieza_jugador() {
	srand(time(NULL));
	int num = rand();
	if(num %= 2){
		return 1;
	}
	return 2;
}
int main(){
	printf("%d\n", empieza_jugador());
}