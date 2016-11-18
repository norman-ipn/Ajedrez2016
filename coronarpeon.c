void coronar_peon(char tablero[][], char entrada) /* char entrada es el valor que se quiere tomar, ya sea dama, torre, caballo o alfil.
char tablero es la posición donde se encuentra el peón */
{
  if(tablero[][]='P')
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
  
  else
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

  
