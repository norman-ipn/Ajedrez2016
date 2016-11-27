
/* Esta función servirá para analizar los lugares a los que puede moverse una pieza, si el movimiento 
es valido regresa 1, sino regresa 0 */

int
analisis_de_tablero  (char tablero[8][8], char pieza, int fila, int columna, int fila_nueva, int columna_nueva)   {

   if(pieza == P){
         if (fila == 66){     /* 66 es su código ASCII de B*/
               if (columna == columna_nueva){ 
                          if ((fila + 1) == fila_nueva | (fila + 2) == fila nueva ){
                                     return 1;
                          }
                          else{
                                     return 0;
                          }
               }
               return 0;
          }
          
/* pueden ir agregando las demás piezas, se toman como referencia que las iniciales en las piezas en mayus son  Blancas y en 
en min son negras, estaré actualizando el documento */
                      
                     
               
         
         
   
   
      
