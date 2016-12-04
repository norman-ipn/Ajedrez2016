#include "ia.h"
#include "time.h"

/* === Funcion principal del Sistema de AI =======

Vamos a considerar que cuando jugemos contra un usuario siempre seran ellos piezas blancas

y que la AI va a interpretar que hay piezas mas importantes que otras
Torre = 8
Cabello = 8
Alfil = 8

Rey = 100
Reina = 20
Peon = 1

*/

/* ============ Variables Globales ============== */

/* Aqui estaran las coodenadas que el sistema determine son 
las de la pieza del adversario que esta apunto de comer una pieza importante
asi como las de nuestra pieza a ser comida */

int coordenadaDeAtacanteX = 0;
int coordenadaDeAtacanteY = 0;
int coordenadaDePiezaAserComidaX = 0;
int coordenadaDePiezaAserComidaY = 0;


/* Aqui estaran las coodenadas que el sistema determine son a la que deberiamos movernos para comer una pieza*/

int coordenadaAAtacarX = 0;
int coordenadaAAtacarY = 0;
int coordenadaDePiezaAmover = 0;
int coordenadaDePiezaAmover = 0;



/* ============================== FUNCION PRINCIPAL ======================= */ 
void
tirar_ai(struct tablero *un_tablero)
{
  /* Genera una semilla Random */
  srand (time(NULL));
  
  /* Revisa si podemos comer y cuanto ganariamos*/
  int comer = podemosComer(*un_tablero);
	
  /* Revisa si nos pueden comer y cuanto perderiamos*/
  int comidos = podemosSerComidos(*un_tablero);
	
  /* Es aqui donde toma la desicion de que hacer */
  if(comer <= comidos)
    escapar(*un_tablero);
  else
    ataca(*un_tablero)
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


/* ============================== Podemos ser Comidos ======================= 
- ¿Que hace?
- Se va a encargar de revisar el tablero y ver si estamos apunto de ser comidos, de ser no ser a si regresa 0
  y si es posible regresa el valor asignado (8 por ejemplo si nos van a comer a un caballo)
  
  tambien va a modificar las coordenadas para que apunten a la pieza que esta por ser comida y va a 
  poner las coordenadas de nuestro acante
*/
int
podemosSerComidos(struct tablero *un_tablero)
{
  int valor;
  return valor;
}

/* =========== FUNCIONES EN LAS QUE ACTUAMOS ==============================================*/
/* ============================== Escapar =======================
- ¿Que hace?
- Se va a encargar de tomando las coordenadas de la pieza que esta por ser comida, moverla a una posicion segura
*/
void
escapar(struct tablero *un_tablero)
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
