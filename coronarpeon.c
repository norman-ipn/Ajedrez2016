/* Aquí irá un include con las cabeceras de las funciones */
void coronar_peon(char tablero, char entrada, int x, int y) /* char entrada es el valor que se quiere tomar, ya sea dama, torre, caballo o alfil.
char tablero es la matriz en la que se encuentran todos los datos de nuestro tablero , x es la posicion en "x" de nuestro peón, y es la posición en "y" */
{
  if(tablero[x][y]='P') /* Cuando el peón es blanco */
  {
    switch(entrada)
    {
      case 'D':
        /* Se manda a llamar la función de dama blanca */
        break;
      case 'T':
        /* Se manda a llamar la función de torre blanca */
        break;
      case 'A':
        /* Se manda a llamar la función de alfil blanco */
        break;
      case 'C':
        /* Se manda a llamar la función de caballo blanco */
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
        /* Se manda a llamar la función de dama negra */
        break;
      case 't':
        /* Se manda a llamar la función de torre negra */
        break;
      case 'a':
        /* Se manda a llamar la función de alfil negro */
        break;
      case 'c':
        /* Se manda a llamar la función de caballo negro */
        break;
      default:
        printf("\n Pieza no válida\n");
    }
  }
}

  
