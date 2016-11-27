#include<stdio.h>
/*
*********************
COMO USAR ESTE CODIGO
*********************
Este codigo carga una direccion de memoria que contiene la letra en arte ASCII,
recibe una matriz de 7x5 y la llena con la letra solicitada, y un char en minuscula de la letra a usar
El ultimo cambio fue propiedad de AcardiaWolfman y asocidos


*/

void
Igualarletra (char letra[7][5], char array[7][5])
{
  int i = 0;
  int j = 0;
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = array[i][j];
	}

    }



}

void
sp (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
ex (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', '#', '#', ' ', ' '},
    {' ', '#', '#', ' ', ' '},
    {' ', '#', '#', ' ', ' '},
    {' ', '#', '#', ' ', ' '},
    {' ', '#', '#', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', '#', '#', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
num1 (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', '1', ' ', ' '},
    {' ', '1', '1', ' ', ' '},
    {' ', ' ', '1', ' ', ' '},
    {' ', ' ', '1', ' ', ' '},
    {' ', ' ', '1', ' ', ' '},
    {' ', ' ', '1', ' ', ' '},
    {' ', '1', '1', '1', ' '}
  };
  Igualarletra (letra, a);
}

void
num2 (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', '2', '2', ' ', ' '},
    {' ', ' ', ' ', '2', ' '},
    {' ', ' ', ' ', '2', ' '},
    {' ', ' ', 'A', ' ', ' '},
    {' ', ' ', ' ', ' ', ' '},
    {' ', 'A', ' ', ' ', ' '},
    {' ', 'A', '2', '2', ' '}
  };
  Igualarletra (letra, a);
}

void
letraA (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'A', 'A', 'A', ' '},
    {' ', 'A', ' ', 'A', ' '},
    {' ', 'A', ' ', 'A', ' '},
    {' ', 'A', 'A', 'A', ' '},
    {' ', 'A', ' ', 'A', ' '},
    {' ', 'A', ' ', 'A', ' '},
    {' ', 'A', ' ', 'A', ' '}
  };
  Igualarletra (letra, a);
}

void
letraB (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'B', 'B', ' ', ' '},
    {' ', 'B', ' ', 'B', ' '},
    {' ', 'B', ' ', 'B', ' '},
    {' ', 'B', 'B', ' ', ' '},
    {' ', 'B', ' ', 'B', ' '},
    {' ', 'B', ' ', 'B', ' '},
    {' ', 'B', 'B', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraC (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', 'C', 'C', ' '},
    {' ', 'C', ' ', ' ', ' '},
    {' ', 'C', ' ', ' ', ' '},
    {' ', 'C', ' ', ' ', ' '},
    {' ', 'C', ' ', ' ', ' '},
    {' ', 'C', ' ', ' ', ' '},
    {' ', ' ', 'C', 'C', ' '}
  };
  Igualarletra (letra, a);
}

void
letraD (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'D', 'D', ' ', ' '},
    {' ', 'D', ' ', 'D', ' '},
    {' ', 'D', ' ', 'D', ' '},
    {' ', 'D', ' ', 'D', ' '},
    {' ', 'D', ' ', 'D', ' '},
    {' ', 'D', ' ', 'D', ' '},
    {' ', 'D', 'D', ' ', ' '}
  };

  Igualarletra (letra, a);
}



void
letraE (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'E', 'E', 'E', ' '},
    {' ', 'E', ' ', ' ', ' '},
    {' ', 'E', ' ', ' ', ' '},
    {' ', 'E', 'E', ' ', ' '},
    {' ', 'E', ' ', ' ', ' '},
    {' ', 'E', ' ', ' ', ' '},
    {' ', 'E', 'E', 'E', ' '}
  };
  Igualarletra (letra, a);
}

void
letraF (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'F', 'F', 'F', ' '},
    {' ', 'F', ' ', ' ', ' '},
    {' ', 'F', ' ', ' ', ' '},
    {' ', 'F', 'F', ' ', ' '},
    {' ', 'F', ' ', ' ', ' '},
    {' ', 'F', ' ', ' ', ' '},
    {' ', 'F', ' ', ' ', ' '}
  };
  Igualarletra (letra, a);
}


void
letraG (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', 'G', 'G', ' '},
    {' ', 'G', ' ', 'G', ' '},
    {' ', 'G', ' ', ' ', ' '},
    {' ', 'G', 'G', 'G', ' '},
    {' ', 'G', ' ', 'G', ' '},
    {' ', 'G', ' ', 'G', ' '},
    {' ', ' ', 'G', ' ', ' '}
  };
  Igualarletra (letra, a);
}


