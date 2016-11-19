#include <stdio.h>
int
obtener_posicion (int Columna, int Fila) /* esta funcion transforma la columna y la fila a un valor de 1 a 64, columa y fila tienen valor del 0 al 7(por ser de un arreglo de 8x8)*/
{ 
  int i = 0;
  int cuadrante = 0;
   Fila=Fila+1;
    while (Columna != 0 + i)
    {
      i = i + 1;
    }
  cuadrante = (8 * (Fila - 1)) + (i + 1);
  return cuadrante;
}
char
color_remplazo (int columna, int fila,char negra,char blanca) /* Esta funcion regresa un caracter del color sobre el cual la pieza se encontraba antes de desplazarce*/
{ int alterno=0;
  int cuadrante = 0; 
  int j = 1;
  char color = negra;
  int a=0;
    cuadrante = obtener_posicion (columna, fila);
  while (j <= 64)
    {
      if (cuadrante == j)
	{
	  return color;
	}
  if( alterno != 8){
         switch(a){
            case 0:
	      color = blanca;
              a=1;
	      break;
	    case 1:
	      color = negra;
              a=0;
	      break;
	    }
	          }
      if(alterno ==8){
                      alterno=0;
                     }
   alterno=alterno+1;
   j=j+1;
  }
return color;
}

