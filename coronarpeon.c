char /*Creo que deberia ser 'Char' y no 'Void' ya que seria más facil que regresara la pieza que quiere a cambio */
coronar_peon () /*No veo necesario pasar el tablero como parametro, simplemente invocar la función desde antes*/
{
  char Opcion;
  
  printf("Elija que pieza quiere tomar. \n T=Torre \n D=Dama \n A=Alfil \n C=Caballo \n");
  scanf("%c", &Opcion);
  
  return Opcion;
    
}
