#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*
*********************
COMO USAR ESTE CODIGO
*********************
Este codigo carga una direccion de memoria que contiene la letra en arte ASCII,
recibe una matriz de 7x5 y la llena con la letra solicitada, y un char en minuscula de la letra a usar



*/
void
alfabetoASCII (char letra[7][5], char c)
{

  char letraA[7][5], letraB[7][5], letraC[7][5], letraD[7][5], letraE[6][5],
    letraF[6][5], letraG[6][5];
  char letraH[6][5], letraI[7][5], letraJ[7][5], letraK[7][5], letraL[7][5],
    letraM[7][5], letraN[6][5];
  char letraO[6][5], letraP[7][5], letraQ[7][5], letraR[6][5], letraS[6][5],
    letraT[7][5], letraU[7][5];
  char letraV[6][5], letraW[6][5], letraX[7][5], letraY[7][5], letraZ[7][5];

  int i, j;


  switch (c)
    {
    case 'a':
      letraA[7][5] =
      {
	{
	' ', 'A', 'A', 'A', ' '}
	,
	{
	' ', 'A', ' ', 'A', ' '}
	,
	{
	' ', 'A', ' ', 'A', ' '}
	,
	{
	' ', 'A', 'A', 'A', ' '}
	,
	{
	' ', 'A', ' ', 'A', ' '}
	,
	{
	' ', 'A', ' ', 'A', ' '}
	,
	{
	' ', 'A', ' ', 'A', ' '}
      };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraA[i][j];
	       }
           };
      break;
    case 'b':
      letraB[7][5] =
      {
	{
	' ', 'B', 'B', ' ', ' '}
	,
	{
	' ', 'B', ' ', 'B', ' '}
	,
	{
	' ', 'B', ' ', 'B', ' '}
	,
	{
	' ', 'B', 'B', ' ', ' '}
	,
	{
	' ', 'B', ' ', 'B', ' '}
	,
	{
	' ', 'B', ' ', 'B', ' '}
	,
	{
	' ', 'B', 'B', ' ', ' '}
      };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraB[i][j];
	       }
           };
      break;
    case 'c':
      letraC[7][5] =
      {
	{
	' ', ' ', 'C', 'C', ' '}
	,
	{
	' ', 'C', ' ', ' ', ' '}
	,
	{
	' ', 'C', ' ', ' ', ' '}
	,
	{
	' ', 'C', ' ', ' ', ' '}
	,
	{
	' ', 'C', ' ', ' ', ' '}
	,
	{
	' ', 'C', ' ', ' ', ' '}
	,
	{
	' ', ' ', 'C', 'C', ' '}
      };
 for (i = 0; i < 7; i++)
    {
     for (j = 0; j < 5; j++)
	{
 	 letra[i][j] = letraC[i][j];
	}
    }
      break;
    case 'd':
      letraD[7][5] =
      {
	{
	' ', 'D', 'D', ' ', ' '}
	,
	{
	' ', 'D', ' ', 'D', ' '}
	,
	{
	' ', 'D', ' ', 'D', ' '}
	,
	{
	' ', 'D', ' ', 'D', ' '}
	,
	{
	' ', 'D', ' ', 'D', ' '}
	,
	{
	' ', 'D', ' ', 'D', ' '}
	,
	{
	' ', 'D', 'D', ' ', ' '}
      };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraD[i][j];
	       }
           };
      break;
    case 'e':
      letraE[6][5] =
      {
	{
	' ', 'E', 'E', 'E', ' '}
	,
	{
	' ', 'E', ' ', ' ', ' '}
	,
	{
	' ', 'E', ' ', ' ', ' '}
	,
	{
	' ', 'E', 'E', ' ', ' '}
	,
	{
	' ', 'E', ' ', ' ', ' '}
	,
	{
	' ', 'E', ' ', ' ', ' '}
	,
	{
	' ', 'E', 'E', 'E', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraE[i][j];
	       }
           };
      break;
    case 'f':
      letraF[6][5] =
      {
	{
	' ', 'F', 'F', 'F', ' '}
	,
	{
	' ', 'F', ' ', ' ', ' '}
	,
	{
	' ', 'F', ' ', ' ', ' '}
	,
	{
	' ', 'F', 'F', ' ', ' '}
	,
	{
	' ', 'F', ' ', ' ', ' '}
	,
	{
	' ', 'F', ' ', ' ', ' '}
	,
	{
	' ', 'F', ' ', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraF[i][j];
	       }
           };
      break;
    case 'g':
      letraG[6][5] =
      {
	{
	' ', ' ', 'G', ' ', ' '}
	,
	{
	' ', 'G', ' ', 'G', ' '}
	,
	{
	' ', 'G', ' ', ' ', ' '}
	,
	{
	' ', 'G', ' ', ' ', ' '}
	,
	{
	' ', 'G', 'G', 'G', ' '}
	,
	{
	' ', 'G', ' ', 'G', ' '}
	,
	{
	' ', 'G', 'G', 'G', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraG[i][j];
	       }
           };
      break;
    case 'h':
      letraH[6][5] =
      {
	{
	' ', 'H', ' ', 'H', ' '}
	,
	{
	' ', 'H', ' ', 'H', ' '}
	,
	{
	' ', 'H', ' ', 'H', ' '}
	,
	{
	' ', 'H', 'H', 'H', ' '}
	,
	{
	' ', 'H', ' ', 'H', ' '}
	,
	{
	' ', 'H', ' ', 'H', ' '}
	,
	{
	' ', 'H', ' ', 'H', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraH[i][j];
	       }
           };
      break;
    case 'i':
      letraI[6][5] =
      {
	{
	' ', 'I', 'I', 'I', ' '}
	,
	{
	' ', ' ', 'I', ' ', ' '}
	,
	{
	' ', ' ', 'I', ' ', ' '}
	,
	{
	' ', ' ', 'I', ' ', ' '}
	,
	{
	' ', ' ', 'I', ' ', ' '}
	,
	{
	' ', ' ', 'I', ' ', ' '}
	,
	{
	' ', 'I', 'I', 'I', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraI[i][j];
	       }
           };
      break;
    case 'j':
      letraJ[6][5] =
      {
	{
	' ', 'J', 'J', 'J', ' '}
	,
	{
	' ', ' ', 'J', ' ', ' '}
	,
	{
	' ', ' ', 'J', ' ', ' '}
	,
	{
	' ', ' ', 'J', ' ', ' '}
	,
	{
	' ', ' ', 'J', ' ', ' '}
	,
	{
	' ', 'J', 'J', ' ', ' '}
	,
	{
	' ', 'J', 'j', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraJ[i][j];
	       }
           };
      break;
    case 'k':
      letraK[6][5] =
      {
	{
	' ', 'K', ' ', 'K', ' '}
	,
	{
	' ', 'K', ' ', 'K', ' '}
	,
	{
	' ', 'K', 'K', ' ', ' '}
	,
	{
	' ', 'K', 'K', ' ', ' '}
	,
	{
	' ', 'K', ' ', ' ', ' '}
	,
	{
	' ', 'K', ' ', 'K', ' '}
	,
	{
	' ', 'K', ' ', 'K', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraK[i][j];
	       }
           };
      break;
    case 'l':
      letraL[6][5] =
      {
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', ' ', ' ', ' '}
	,
	{
	' ', 'L', 'L', 'L', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraL[i][j];
	       }
           };
      break;
    case 'm':
      letraM[6][5] =
      {
	{
	' ', 'M', ' ', 'M', ' '}
	,
	{
	' ', 'M', 'M', 'M', ' '}
	,
	{
	' ', 'M', ' ', 'M', ' '}
	,
	{
	' ', 'M', ' ', 'M', ' '}
	,
	{
	' ', 'M', ' ', 'M', ' '}
	,
	{
	' ', 'M', ' ', 'M', ' '}
	,
	{
	' ', 'M', ' ', 'M', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraM[i][j];
	       }
           };
      break;
    case 'n':
      letraN[6][5] =
      {
	{
	' ', ' ', ' ', 'N', ' '}
	,
	{
	' ', ' ', ' ', 'N', ' '}
	,
	{
	' ', 'N', ' ', 'N', ' '}
	,
	{
	' ', 'N', 'N', 'N', ' '}
	,
	{
	' ', 'N', ' ', 'N', ' '}
	,
	{
	' ', 'N', ' ', ' ', ' '}
	,
	{
	' ', 'N', ' ', ' ', ' '}
      };			//OTRA IDEA PARA LA N?
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraN[i][j];
	       }
           };
      break;
    case 'o':
      letraO[6][5] =
      {
	{
	' ', ' ', 'O', ' ', ' '}
	,
	{
	' ', 'O', ' ', 'O', ' '}
	,
	{
	' ', 'O', ' ', 'O', ' '}
	,
	{
	' ', 'O', ' ', 'O', ' '}
	,
	{
	' ', 'O', ' ', 'O', ' '}
	,
	{
	' ', 'O', ' ', 'O', ' '}
	,
	{
	' ', ' ', 'O', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraO[i][j];
	       }
           };
      break;
    case 'p':
      letraP[6][5] =
      {
	{
	' ', 'P', 'P', ' ', ' '}
	,
	{
	' ', 'P', ' ', 'P', ' '}
	,
	{
	' ', 'P', ' ', 'P', ' '}
	,
	{
	' ', 'P', 'P', ' ', ' '}
	,
	{
	' ', 'P', ' ', ' ', ' '}
	,
	{
	' ', 'P', ' ', ' ', ' '}
	,
	{
	' ', 'P', ' ', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraP[i][j];
	       }
           };
      break;
    case 'q':
      letraQ[6][5] =
      {
	{
	' ', ' ', 'Q', ' ', ' '}
	,
	{
	' ', 'Q', ' ', 'Q', ' '}
	,
	{
	' ', 'Q', ' ', 'Q', ' '}
	,
	{
	' ', 'Q', ' ', 'Q', ' '}
	,
	{
	' ', 'Q', ' ', 'Q', ' '}
	,
	{
	' ', 'Q', 'Q', 'Q', ' '}
	,
	{
	' ', ' ', 'Q', 'Q', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraQ[i][j];
	       }
           };
      break;
    case 'r':
      letraR[6][5] =
      {
	{
	' ', 'R', 'R', ' ', ' '}
	,
	{
	' ', 'R', ' ', 'R', ' '}
	,
	{
	' ', 'R', ' ', 'R', ' '}
	,
	{
	' ', 'R', 'R', ' ', ' '}
	,
	{
	' ', 'R', ' ', 'R', ' '}
	,
	{
	' ', 'R', ' ', 'R', ' '}
	,
	{
	' ', 'R', ' ', 'R', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraR[i][j];
	       }
           };
      break;
    case 's':
      letraS[6][5] =
      {
	{
	' ', ' ', 'S', 'S', ' '}
	,
	{
	' ', 'S', ' ', ' ', ' '}
	,
	{
	' ', 'S', ' ', ' ', ' '}
	,
	{
	' ', ' ', 'S', ' ', ' '}
	,
	{
	' ', ' ', ' ', 'S', ' '}
	,
	{
	' ', ' ', ' ', 'S', ' '}
	,
	{
	' ', 'S', 'S', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraS[i][j];
	       }
           };
      break;
    case 't':
      letraT[6][5] =
      {
	{
	' ', 'T', 'T', 'T', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
	,
	{
	' ', ' ', 'T', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraT[i][j];
	       }
           };
      break;
    case 'u':
      letraU[6][5] =
      {
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', 'U', ' ', 'U', ' '}
	,
	{
	' ', ' ', 'U', 'U', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraU[i][j];
	       }
           };
      break;
    case 'v':
      letraV[6][5] =
      {
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', 'V', ' ', 'V', ' '}
	,
	{
	' ', ' ', 'V', ' ', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraV[i][j];
	       }
           };
      break;
    case 'w':
      letraW[6][5] =
      {
	{
	' ', 'W', ' ', 'W', ' '}
	,
	{
	' ', 'W', ' ', 'W', ' '}
	,
	{
	' ', 'W', ' ', 'W', ' '}
	,
	{
	' ', 'W', ' ', 'W', ' '}
	,
	{
	' ', 'W', ' ', 'W', ' '}
	,
	{
	' ', 'W', 'W', 'W', ' '}
	,
	{
	' ', 'W', ' ', 'W', ' '}
      };
 	for (i = 0; i < 6; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraW[i][j];
	       }
           };
      break;
    case 'x':
      letraX[6][5] =
      {
	{
	' ', 'X', ' ', 'X', ' '}
	,
	{
	' ', 'X', ' ', 'X', ' '}
	,
	{
	' ', 'X', ' ', 'X', ' '}
	,
	{
	' ', ' ', 'X', ' ', ' '}
	,
	{
	' ', 'X', ' ', 'X', ' '}
	,
	{
	' ', 'X', ' ', 'X', ' '}
	,
	{
	' ', 'X', ' ', 'X', ' '}
      };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraX[i][j];
	       }
           };
      break;
    case 'y':
      letraY[6][5] =
      {
	{
	' ', 'Y', ' ', 'Y', ' '}
	,
	{
	' ', 'Y', ' ', 'Y', ' '}
	,
	{
	' ', 'Y', ' ', 'Y', ' '}
	,
	{
	' ', ' ', 'Y', ' ', ' '}
	,
	{
	' ', ' ', 'Y', ' ', ' '}
	,
	{
	' ', ' ', 'Y', ' ', ' '}
	,
	{
	' ', ' ', 'Y', ' ', ' '}
      };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraY[i][j];
	       }
           };
      break;
    case 'z':
      letraZ[6][5] = {
      
	{
	' ', 'Z', 'Z', 'Z', ' '}
	,
	{
	' ', ' ', ' ', 'Z', ' '}
	,
	{
	' ', ' ', 'Z', ' ', ' '}
	,
	{
	' ', ' ', 'Z', ' ', ' '}
	,
	{
	' ', ' ', 'Z', ' ', ' '}
	,
	{
	' ', 'Z', ' ', ' ', ' '}
	,
	{
	' ', 'Z', 'Z', 'Z', ' '}
     , };
 	for (i = 0; i < 7; i++)
           {
            for (j = 0; j < 5; j++)
               {
 	        letra[i][j] = letraZ[i][j];
	       }
           };
      break;
    default:
      printf ("letra no valida");
      break;
    }
  /*
     esto era un ejemplo de impresion
     while (y < 10)
     {
     while (x < 10)
     {
     printf ("%c", letraA[y][x]);
     x = x + 1;
     }
     x = 0;
     sleep (1);
     printf ("\n");
     y = y + 1;
     }

     sleep (1);
     printf ("paso 1 segundo\n");
     sleep (1);
     printf ("pasaron 2 segundos\n"); */
}

/*
void
imprime()
{
	
  printf("%s",); 
  	
}*/

int
main (int argc, char const *argv[])
{
//  jaqueAnimacion ();          /*delay(1000);
//                                 jaqueAnimacion(); delay(1000); */
  return 0;
}
