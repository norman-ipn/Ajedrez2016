#include "ia.h"
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
    
    tambien va a modificar las coordenadas para que apunten a la pieza podemos comer y las coordenas de la pieza que
    tenemos que mover para lograrlo
  */ 
  int
  podemosComer(struct tablero *un_tablero)
  {
    int valor;
    return valor;
  }


 /*  ============================== Podemos ser Comidos ======================= 
  - ¿Que hace?
  - Se va a encargar de revisar el tablero y ver si estamos apunto de ser comidos, de ser no ser a si regresa 0
    y si es posible regresa el valor asignado (8 por ejemplo si nos van a comer a un caballo)
    
    tambien va a modificar las coordenadas para que apunten a la pieza que esta por ser comida y va a 
    poner las coordenadas de nuestro acante*/
  
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
  escapar(struct tablero *un_tablero)
  {
    
  }


  /* ============================== Atacar =======================
  - ¿Que hace?
  - Se va a encargar de tomando las coordenadas de la pieza que podemos comer, realizar la accion de comerla
  */
  void
  atacar(struct tablero *un_tablero)
  {
  }


  /* ============================== Movimiento Aleatorio =======================
  - ¿Que hace?
  - Se va a encargar de generar un movimiento de pieza aleatorio si no vamos a comer o ser comidos
  */
  void
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
          /*A las coordenadas se les va a asignar la semilla rand para que mueva en un numero no mayor a 8 y verificar la casilla*/
         /* Es un Ejemplo por que no se usar el rand xd :*/
          int x2,y2;
          x2=rand()%7;
          y2=rand()%7;
          validar_movimiento_torre(tablero,x1,y1,x2,y2);
          //Horizontal
          for(k=i;k<8;k++)
          {
            //validaMovimiento() 
          }
     
          //Vertical

/* NO se necesita volver a hacer ciclos y evaluar movimientos, para eso se hicieron las funciones de movimientos antes*/
          
          //Horizontal
          for(k=i;k<8;k++)
          {
            //validaMovimiento() 
          }
        }
        if(un_tablero == 'A')
        {
        }
        if(un_tablero == 'P')
        {
        }
        if(un_tablero == 'C')
        {
        }
        if(un_tablero == 'D')
      }
    }
    
  }

  /* ============================== Funciones AUXILIARES =======================
  /* ============================== Busca movimiento Valido =======================
  - ¿Que hace?
  - Se encarga de ver que movimientos posibles tiene nuestras piezas
  */

/*  #include <tablero.h> */

 /* Sólo es un testing, de aquí se sacarán las jugadas que irán en las condicionales, se sigue trabajando en condicionales con la función principaly tablero, se trabaja en función principal, la función recibirá las coordenadasm en cuanto se tenga la función solicitada se ingresará en el testing, por lo tanto, se coloca función en void, en espera de las demás funciones */

/*
void
testing () 

  if (tablero[6][4] = 'P';)
    {
    printf}

  if (tablero[0][1] = 'c';)
    {
    printf}

   if (tablero[4][4] = 'P';)
    {
    printf}

  if (tablero[2][2] = 'c';)
    {
    printf}

  if (tablero[7][1] = 'C';)
    {
    printf}

  if (tablero[0][6] = 'c';)
    {
    printf}

  if (tablero[5][0] = 'C';)
    {
    printf}

  if (tablero[2][7] = 'c';)
    {
    printf}

  if (tablero[6][3] = 'P';)
    {
    printf}

  if (tablero[3][4] = 'c';)
    {
    printf}

  if (tablero[3][1] = 'C';)
    {
    printf}

  if (tablero[4][2] = 'c';)
    {
    printf}

  if (tablero[6][1] = 'P';)
    {
    printf}

  if (tablero[1][6] = 'p';)
    {
    printf}

  if (tablero[6][6] = 'P';)
    {
    printf}

  if (tablero[4][6] = 'c';)
    {
    printf}

  if (tablero[6][2] = 'P';)
    {
    printf}

  if (tablero[0][5] = 'a';)
    {
    printf}
 */

