int
validar_mov_peon_blanco (int posicion_ini_x, int posicion_ini_y, int posicion_y, int posicion_x, char tablero[8][8])
{
  if(tablero [posicion_ini_x][posicion_ini_y]=='P')
  {
  /*Es mejor usar case para agregar la parte de comer dependiendo en la casilla que se encuentra y asi sea mas sencillo validar la funcion de comer al paso.*/
    for(int i=0;i<8;i=i+1;)
    {
     if(tablero[i][2]) /*Cuando el peón se encuentra en su posición inicial*/
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
    for(int j=3;j<8;j=j+1;) /*Cuando el peón se encuentra en una posición diferente a la inicial*/
    {
     if(tablero[i][j])
     {
       if(posicion_y==posicion_ini_y)
       {
         if(posicion_x==1)
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
  
  
/*
int
validar_mov_peon_blanco (int posicion_ini_x, int posicion_ini_y, int posicion_y, int posicion_x, char tablero[8][8])
{
    if(tablero[posicion_ini_x][posicion_ini_y]=='P')
    {
    for(int i=0;i<8;i=i+1;)
    {
     if(tablero[i][2]) 
     {
       if(posicion_y==posicion_ini_y||tablero[posicion_x+1][posicion_y]!=' '||tablero[posicion_x-1][posicion_y]!=' ')
       {
         if(posicion_y==1&&tablero[posicion_x][posicion_y-1]!=' ')  Incluye la validacion en caso de que coma alguna pieza
         {
           return 1;   Solo se necesita un for para de posicion_y=3 a posicion_y=8
         }
        }
       }
      }
      else{
         return -1;
      }     
}
*/  
  

