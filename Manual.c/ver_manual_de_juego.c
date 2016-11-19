#include <stdio.h>
void
instrucciones (char tablero[8][8])
{ char comando= '0';
  char orden='\n' 
  char a_acento = 160;
  char e_acento = 130;
  char i_acento = 161;
  char o_acento = 162;
  char u_acento = 163;
  char admiracion = 173;
  printf("\n %cBienvenido a Ajedrez-ESCOM%c, A continuaci%cn se presentar%cn las instrucciones del juego por si eres nuevo en el ajedrez y deseas aprender las reglas b%csicas de juego. \n",admiracion,admiracion, o_acento, a_acento, a_acento);
       printf("Presiona Enter cada vez que termine una explicaci%cn para continuar\n",o_acento);
       printf("Selecciona una opción de la que quieras saber: 1:Dezplagar todas las instrucciones,2:Caballo,3:Torre,4:Peon,5:Reyna,6:Alfil,7:Rey,8:Enroque,9:Condiciones de jaque.\n");
       printf("\n10:Condiciones de Jaque-Mate. \n");
  comando= getchar ();
   while(orden != '\n'){
   switch(comando){
                   case '1': reglas_basicas(tablero);
                           reglas_torre( ):
                           reglas_enroque( );
                           reglas_peon( );
                           reglas_caballo( );
                           reglas_alfil( );
                           reglas_reyna( );
                           reglas_rey( );
                           reglas_jaque( );
                           reglas_jaque_mate( );
                           break;
                   case '2': reglas_caballo( );
                           break;
                   case '3': reglas_torre( ):
                           break
                   case '4': reglas_peon( );
                           break;
                   case '5': reglas_reyna( );
                           break;
                   case '6': reglas_alfil( );
                           break;
                   case '7': reglas_rey( );
                           break;
                   case '8': reglas_enroque( );
                           break;
                   case '9': reglas_jaque( );
                           break;
                   case 10: reglas_jaque_mate( );
                           break;
                   case '\n'
                           break;
                   default :
                             printf("\n Opcion invalida.\n");
                             return 0; /*0 =error*/
                           break;
                   }
                       printf("\n Si esa es toda la informacion que necesitas, presiona ENTER, o introduce otra opción\n")
                       orden=getchar();
                   comando=orden;
              }
  return 1;}