void
letraH (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'H', ' ', 'H', ' '},
    {' ', 'H', ' ', 'H', ' '},
    {' ', 'H', ' ', 'H', ' '},
    {' ', 'H', 'H', 'H', ' '},
    {' ', 'H', ' ', 'H', ' '},
    {' ', 'H', ' ', 'H', ' '},
    {' ', 'H', ' ', 'H', ' '}
  };
  Igualarletra (letra, a);
}

void
letraI (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'I', 'I', 'I', ' '},
    {' ', ' ', 'I', ' ', ' '},
    {' ', ' ', 'I', ' ', ' '},
    {' ', ' ', 'I', ' ', ' '},
    {' ', ' ', 'I', ' ', ' '},
    {' ', ' ', 'I', ' ', ' '},
    {' ', 'I', 'I', 'I', ' '}
  };
  Igualarletra (letra, a);
}

void
letraJ (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {'J', 'J', 'J', 'J', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {'J', ' ', 'J', ' ', ' '},
    {' ', 'J', 'J', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraK (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'K', ' ', 'K', ' '},
    {' ', 'K', ' ', 'K', ' '},
    {' ', 'K', 'K', ' ', ' '},
    {' ', 'K', ' ', 'K', ' '},
    {' ', 'K', ' ', 'K', ' '},
    {' ', 'K', ' ', 'K', ' '},
    {' ', 'K', ' ', 'K', ' '}
  };
  Igualarletra (letra, a);
}

void
letraL (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', ' ', ' ', ' '},
    {' ', 'L', 'L', 'L', ' '}
  };
  Igualarletra (letra, a);
}

void
letraM (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'M', ' ', 'M', ' '},
    {' ', 'M', 'M', 'M', ' '},
    {' ', 'M', ' ', 'M', ' '},
    {' ', 'M', ' ', 'M', ' '},
    {' ', 'M', ' ', 'M', ' '},
    {' ', 'M', ' ', 'M', ' '},
    {' ', 'M', ' ', 'M', ' '}
  };
  Igualarletra (letra, a);
}

void
letraN (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', ' ', 'N', ' '},
    {' ', ' ', ' ', 'N', ' '},
    {' ', 'N', ' ', 'N', ' '},
    {' ', 'N', 'N', 'N', ' '},
    {' ', 'N', ' ', 'N', ' '},
    {' ', 'N', ' ', ' ', ' '},
    {' ', 'N', ' ', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraO (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', 'O', ' ', ' '},
    {' ', 'O', ' ', 'O', ' '},
    {' ', 'O', ' ', 'O', ' '},
    {' ', 'O', ' ', 'O', ' '},
    {' ', 'O', ' ', 'O', ' '},
    {' ', 'O', ' ', 'O', ' '},
    {' ', ' ', 'O', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraP (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'P', 'P', ' ', ' '},
    {' ', 'P', ' ', 'P', ' '},
    {' ', 'P', ' ', 'P', ' '},
    {' ', 'P', 'P', ' ', ' '},
    {' ', 'P', ' ', ' ', ' '},
    {' ', 'P', ' ', ' ', ' '},
    {' ', 'P', ' ', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraQ (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', 'Q', ' ', ' '},
    {' ', 'Q', ' ', 'Q', ' '},
    {' ', 'Q', ' ', 'Q', ' '},
    {' ', 'Q', ' ', 'Q', ' '},
    {' ', 'Q', 'Q', 'Q', ' '},
    {' ', 'Q', ' ', 'Q', ' '},
    {' ', ' ', 'Q', ' ', 'Q'}
  };
  Igualarletra (letra, a);
}

void
letraR (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'R', 'R', ' ', ' '},
    {' ', 'R', ' ', 'R', ' '},
    {' ', 'R', ' ', 'R', ' '},
    {' ', 'R', 'R', ' ', ' '},
    {' ', 'R', ' ', 'R', ' '},
    {' ', 'R', ' ', 'R', ' '},
    {' ', 'R', ' ', 'R', ' '}
  };
  Igualarletra (letra, a);
}

void
letraS (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', ' ', 'S', 'S', ' '},
    {' ', 'S', ' ', ' ', ' '},
    {' ', 'S', ' ', ' ', ' '},
    {' ', ' ', 'S', ' ', ' '},
    {' ', ' ', ' ', 'S', ' '},
    {' ', ' ', ' ', 'S', ' '},
    {' ', 'S', 'S', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraT (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'T', 'T', 'T', ' '},
    {' ', ' ', 'T', ' ', ' '},
    {' ', ' ', 'T', ' ', ' '},
    {' ', ' ', 'T', ' ', ' '},
    {' ', ' ', 'T', ' ', ' '},
    {' ', ' ', 'T', ' ', ' '},
    {' ', ' ', 'T', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraU (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'U', ' ', 'U', ' '},
    {' ', 'U', ' ', 'U', ' '},
    {' ', 'U', ' ', 'U', ' '},
    {' ', 'U', ' ', 'U', ' '},
    {' ', 'U', ' ', 'U', ' '},
    {' ', 'U', ' ', 'U', ' '},
    {' ', ' ', 'U', 'U', ' '}
  };
  Igualarletra (letra, a);
}

void
letraW (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'W', ' ', 'W', ' '},
    {' ', 'W', ' ', 'W', ' '},
    {' ', 'W', ' ', 'W', ' '},
    {' ', 'W', ' ', 'W', ' '},
    {' ', 'W', ' ', 'W', ' '},
    {' ', 'W', 'W', 'W', ' '},
    {' ', 'W', ' ', 'W', ' '}
  };
  Igualarletra (letra, a);
}


void
letraV (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'V', ' ', 'V', ' '},
    {' ', 'V', ' ', 'V', ' '},
    {' ', 'V', ' ', 'V', ' '},
    {' ', 'V', ' ', 'V', ' '},
    {' ', 'V', ' ', 'V', ' '},
    {' ', 'V', ' ', 'V', ' '},
    {' ', ' ', 'V', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraX (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', ' ', 'X', ' ', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '},
    {' ', 'X', ' ', 'X', ' '}
  };
  Igualarletra (letra, a);
}

