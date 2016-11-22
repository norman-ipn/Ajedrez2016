#include <stdio.h>
#include <windows.h> /*da funcionalidad a gotoxy*/

COORD coord={0,0};   

void gotoxy (int x, int y){
     coord.X=x;
     coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
     
     } 

void
otra_funcion (void)
{
  char tablero[9][9];
  int y = 15;
  int x = 30;
  int i = 0;
  int j = 0;
  gotoxy(x,y);
  for (i = 0; i < 10; i = i + 1)
    {
      tablero[i][j]='*';
      printf("%c",tablero[i][j]);
      tablero[i][9] = '*';
    }

  while (j < 10)
    {
      tablero[i][j] = '*';
      tablero[9][j] = '*';
      j = j + 1;
    }

}
