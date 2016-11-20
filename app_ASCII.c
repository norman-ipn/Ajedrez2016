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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
}

void
letraJ (char letra[7][5])
{
  int i = 0;
  int j = 0;
  char a[7][5] = {
    {' ', 'J', 'J', 'J', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '},
    {' ', 'J', 'J', ' ', ' '},
    {' ', ' ', 'J', ' ', ' '}
  };
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  letra[i][j] = a[i][j];
	}
    }
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
    default:
      printf ("letra no existe");

    }
}

void
imprimeJaque ()
{
  int i = 0;
  int j = 0;
  char jaque[7][27];
  char j0[7][5];
  char a[7][5];
  char q[7][5];
  char u[7][5];
  char e[7][5];
  alfabetoASCII (j0, 'j');
  alfabetoASCII (a, 'a');
  alfabetoASCII (q, 'q');
  alfabetoASCII (u, 'u');
  alfabetoASCII (e, 'e');
  for (i = 0; i < 7; i = i + 1)
    {
      for (j = 0; j < 5; j = j + 1)
	{
	  jaque[i][j] = j0[i][j];
	}
      for (j = 5; j < 10; j = j + 1)
	{
	  jaque[i][j] = a[i][j-5];
	}
      for (j = 10; j < 15; j = j + 1)
	{
	  jaque[i][j] = q[i][j-10];
	}
      for (j = 15; j < 20; j = j + 1)
	{
	  jaque[i][j] = u[i][j-15];
	}
      for (j = 20; j < 25; j = j + 1)
	{
	  jaque[i][j] = e[i][j-20];
	}
      jaque[i][25] = '\n';
      jaque[i][26] = '\0';
    }
  for (i = 0; i < 7; i = i + 1)
    {
      printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 
      jaque[i][0],
      jaque[i][1],
      jaque[i][2],
      jaque[i][3],
      jaque[i][4],
      jaque[i][5],
      jaque[i][6],
      jaque[i][7],
      jaque[i][8],
      jaque[i][9],
      jaque[i][10],
      jaque[i][11],
      jaque[i][12],
      jaque[i][13],
      jaque[i][14],
      jaque[i][15],
      jaque[i][16],
      jaque[i][17],
      jaque[i][18],
      jaque[i][19],
      jaque[i][20],
      jaque[i][21],
      jaque[i][22],
      jaque[i][23],
      jaque[i][24],
      jaque[i][25],
      jaque[i][26]
      );
      usleep (1000);
    }
}

int
main (int c, char **args)
{
  imprimeJaque ();
  return 0;
}
