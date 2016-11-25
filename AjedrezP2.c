#include<stdio.h>
void inicializar();
void dibujar();
int tirar();

char tablero[8][8];
char tablero1[8][8];
char tablero_aux[8][8];
int turn = 0;

int
main(void){
	int i = 0;
	inicializar();
	dibujar();
	
	do{
	i = tirar();
	if(i==1)
		printf("\n*Jugada Invalida*\n");
	}while ((i==1) || (i==0));
			
	getch();
	return 0;
}


void inicializar(){
	int i = 0;
	int j = 0;	
	while(i<8){
		while(j<8){
			if((j%2)==0){
				if((i%2)==1)
				tablero1[i][j]='\xFE';
				else
				tablero1[i][j]=' ';
			}else{
				if((i%2)==1)
				tablero1[i][j]=' ';
				else
				tablero1[i][j]='\xFE';
			}
			tablero[i][j]=tablero1[i][j];
			if(i==1)			
				tablero[i][j]='p';
			if(i==6)			
				tablero[i][j]='P';
			tablero_aux[i][j]=tablero[i][j];
			j++;
		}
		j=0;
		i++;
	}
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
	tablero[7][3] = 'R';
	tablero[7][4] = 'D';
	tablero[7][5] = 'A';
	tablero[7][6] = 'C';
	tablero[7][7] = 'T';
	
	tablero_aux[0][0] = 't';
	tablero_aux[0][1] = 'c';
	tablero_aux[0][2] = 'a';
	tablero_aux[0][3] = 'd';
	tablero_aux[0][4] = 'r';
	tablero_aux[0][5] = 'a';
	tablero_aux[0][6] = 'c';
	tablero_aux[0][7] = 't';
	tablero_aux[7][0] = 'T';
	tablero_aux[7][1] = 'C';
	tablero_aux[7][2] = 'A';
	tablero_aux[7][3] = 'R';
	tablero_aux[7][4] = 'D';
	tablero_aux[7][5] = 'A';
	tablero_aux[7][6] = 'C';
	tablero_aux[7][7] = 'T';
}

void dibujar(){
	printf("\n");	
	printf("   A B C D E F G H\n");	
	int i = 0;
	int j = 7;
	while(j>=0){
		printf("%d ",j+1);
		while(i<8){
			printf("|%c",tablero[j][i]);
			i++;
		}
		printf("|\n");
		j--;
		i=0;
	}
}

int tirar(){
	
	int y1 = 0;
	int y2 = 0;
	char x1 = ' ';
	char x2 = ' ';
	int x1_i = 0;
	int x2_i = 0;
	
	printf("\nTu jugada:\n");
	scanf(" %c%d %c%d",&x1,&y1,&x2,&y2);
	
	if(x1=='*')
	return 2;
	
	x1_i=(int)x1-97;
	x2_i=(int)x2-97;
	y1--;
	y2--;
	if((x1_i==x2_i) && (y1==y2))
		return 1;
	if((x1_i<0) || (x2_i<0) || (y1<0) || (y2<0) || (x1_i>7) || (x2_i>7) || (y1>7) || (y2>7))
		return 1;
	if ((tablero[y1][x1_i]!=' ') && (tablero[y1][x1_i]!='\xFE')){
		if ((tablero[y2][x2_i]!=' ') && (tablero[y2][x2_i]!='\xFE'))
				return 1;
		switch(tablero[y1][x1_i]){
			case 'p':
				if (turn==1) return 1;
				
			break;
			case 't':
				if (turn==1) return 1;
				
			break;
			case 'c':
				if (turn==1) return 1;
				
			break;
			case 'a':
				if (turn==1) return 1;
				
			break;
			case 'd':
				if (turn==1) return 1;
				
			break;
			case 'r':
				if (turn==1) return 1;
			
			break;
			case 'P':
				if (turn==0) return 1;
				
			break;
			case 'T':
				if (turn==0) return 1;
				
			break;
			case 'C':
				if (turn==0) return 1;
				
			break;
			case 'A':
				if (turn==0) return 1;
				
			break;
			case 'D':
				if (turn==0) return 1;
				
			break;
			case 'R':
				if (turn==0) return 1;
				
			break;
			
		}
		printf("\n%d,%d a %d,%d\n",x1_i,y1,x2_i,y2);
		printf("%c,%c",tablero[y1][x1_i],tablero[y2][x2_i]);
		return 0;
			
		}
	return 1;
}
	



