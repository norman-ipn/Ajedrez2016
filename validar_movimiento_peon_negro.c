int
validar_peon_negro (int posi_x , int posi_y , int posf_y ,int posf_x, char tablero[8][8])
{
  int resultado;
 if (posi_x == posf_x){
  
 resultado=-1; 
 }
 if (resultado==-1){
  
  return resultado;
  
 }
 if (tablero[posf_x][posf_y]=='\0'){
 resultado=1; 
  
  
 }

  return resultado;
 
 
 
}
