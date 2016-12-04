/*#include "ia.h"
#include "time.h"



  
  /* ============================== FUNCION PRINCIPAL ======================= */ 
  void
  tirar_ai(struct tablero *un_tablero)
  {
    /* Revisa si podemos comer y cuanto ganariamos*/
    int comer = podemosComer(un_tablero);
    
    /* Revisa si nos pueden comer y cuanto perderiamos*/
    int comidos = podemosSerComidos(un_tablero);
    
    /* Es aqui donde toma la desicion de que hacer */
    /* Si no podemos ni comer nada ni estamos por ser comidos pues mueve algo random*/
    if(comer == 0 && comidos == 0)
    {
      MovimientoRandom(un_tablero);
      return;
    }

    /* Si  podemos comer o ser comido decide que es lo mejor y hazlo*/
    if(comer <= comidos)
      escapar(un_tablero);
    else
      ataca(un_tablero);
    
  return;
  }

  /* =========== FUNCIONES EN LAS QUE EVALUAMOS LA SITUACION ============================*/

  /* ============================== Podemos comer ======================= 
  - ¿Que hace?
  - Se va a encargar de revisar el tablero y ver si podemos comer una pieza, de ser no ser asi regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si podemos comernos un caballo)
    
    tambien va a modificar las coordenadas para que apunten a la pieza podemos comer y las coordenas de la peiza que
    tenemos que mover para lograrlo
  */ 
  int
  podemosComer(struct tablero *un_tablero)
  {
    int valor;
    return valor;
  }


   ============================== Podemos ser Comidos ======================= 
  - ¿Que hace?
  - Se va a encargar de revisar el tablero y ver si estamos apunto de ser comidos, de ser no ser a si regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si nos van a comer a un caballo)
    
    tambien va a modificar las coordenadas para que apunten a la pieza que esta por ser comida y va a 
    poner las coordenadas de nuestro acante
  
  int
  podemosSerComidos(struct tablero *un_tablero)
  {
    int valor;
    return valor;
  }

  /* =========== FUNCIONES EN LAS QUE ACTUAMOS ==============================================*/
  /* ============================== Escapar =======================
  - ¿Que hace?
  - Se va a encargar de encontrar una pieza y buscar un movimiento valido y hacerlo
  */
  void
  MovimientoRandom(struct tablero *un_tablero)
  {
    
  }


  /* ============================== Escapar =======================
  - ¿Que hace?
  - Se va a encargar de tomando las coordenadas de la pieza que podemos comer, realizar la accion de comerla
  */
  void
  atacar(struct tablero *un_tablero)
  {
  }


  /* ============================== Escapar =======================
  - ¿Que hace?
  - Se va a encargar de tomando las coordenadas de la pieza que podemos comer, realizar la accion de comerla
  */
  void
  MovimientoRandom(struct tablero *un_tablero)
  {
    /* Genera una semilla Random */
    srand (time(NULL));
  }

*/
