#include <stdio.h>

void
main (void)
{
  char tablero[9][9];
  int i = 0;
  int j = 0;
  int e = 0;
  for (i = 0; i < 10; i = i + 1)
    {
      tablero[i][j]='*';
      printf (" ");
      printf ("%c", tablero[i][j]);
    }
/*-------------------------------------*/
  printf ("\n");
  i = 0;
  while (j < 8)
    {
      printf (" ");
      tablero[9][j] = '*';
      printf ("%c",tablero[9][j]);
    
     if(j=1){ 
                    tablero[8][1]='T1';
                    tablero[7][1]='C1';
                    tablero[6][1]='A1';
                    tablero[5][1]='Ry';
                    tablero[4][1]='Re';
                    tablero[3][1]='A2';
                    tablero[2][1]='C2';
                    tablero[1][1]='R2';
           /*no se si aqui va otro de espacio*/
                printf("%c",tablero[8][1]);
                printf(" ");
                 printf("%c",tablero[7][1]);
                 printf(" ");
                  printf("%c",tablero[6][1]);
                  printf(" ");
                  printf("%c",tablero[5][1]);
                  printf(" ");
                      printf("%c",tablero[4][1]);
                      printf(" ");
                       printf("%c",tablero[3][1]);
                       printf(" ");
                       printf("%c",tablero[2][1]);
                       printf(" ");
                        printf("%c",tablero[1][1]);
                        //igual no se si va un espacio mas//
                        e=8;
                    while(e>=1 ){
                   tablero[e][2]='P';
                   printf("%c",tablero[e][2]);
                   e=e-1;  
                     }
                    }
    if(j=7){
                             tablero[8][7]='T1';
                    tablero[7][7]='C1';
                    tablero[6][7]='A1';
                    tablero[5][7]='Ry';
                    tablero[4][7]='Re';
                    tablero[3][7]='A2';
                    tablero[2][7]='C2';
                    tablero[1][7]='R2';
           /*no se si aqui va otro de espacio*/
                printf("%c",tablero[8][7]);
                printf(" ");
                 printf("%c",tablero[7][7]);
                 printf(" ");
                  printf("%c",tablero[6][7]);
                  printf(" ");
                  printf("%c",tablero[5][7]);
                  printf(" ");
                      printf("%c",tablero[4][7]);
                      printf(" ");
                       printf("%c",tablero[3][7]);
                       printf(" ");
                       printf("%c",tablero[2][7]);
                       printf(" ");
                        printf("%c",tablero[1][7]);
                        //igual no se si va un espacio mas//
                                e=8;
                    while(e>=1 ){
                   tablero[e][7]='P';
                   printf("%c",tablero[e][7]);
                   e=e-1;  
                     }
                            }
     /* while (e < 17)
      {
        printf (" ");
        e = e + 1;
      }
   e = 0;*/
    
      tablero[i][j] = '*';
      printf ("%c \n", tablero[i][j]);
      j = j + 1;
    }
  /*-------------------------------------*/
  i = 0;
  for(i = 0; i < 9; i = i + 1)
    {
    tablero[i][9]='*';
    printf("%c", tablero[i][9]);
    }
/*-------------------------------------*/
  printf ("\n");
}