void
letraY (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'Y', ' ', 'Y', ' '},
    {' ', 'Y', ' ', 'Y', ' '},
    {' ', 'Y', ' ', 'Y', ' '},
    {' ', ' ', 'Y', ' ', ' '},
    {' ', ' ', 'Y', ' ', ' '},
    {' ', ' ', 'Y', ' ', ' '},
    {' ', ' ', 'Y', ' ', ' '}
  };
  Igualarletra (letra, a);
}

void
letraZ (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'Z', 'Z', 'Z', ' '},
    {' ', ' ', ' ', 'Z', ' '},
    {' ', ' ', ' ', 'Z', ' '},
    {' ', ' ', 'Z', ' ', ' '},
    {' ', 'Z', ' ', ' ', ' '},
    {' ', 'Z', ' ', ' ', ' '},
    {' ', 'Z', 'Z', 'Z', ' '}
  };
  Igualarletra (letra, a);
}


void
alfabetoASCII (char letra[7][5], char c)
{
  switch (c)
    {
    case 'a':
      letraA (letra);
      break;
    case 'b':
      letraB (letra);
      break;
    case 'c':
      letraC (letra);
      break;
    case 'd':
      letraD (letra);
      break;
    case 'e':
      letraE (letra);
      break;
    case 'f':
      letraF (letra);
      break;
    case 'g':
      letraG (letra);
      break;
    case 'h':
      letraH (letra);
      break;
    case 'i':
      letraI (letra);
      break;
    case 'j':
      letraJ (letra);
      break;
    case 'k':
      letraK (letra);
      break;
    case 'l':
      letraL (letra);
      break;
    case 'm':
      letraM (letra);
      break;
    case 'n':
      letraN (letra);
      break;
    case 'o':
      letraO (letra);
      break;
    case 'p':
      letraP (letra);
      break;
    case 'q':
      letraQ (letra);
      break;
    case 'r':
      letraR (letra);
      break;
    case 's':
      letraS (letra);
      break;
    case 't':
      letraT (letra);
      break;
    case 'u':
      letraU (letra);
      break;
    case 'v':
      letraV (letra);
      break;
    case 'w':
      letraW (letra);
      break;
    case 'x':
      letraX (letra);
      break;
    case 'y':
      letraY (letra);
      break;
    case 'z':
      letraZ (letra);
      break;
    case '0':
      ex (letra);
      break;
    case '1':
      num1 (letra);
      break;
    case '2':
      num2 (letra);
      break;
    case ' ':
      sp (letra);
      break;
    default:
      printf ("letra no existe");

    }
}
