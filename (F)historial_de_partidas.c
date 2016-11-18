/*---------------------CÓDIGO FUENTE DEL HISTORIAL DE PARTIDAS--------------------------

-GUARDA/ACTUALIZA EL REGISTRO DE VICTORIAS DE CADA JUGADOR EN UN ARCHIVO APARTE.
-SE REQUIERE DE UNA FUNCION QUE INDIQUE QUÉ JUGADOR HA GANADO Y CON QUÉ PIEZAS.
-POR LO MIENTRAS ASUMIRÉ QUE EL TIPO DE DATO QUE INDICA LA VICTORIA DE ALGÚN JUGADOR
 ES UN ENTERO:
	0=victoria de jugador 1 con blancas.
	1=victoria de jugador 1 con negras.
	2=victoria de jugador 2 con blancas.
	3=victoria de jugador 2 con negras.
-LA FUNCIÓN SERÁ LLAMADA AL FINAL DE LA PARTIDA
-NOMBRE DE LA FUNCIÓN ES udhist (mnemónico de "update history" o "actualizar historial")
-TIENE COMO PARÁMETRO DE SALIDA UN ENTERO 
	 0: los archivos fueron tratados correctamente.
	-1: no se pudo abrir el archivo "total_partidas.txt".
	-2: no se pudo abrir el archivo "historial.txt".
	-3: error en parametro de entrada.
-SOLO REQUIERE EL RESULTADO DE LA PARTIDA COMO PARÁMETRO DE ENTRADA
-PENDIENTE:
	*RUTA DESTINO DE LOS ARCHIVOS A MANEJAR.
	*NOMBRE PERSONALIZADO PARA JUGADOR 1 Y 2.
*/

#include <stdio.h>
#include <stdlib.h>
int
udhist (int win)
{
  FILE *historial = NULL;
  FILE *t_partidas = NULL;
  int n_partidas = 0;

/*-------------TRATAMIENTO AL ARCHIVO QUE CONTIENE EL NÚMERO DE PARITDAS----------*/

  t_partidas = fopen ("total_partidas.txt", "r");
  if (t_partidas == NULL)

    {
      t_partidas = fopen ("total_partidas.txt", "w+");
    }
  fscanf (t_partidas, "%d", &n_partidas);
  n_partidas = n_partidas + 1;
  t_partidas = fopen ("total_partidas.txt", "w");
  fprintf (t_partidas, "%d", n_partidas);
  fclose (t_partidas);

/*-------------TRATAMIENTO AL ARCHIVO QUE CONTIENE EL HISTORIAL DE RESULTADOS-------*/

  historial = fopen ("historial.txt", "a+");
  if (historial == NULL)

    {
      return -2;
    }
  switch (win)

    {
    case 0:
      fprintf (historial,
	       "\nRESULTADO DE LA PARTIDA %d FUE: VICTORIA DEL JUGADOR 1 CON BLANCAS\n",
	       n_partidas);
      break;
    case 1:
      fprintf (historial,
	       "\nRESULTADO DE LA PARTIDA %d FUE: VICTORIA DEL JUGADOR 1 CON NEGRAS\n",
	       n_partidas);
      break;
    case 2:
      fprintf (historial,
	       "\nRESULTADO DE LA PARTIDA %d FUE: VICTORIA DEL JUGADOR 2 CON BLANCAS\n",
	       n_partidas);
      break;
    case 3:
      fprintf (historial,
	       "\nRESULTADO DE LA PARTIDA %d FUE: VICTORIA DEL JUGADOR 2 CON NEGRAS\n",
	       n_partidas);
      break;
    default:
      return -3;
    }
  fclose (historial);
}
