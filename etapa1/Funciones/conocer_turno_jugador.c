/*
  la variable turno se recibe desde el main
  cuenta los turnos jugados hasta el momento dentro del ciclo while principal
  esta función retorna 0 si es turno de blancas
  retorna 1 en turno de negras
*/

int
conocer_turno_jugador(int turno)
{
  int contador_turno = turno;
  if((turno % 2) == 0)
  {
    return 0;
  }
  if((turno % 2) == 1)
  {
    return 1;
  }
}
  
