void coronar_peon(char tablero, char entrada, int x, int y) /* char entrada es el valor que se quiere tomar, ya sea dama, torre, caballo o alfil.
char tablero es la matriz en la que se encuentran todos los datos de nuestro tablero , x es la posicion en "x" de nuestro peón, y es la posición en "y" */
{
  if(tablero[x][y]='P') /* Cuando el peón es blanco */
  {
    switch(entrada)
    {
      case 'D':
        tablero[x][y]='D';
        break;
      case 'T':
        tablero[x][y]='T';
        break;
      case 'A':
        tablero[x][y]='A';
        break;
      case 'C':
        tablero[x][y]='C';
        break;
      default:
        printf("\n Pieza no válida\n");
    }    
  }
  
  else /* Cuando el peón es negro */
  {
    switch(entrada)
    {
      case 'd':
        tablero[x][y]='d';
        break;
      case 't':
        tablero[x][y]='t';
        break;
      case 'a':
        tablero[x][y]='a';
        break;
      case 'c':
        tablero[x][y]='c';
        break;
      default:
        printf("\n Pieza no válida\n");
    }
  }
}

  
