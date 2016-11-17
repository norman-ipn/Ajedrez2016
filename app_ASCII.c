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
  // int x = 0;
  // int y = 0;
  switch (c)
    {
    case 'a':
      char letraA[7][5] = {
	{' ', 'A', 'A', 'A', ' '},
	{' ', 'A', ' ', 'A', ' '},
	{' ', 'A', ' ', 'A', ' '},
	{' ', 'A', 'A', 'A', ' '},
	{' ', 'A', ' ', 'A', ' '},
	{' ', 'A', ' ', 'A', ' '},
	{' ', 'A', ' ', 'A', ' '},
      };
      letra = letraA;
      break;
    case 'b':
      char letraB[7][5] = {
	{' ', 'B', 'B', ' ', ' '},
	{' ', 'B', ' ', 'B', ' '},
	{' ', 'B', ' ', 'B', ' '},
	{' ', 'B', 'B', ' ', ' '},
	{' ', 'B', ' ', 'B', ' '},
	{' ', 'B', ' ', 'B', ' '},
	{' ', 'B', 'B', ' ', ' '},
      };
      letra = letraB;
      break;
    case 'c':
      char letraC[7][5] = {
	{' ', ' ', 'C', 'C', ' '},
	{' ', 'C', ' ', ' ', ' '},
	{' ', 'C', ' ', ' ', ' '},
	{' ', 'C', ' ', ' ', ' '},
	{' ', 'C', ' ', ' ', ' '},
	{' ', 'C', ' ', ' ', ' '},
	{' ', ' ', 'C', 'C', ' '},
      };
      letra = letraC;
      break;
    case 'd':
      char letraD[7][5] = {
	{' ', 'D', 'D', ' ', ' '},
	{' ', 'D', ' ', 'D', ' '},
	{' ', 'D', ' ', 'D', ' '},
	{' ', 'D', ' ', 'D', ' '},
	{' ', 'D', ' ', 'D', ' '},
	{' ', 'D', ' ', 'D', ' '},
	{' ', 'D', 'D', ' ', ' '},
      };
      letra = letraD;
      break;
    case 'e':
      char letraE[6][5] = {
	{' ', 'E', 'E', 'E', ' '},
	{' ', 'E', ' ', ' ', ' '},
	{' ', 'E', ' ', ' ', ' '},
	{' ', 'E', 'E', ' ', ' '},
	{' ', 'E', ' ', ' ', ' '},
	{' ', 'E', ' ', ' ', ' '},
	{' ', 'E', 'E', 'E', ' '},
      };
      letra = letraE;
      break;
    case 'f':
      char letraF[6][5] = {
	{' ', 'F', 'F', 'F', ' '},
	{' ', 'F', ' ', ' ', ' '},
	{' ', 'F', ' ', ' ', ' '},
	{' ', 'F', 'F', ' ', ' '},
	{' ', 'F', ' ', ' ', ' '},
	{' ', 'F', ' ', ' ', ' '},
	{' ', 'F', ' ', ' ', ' '},
      };
      letra = letraF;
      break;
    case 'g':
      char letraG[6][5] = {
	{' ', ' ', 'G', ' ', ' '},
	{' ', 'G', ' ', 'G', ' '},
	{' ', 'G', ' ', ' ', ' '},
	{' ', 'G', ' ', ' ', ' '},
	{' ', 'G', 'G', 'G', ' '},
	{' ', 'G', ' ', 'G', ' '},
	{' ', 'G', 'G', 'G', ' '},
      };
      letra = letraG;
      break;
    case 'h':
      char letraH[6][5] = {
	{' ', 'H', ' ', 'H', ' '},
	{' ', 'H', ' ', 'H', ' '},
	{' ', 'H', ' ', 'H', ' '},
	{' ', 'H', 'H', 'H', ' '},
	{' ', 'H', ' ', 'H', ' '},
	{' ', 'H', ' ', 'H', ' '},
	{' ', 'H', ' ', 'H', ' '},
      };
      letra = letraH;
      break;
    case 'i':
      char letraI[6][5] = {
	{' ', 'I', 'I', 'I', ' '},
	{' ', ' ', 'I', ' ', ' '},
	{' ', ' ', 'I', ' ', ' '},
	{' ', ' ', 'I', ' ', ' '},
	{' ', ' ', 'I', ' ', ' '},
	{' ', ' ', 'I', ' ', ' '},
	{' ', 'I', 'I', 'I', ' '},
      };
      letra = letraI;
      break;
    case 'j':
      char letraJ[6][5] = {
	{' ', 'J', 'J', 'J', ' '},
	{' ', ' ', 'J', ' ', ' '},
	{' ', ' ', 'J', ' ', ' '},
	{' ', ' ', 'J', ' ', ' '},
	{' ', ' ', 'J', ' ', ' '},
	{' ', 'J', 'J', ' ', ' '},
	{' ', 'J', 'j', ' ', ' '},
      };
      letra = letraJ;
      break;
    case 'k':
      char letraK[6][5] = {
	{' ', 'K', ' ', 'K', ' '},
	{' ', 'K', ' ', 'K', ' '},
	{' ', 'K', 'K', ' ', ' '},
	{' ', 'K', 'K', ' ', ' '},
	{' ', 'K', ' ', ' ', ' '},
	{' ', 'K', ' ', 'K', ' '},
	{' ', 'K', ' ', 'K', ' '},
      };
      letra = letraK;
      break;
    case 'l':
      char letraL[6][5] = {
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', ' ', ' ', ' '},
	{' ', 'L', 'L', 'L', ' '},
      };
      letra = letraL;
      break;
    case 'm':
      char letraM[6][5] = {
	{' ', 'M', ' ', 'M', ' '},
	{' ', 'M', 'M', 'M', ' '},
	{' ', 'M', ' ', 'M', ' '},
	{' ', 'M', ' ', 'M', ' '},
	{' ', 'M', ' ', 'M', ' '},
	{' ', 'M', ' ', 'M', ' '},
	{' ', 'M', ' ', 'M', ' '},
      };
      letra = letraM;
      break;
    case 'n':
      char letraN[6][5] = {
	{' ', ' ', ' ', 'N', ' '},
	{' ', ' ', ' ', 'N', ' '},
	{' ', 'N', ' ', 'N', ' '},
	{' ', 'N', 'N', 'N', ' '},
	{' ', 'N', ' ', 'N', ' '},
	{' ', 'N', ' ', ' ', ' '},
	{' ', 'N', ' ', ' ', ' '},
      };			//OTRA IDEA PARA LA N?
      letra = letraN;
      break;
    case 'o':
      char letraO[6][5] = {
	{' ', ' ', 'O', ' ', ' '},
	{' ', 'O', ' ', 'O', ' '},
	{' ', 'O', ' ', 'O', ' '},
	{' ', 'O', ' ', 'O', ' '},
	{' ', 'O', ' ', 'O', ' '},
	{' ', 'O', ' ', 'O', ' '},
	{' ', ' ', 'O', ' ', ' '},
      };
      letra = letraO;
      break;
    case 'p':
      char letraP[6][5] = {
	{' ', 'P', 'P', ' ', ' '},
	{' ', 'P', ' ', 'P', ' '},
	{' ', 'P', ' ', 'P', ' '},
	{' ', 'P', 'P', ' ', ' '},
	{' ', 'P', ' ', ' ', ' '},
	{' ', 'P', ' ', ' ', ' '},
	{' ', 'P', ' ', ' ', ' '},
      };
      letra = letraP;
      break;
    case 'q':
      char letraQ[6][5] = {
	{' ', ' ', 'Q', ' ', ' '},
	{' ', 'Q', ' ', 'Q', ' '},
	{' ', 'Q', ' ', 'Q', ' '},
	{' ', 'Q', ' ', 'Q', ' '},
	{' ', 'Q', ' ', 'Q', ' '},
	{' ', 'Q', 'Q', 'Q', ' '},
	{' ', ' ', 'Q', 'Q', ' '},
      };
      letra = letraQ;
      break;
    case 'r':
      char letraR[6][5] = {
	{' ', 'R', 'R', ' ', ' '},
	{' ', 'R', ' ', 'R', ' '},
	{' ', 'R', ' ', 'R', ' '},
	{' ', 'R', 'R', ' ', ' '},
	{' ', 'R', ' ', 'R', ' '},
	{' ', 'R', ' ', 'R', ' '},
	{' ', 'R', ' ', 'R', ' '},
      };
      letra = letraR;
      break;
    case 's':
      char letraS[6][5] = {
	{' ', ' ', 'S', 'S', ' '},
	{' ', 'S', ' ', ' ', ' '},
	{' ', 'S', ' ', ' ', ' '},
	{' ', ' ', 'S', ' ', ' '},
	{' ', ' ', ' ', 'S', ' '},
	{' ', ' ', ' ', 'S', ' '},
	{' ', 'S', 'S', ' ', ' '},
      };
      letra = letraS;
      break;
    case 't':
      char letraT[6][5] = {
	{' ', 'T', 'T', 'T', ' '},
	{' ', ' ', 'T', ' ', ' '},
	{' ', ' ', 'T', ' ', ' '},
	{' ', ' ', 'T', ' ', ' '},
	{' ', ' ', 'T', ' ', ' '},
	{' ', ' ', 'T', ' ', ' '},
	{' ', ' ', 'T', ' ', ' '},
      };
      letra = letraT;
      break;
    case 'u':
      char letraU[6][5] = {
	{' ', 'U', ' ', 'U', ' '},
	{' ', 'U', ' ', 'U', ' '},
	{' ', 'U', ' ', 'U', ' '},
	{' ', 'U', ' ', 'U', ' '},
	{' ', 'U', ' ', 'U', ' '},
	{' ', 'U', ' ', 'U', ' '},
	{' ', ' ', 'U', 'U', ' '},
      };
      letra = letraU;
      break;
    case 'v':
      char letraV[6][5] = {
	{' ', 'V', ' ', 'V', ' '},
	{' ', 'V', ' ', 'V', ' '},
	{' ', 'V', ' ', 'V', ' '},
	{' ', 'V', ' ', 'V', ' '},
	{' ', 'V', ' ', 'V', ' '},
	{' ', 'V', ' ', 'V', ' '},
	{' ', ' ', 'V', ' ', ' '},
      };
      letra = letraV;
      break;
    case 'w':
      char letraW[6][5] = {
	{' ', 'W', ' ', 'W', ' '},
	{' ', 'W', ' ', 'W', ' '},
	{' ', 'W', ' ', 'W', ' '},
	{' ', 'W', ' ', 'W', ' '},
	{' ', 'W', ' ', 'W', ' '},
	{' ', 'W', 'W', 'W', ' '},
	{' ', 'W', ' ', 'W', ' '},
      };
      letra = letraW;
      break;
    case 'x':
      char letraX[6][5] = {
	{' ', 'X', ' ', 'X', ' '},
	{' ', 'X', ' ', 'X', ' '},
	{' ', 'X', ' ', 'X', ' '},
	{' ', ' ', 'X', ' ', ' '},
	{' ', 'X', ' ', 'X', ' '},
	{' ', 'X', ' ', 'X', ' '},
	{' ', 'X', ' ', 'X', ' '},
      };
      letra = letraX;
      break;
    case 'y':
      char letraY[6][5] = {
	{' ', 'Y', ' ', 'Y', ' '},
	{' ', 'Y', ' ', 'Y', ' '},
	{' ', 'Y', ' ', 'Y', ' '},
	{' ', ' ', 'Y', ' ', ' '},
	{' ', ' ', 'Y', ' ', ' '},
	{' ', ' ', 'Y', ' ', ' '},
	{' ', ' ', 'Y', ' ', ' '},
      };
      letra = letraY;
      break;
    case 'z':
      char letraZ[6][5] = {
	{' ', 'Z', 'Z', 'Z', ' '},
	{' ', ' ', ' ', 'Z', ' '},
	{' ', ' ', 'Z', ' ', ' '},
	{' ', ' ', 'Z', ' ', ' '},
	{' ', ' ', 'Z', ' ', ' '},
	{' ', 'Z', ' ', ' ', ' '},
	{' ', 'Z', 'Z', 'Z', ' '},
      };
      letra = letraZ;
      break;
    default:
      printf ("letra no valida");
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
