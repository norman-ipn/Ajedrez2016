int
validar_mov_peon_blanco (int posicion_ini_x, int posicion_ini_y, int posicion_y, int posicion_x, char tablero[8][8])
{
  if(tablero [posicion_ini_x][posicion_ini_y]=='P')
  {
    for(int i=0;i<8;i=i+1;)
    {
     if(tablero[i][2])
     {
       if(posicion_y==posicion_ini_y)
       {
         if(posicion_x==1||posicion_x==2)
         {
           return 1;
         }
       }   
      else
       {
        return -1;
       }
     }
    }
  }
  else
     { 
    return -1;
     }
}
