int
validar_comer_al_paso (char tablero[8][8], int cord_x, int cord_y)
{
  if (tablero[cord_y][cord_x] == 'P')
   {
    if(cord_y == 4)  
    {
     if((tablero[cord_y][cord_x + 1]) || (tablero[cord_y][cord_x - 1]) == 'p') 
     {
       return 1;
     }  
    }
   }
  if (tablero[cord_y][cord_x] == 'p')
   {
    if(cord_y == 3 )  
    {
     if((tablero[cord_y][cord_x + 1]) || (tablero[cord_y][cord_x - 1]) == 'P') 
     {
       return 1;
     }  
    }
   }
 return 0;
}
