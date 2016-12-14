#include "ia.h"
#include "time.h"
#include "stdlib.h"

  
  /* ============================== FUNCIÓN PRINCIPAL ======================= */ 
  void
  responder_jugada(struct tablero *el_tablero, int turno, char *respuesta)
  {
    /* Revisa si podemos comer y cuanto ganaríamos*/
    int comer = podemosComer(un_tablero);
    
  
  
    
    /* Revisa si nos pueden comer y cuanto perderíamos*/
    int comidos = podemosSerComidos(un_tablero);
    
    /* Es aquí donde toma la decisión de que hacer */
    /* Si no podemos ni comer nada ni estamos por ser comidos pues mueve algo random*/
    if(comer == 0 && comidos == 0)
    {
      int movimientoIndicado = MovimientoRandom(un_tablero);
      return;
    }

    /* Si  podemos comer o ser comido decide que es lo mejor y hazlo*/
    if(comer <= comidos)
      int movimientoIndicado = escapar(un_tablero);
    else
      int movimientoIndicado = ataca(un_tablero);
    
  return movimientoIndicado;
  }

  /* =========== FUNCIONES EN LAS QUE EVALUAMOS LA SITUACIÓN ============================*/

  /* ============================== Podemos comer ======================= 
  - ¿Qué hace?
  - Se va a encargar de revisar el tablero y ver si podemos comer una pieza, de ser no ser asi regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si podemos comernos un caballo)
    
    También va a modificar las coordenadas para que apunten a la pieza podemos comer y las coordenas de la pieza que
    tenemos que mover para lograrlo
  */ 
  int
  podemosComer(struct tablero *un_tablero)
  {
    int valor;
    return valor;
  }


 /*  ============================== Podemos ser Comidos ======================= 
  - ¿Qué hace?
  - Se va a encargar de revisar el tablero y ver si estamos a punto de ser comidos, de ser no ser a si regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si nos van a comer a un caballo)
    
    También va a modificar las coordenadas para que apunten a la pieza que esta por ser comida y va a 
    poner las coordenadas de nuestro atacante*/
  
  int
  podemosSerComidos(struct tablero *un_tablero)
  {
    int valor;
    return valor;
  }

  /* =========== FUNCIONES EN LAS QUE ACTUAMOS ==============================================*/

int revisar_casilla_peon(int x1,int y1)
  {
    int i=x1,j=y1;
    if(tablero[i+1][j+1]!=' ')
    {
      return -1;
    }
    if(tablero[i-1][j+1]!=' ')
    {
      return -1;
    }
    return 0;
  }
/*Funcion para revisar la casilla cuando escogemos un peón, revisa si sus dos esquinas superiores están amenazadas, si regresa -1
quiere decir que hay una pieza en una de las esquinas.*/

  /* ============================== Escapar =======================
  - ¿Qué hace?
  - Se va a encargar de encontrar una pieza y buscar un movimiento valido y hacerlo
  */
  int
  escapar(struct tablero *un_tablero)
  {
    if(un_tablero=='P')
    {
    if(revisar_casilla_peon==-1)
    {
      tablero[x1][y1]=tablero[x1][y1+1];
    }
    }
      
    return movimiento;
  }


  /* ============================== Atacar =======================
  - ¿Qué hace?
  - Se va a encargar de tomando las coordenadas de la pieza que podemos comer, realizar la acción de comerla
  x1=Posición x Inicial   y1=Posición y inicial
  */
  int
  atacar(struct tablero *un_tablero)
  {
   
    if(un_tablero=='P')
    {
      if(revisar_casilla_peon(x1,y1)==-1)
      {
        if(tablero[x1+1][y1+1]!=' ')
        {
          tablero[x1+1][y1+1]=tablero[x1][y1];
          tablero[x1][y1]=' ';
        }
        else
        {
          tablero[x1-1][y1+1]=tablero[x1][y1];
          tablero[x1][y1]=' ';
        }
      }
      return movimiento;
    }
    return movimiento;
  }


  /* ============================== Movimiento Aleatorio =======================
  - ¿Qué hace?
  - Se va a encargar de generar un movimiento de pieza aleatorio si no vamos a comer o ser comidos
  */
  int
  MovimientoRandom(struct tablero *un_tablero)
  {
  
    /* Genera una semilla Random */
    srand (time(NULL));
    
    int i, j, k;
    for(i=0;i<8;i++)
    {
      for(j=0;j<8;i++)
      {
        if(un_tablero == 'T')
        {
          /*A las coordenadas se les va a asignar la semilla rand para que mueva en un número no mayor a 8 y verificar la casilla*/
          int x2,y2;
          x2=rand()%8;
          y2=rand()%(N+1);
          validar_movimiento_torre(tablero,x1,y1,x2,y2);
        }
        if(un_tablero == 'A')
        {
          int x2,y2;
          x2=rand()%8;
          y2=rand()%(N+1);
          validar_movimiento_alfil(tablero,x1,y1,x2,y2);
        }
        if(un_tablero == 'P')
        {
          int x2,y2;
          x2=rand()%8;
          y2=rand()%(N+1);
          validar_movimiento_peon(tablero,x1,y1,x2,y2);
        }
        if(un_tablero == 'C')
        {
          int x2,y2;
         x2=rand()%8;
          y2=rand()%(N+1);
          validar_movimiento_caballo(tablero,x1,y1,x2,y2);
        }
        if(un_tablero == 'D')
        {
          int x2,y2;
          x2=rand()%8;
          y2=rand()%(N+1);
          validar_movimiento_reina(tablero,x1,y1,x2,y2);
        }
      }
    }
    return movimiento;
  }

  /* ============================== Funciones AUXILIARES =======================
  /* ============================== Busca movimiento Valido =======================
  - ¿Qué hace?
  - Se encarga de ver que movimientos posibles tiene nuestras piezas
  */

