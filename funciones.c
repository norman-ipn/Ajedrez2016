/* Recopilación de los cuerpos de función, para poder compilar/ligar con el fin de probar el funcionamiento de cada función*/
/* Sólo tomé en cuenta funciones ya comenzadas (quizá algunas aún no se finalizan, por lo que ESTA FUNCIÓN estará  sujeta a cambios en un futuro*/
/* También cabe destacar que no consideré las funciones de las carpetas "manual" y "ascii", ni otras que me parecieron inecesarias.*/

void 
rendirse (int jugador) 
{ 
   printf("El jugador contrario gano ya que te rendiste."); /*Opino que esto se englobe y sea para IA y PvP, para evitar problemas.*/
   printf("Gracias por jugar y suerte para la proxima");
   exit(-1); /*Forma de acabar el programa, la verdad no recuerdo como era*/
}

/*--------------------------------------------------------------------*/
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

/*--------------------------------------------------------------------*/
int
DetallesPartida (int partida, int jugador, char pieza, int x, int y)
{
  char nombre_archivo[100];
  char cadena[100];
  int tamano = 0;
  int resultado = 0;
  FILE *fp = 0;
  sprintf (nombre_archivo, "partida_%d.txt", partida);
  fp = fopen (nombre_archivo, "a+");
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      tamano =
	sprintf (cadena,
		 "El jugador %d movio la pieza %c a la posicion (%d, %d).\n",
		 jugador, pieza, x, y);
      resultado = fprintf (fp, "%s", cadena);
      fclose (fp);
	    
	(tamano == resultado)? return 1 : return 0;
    }
}

/*--------------------------------------------------------------------*/

void continuar_partida(char archivo[100])
{

    FILE* fp = 0;
    char tablero[8][8];
    size_t n = 0;
    fp = fopen(archivo, "r");
    n = fread(tablero, sizeof(char), 64, fp);
    fclose(fp);
}

/*--------------------------------------------------------------------*/
int
coordenada_valida (int x, int y)
{
  if (x < 0 || y < 0)
    {
      return -1;
    }

  if (x >= 8 || y >= 8)
    {
      return -1;
    }
  return 1;
}

/*--------------------------------------------------------------------*/
int
GuardaPartida (char tablero[8][8])
{
  FILE *fp = fopen ("tablero.tab", "w");
  int resultado = 0;
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      resultado = fwrite (tablero, sizeof (char), 64, fp);
      fclose (fp);
      if (resultado == 64)
	{
	  return 1;
	}
      else
	{
	  return 0;
	}
    }
}

/* Devuelve 1 si se lee correctamente, 0 en otro caso. Si no habia partida anterior, el tablero no se modifica */
int
RecuperaPartida (char tablero[8][8])
{
  FILE *fp = fopen ("tablero.tab", "r");
  int resultado = 0;
  if (fp == 0)
    {
      return 0;
    }
  else
    {
      resultado = fread (tablero, sizeof (char), 64, fp);
      fclose (fp);
      if (resultado == 64)
	{
	  return 1;
	}
      else
	{
	  return 0;
	}
    }
}

/*--------------------------------------------------------------------*/
int
comprobar_casilla (char tablero[8][8], int x_inicial, int y_inicial, int x_final, int y_final)
{
  int n = 1;			/* contador de y */
  int m = 1;			/* contador de x */
    while (m >= -1)
    {
      n = 1;
      while (n >= -1)
	{
	  if (((x_inicial + m) == (x_final))
	      && ((x_inicial + n) == (x_final)))
	    {
	      if (tablero[x_final][y_final] == '0')
		{
		  return 1;
		}
	       else
		{
	         return 0;
                }
	    }
	  n = n - 1;
	}
    m = m - 1;}
  return 0;
}

int
MoverRey (char tablero[8][8], int x_inicial, int y_inicial, int x_final,
	  int y_final)
{
  int estado = 1;

  switch (estado)
        {
	 case 0: return 0;
         case 1: return 1; break; 
        }
  return 0;			/* no es posible */
}

/*--------------------------------------------------------------------*/
void Reloj(int hr, min, seg)
{
      int hr=0;
      int min=0;
      int seg=o;
      
      printf("Reloj\n");
      /*bucle para controlar los segundos*/

      for(seg = 0; seg <= 86400; seg= seg+1)
      {
            if(seg == 60)
                  /*si los segundos llegan a 60*/
                  {
                        min= min+1;
                         /*minutos aumentan a 1*/
                        seg=0;
                        /*segundos se reinicia a 0*/
                  }
            
            if(min == 60)
                  /*si los minutos llegan a 60*/
                  {
                        hr++;
                        /*horas aumentan a 1*/
                        min=0;
                        /*minutos se reinicia a 0*/
                  }
            if(hr==24)
            {
                  seg=0;
                  /*segundos se reinicia a 0*/
                  min=0;
                  /*minutos se reinicia a 0*/
                  hr=0;
                  /*horas se reinicia a 0*/
            }
                  printf("%d %d %d\n",hr,min,seg);
      }
}

/*--------------------------------------------------------------------*/
COORD coord={0,0};   
void gotoxy (int x, int y){
     coord.X=x;
     coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
     
     } 

void
otra_funcion (void)
{
  char tablero[9][9];
  int y = 15;
  int x = 30;
  int i = 0;
  int j = 0;
  gotoxy(x,y);
  for (i = 0; i < 10; i = i + 1)
    {
      tablero[i][j]='*';
      printf("%c",tablero[i][j]);
      tablero[i][9] = '*';
    }

  while (j < 10)
    {
      tablero[i][j] = '*';
      tablero[9][j] = '*';
      j = j + 1;
    }
}

/*--------------------------------------------------------------------*/
int Tiempo_de_Partida(int argc, char *argv[])
{
/* Inicialización de las variables, contará con minutos, segundos y horas. */
int hrs=0;
int min=0; 
int seg=0;

/* Contabiliza desde el momento en que se da inicio a la partida.*/
while(!0){

        if(seg>=60){
            seg=0;
            min=min+1;
            
        if(min>=60){
            min=0;
            hrs=hrs+1;
       
       } 
       }
/* Limpia la pantalla de la consola para que se muestre la siguiente. */
system("/usr/bin/clear");
/* Imprime el tiempo en la pantalla durante la partida. */
printf("%d:%d:%d" , hrs , min, seg);
/* Se coloca la dentención para aumentar la exactitud. */
usleep(1000);
seg=seg+1;
}
getch();
return 0;
}

/*--------------------------------------------------------------------*/
int
validar_movimiento_reina (char tablero[8][8], int x_inicial, int y_inicial,
			  int x_final, int y_final, char reina)
{
  localizar_pieza (tablero, reina, &posicion_x, &posicion_y);

if (coordenada_valida(x_final, y_final) == 1) 
{
  /*Validar solo movimientos horizontales */

  if (y_final = y_inicial)
    {
      mover_horizontalmente (tablero, y_inicial, x_inicial, y_final, x_final);
    }
  else
    {
      return 0;
    }
  /*Validar solo movimientos verticales */

  if (x_final = x_inicial)
    {
      for (int i = 0; i < 8; i = i + 1)
	{
	  if (y_final = y_inicial)
	    {
	      return 0;
	    }
	  else
	    {
	      if (y_final > 8)
		{
		  return -1;
		}

	    }
	}
      return 0;
}
}
}

/*--------------------------------------------------------------------*/
int 
validar_movimiento_torre(char tablero[8][8],char *pospieza,char *casilla)
{
  
  int resultado=0;
  return resultado;
}

/*--------------------------------------------------------------------*/
int
casilla_atacada (char tablero[8][8], int posicionini_x, int posicionini_y,
		 int posicionevaluar_x, int posicionevaluar_y)
{
  int resultado = 0;
  char ayuda = '';
  ayuda = tablero[posicionevaluar_y][posicionevaluar_x];

  tablero[posicionevaluar_y][posicionevaluar_x] =
    tablero[posicionini_y][posicionini_x];
  tablero[posicionini_y][posicionini_x] = ayuda;

  resultado = dar_jaque (tablero, posicionevaluar_x, posicionevaluar_y);

  tablero[posicionini_y][posicionini_x] =
    tablero[posicionevaluar_y][posicionevaluar_x];
  tablero[posicionevaluar_y][posicionevaluar_x] = ayuda;

  return resultado;
}

/*--------------------------------------------------------------------*/
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

/*--------------------------------------------------------------------*/
void coronar_peon(char tablero, char entrada, int x, int y) /* char entrada es el valor que se quiere tomar, ya sea dama, torre, caballo o alfil.
char tablero es la matriz en la que se encuentran todos los datos de nuestro tablero , x es la posicion en "x" de nuestro peón, y es la posición en "y" */
{
  if(tablero[x][y]='P')
  {
    switch(entrada)
    {
      case 'D':
        /* Se manda a llamar la función de dama blanca */
        break;
      case 'T':
        /* Se manda a llamar la función de torre blanca */
        break;
      case 'A':
        /* Se manda a llamar la función de alfil blanco */
        break;
      case 'C':
        /* Se manda a llamar la función de caballo blanco */
        break;
      default:
        printf("\n Pieza no válida\n");
    }    
  }
  else
  {
    switch(entrada)
    {
      case 'd':
        /* Se manda a llamar la función de dama negra */
        break;
      case 't':
        /* Se manda a llamar la función de torre negra */
        break;
      case 'a':
        /* Se manda a llamar la función de alfil negro */
        break;
      case 'c':
        /* Se manda a llamar la función de caballo negro */
        break;
      default:
        printf("\n Pieza no válida\n");
    }
  }
}

/*--------------------------------------------------------------------*/
int
dar_jaque(char tablero[8][8], int coor_x, int coor_y)
{
 situacion_1(tablero[8][8], coor_x, coor_y); /*Verifica jaques verticales y horizontales*/
 situacion_2(tablero[8][8], coor_x, coor_y); /*Verifica jaques diagonales*/
 situacion_3(tablero[8][8], coor_x, coor_y); /*Verifica jaques del caballo*/
 
return 0;
}int
declarar_jaque_mate (char tablero[8][8], char pieza_jaque,
		     int coordenadas_pieza[2], int rey[2])
{
  int mate = 0;
  mate = opciones_movimiento_rey (tablero, rey);
/* opciones_movimiento_rey es una funcio para ver si el rey puede hacer algun movimiento para salir del jaque*/
  if (mate == -1)
    {
      mate = bloquear_ataque (tablero, pieza_jaque, coodenadas_pieza, rey);
    }
/*bloquear_ataque es una funcion que vera si es posible que una pieza se coma a la pieza que hace el jaque o que se interponga entre esta y el rey*/

  /*Jaque Mate si mate regresa -1 y si regresa 0 solo jaque */

  return mate;
}

/*--------------------------------------------------------------------*/
void
enrocar_corto (char tablero[8][8])
{
  /* La siguiente función va a retornar cero si el enroque no se puede hacer, 
     y devolvera 1 en caso contrario */
  if (validar_enroque (tablero) == 1)
    {
      tablero[0][4] = tablero[0][6];
      tablero[0][7] = tablero[0][5];
    }
  return;
}
/*
   Función para verificar que el enroque se puede hacer
   donde mov_torre es el contador de veces que se ha movido torre
   lo mismo para rey.
*/
int
validar_enroque (int mov_torre, int mov_rey, char tablero[8][8])
{
  int se_puede = 1;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (casilla_atacada
      (tablero[0][4], tablero[0][5], tablero[0][6], tablero[0][7]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[0][5]), tablero[0][6] != -1)
    {
      se_puede = 0;
    }
  return se_puede;
}

/*--------------------------------------------------------------------*/
int
validar_enroque (int mov_torre, int mov_rey, char tablero[8][8])
{
  int se_puede = 1;
  int posini_x = 4;
  int posini_y = 7;
  int pos1_x = 3;
  int pos1_y = 7;
  int pos2_x = 2;
  int pos2_y = 7;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }
  se_puede = casilla_atacada (tablero, posini_x, posini_y, pos1_x, pos1_y);
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (se_puede != -1)
    {
      se_puede =
	casilla_atacada (tablero, posini_x, posini_y, pos2_x, pos2_y);
      /*verificar si en la segunda posicion del enroque el rey no esta en jaque */
      if (se_puede != -1)
	{
	  se_puede = revisar_casilla_vacia (tablero, pos1_y, pos1_x);
	  /*verificar que la primera casilla del enroque este vacia */
	  if (se_puede != -1)
	    {
	      se_puede = revisar_casilla_vacia (tablero, pos2_y, pos1_x);
	    }
	  else
	    {
	      return -1;
	    }
	}
      else
	{
	return -1:
	}
    }
  else
    {
      return -1;
    }
  return se_puede;
}

/*--------------------------------------------------------------------*/
void evaluar_enroque(char tablero[8][8], int turno, int pos_torre_x, int pos_torre_y)
{
    if((turno % 2) == 1)
    {
        if((pos_torre_x == 0) && (pos_torre_y == 0)) 
            enrocar_largo_blancas(tablero);      
        if((pos_torre_x == 0) && (pos_torre_y == 7)) 
            enrocar_corto_blancas(tablero);
    }
    
    if((turno % 2) == 0)
    {
        if((pos_torre_x == 7) && (pos_torre_y == 0)) 
            enrocar_corto_negras(tablero);      
        if((pos_torre_x == 7) && (pos_torre_y == 7)) 
            enrocar_largo_negras(tablero);
    }

/*--------------------------------------------------------------------*/
void
inicializar (char tablero[8][8])
{
  int x = 0;			/* variable de control de la posición del tablero en x */
  int y = 0;			/* variable de control de la posición del tablero en y */
  while (y <= 8)
    {				/*Se inicializa tablero con caracteres nulos, para no tener basura */
      while (x <= 8)
	{
	  tablero[x][y] = '\0';
	  x = x + 1;
	}
      x = 0;
      y = y + 1;
    }
  x = 0;
  y = 0;
  /* Iniciando piezas */
  int i = 0;
  tablero[0][0] = 't';
  tablero[0][1] = 'c';
  tablero[0][2] = 'a';
  tablero[0][3] = 'd';
  tablero[0][4] = 'r';
  tablero[0][5] = 'a';
  tablero[0][6] = 'c';
  tablero[0][7] = 't';
  tablero[7][0] = 'T';
  tablero[7][1] = 'C';
  tablero[7][2] = 'A';
  tablero[7][3] = 'D';
  tablero[7][4] = 'R';
  tablero[7][5] = 'A';
  tablero[7][6] = 'C';
  tablero[7][7] = 'T';
  while (i < 8)
    {
/* Piezas blancas se identifican por estar en mayúsculas, negras en minúsculas */
      tablero[6][i] = 'P';
      tablero[1][i] = 'p';
      i = i + 1;
    }
}

/*--------------------------------------------------------------------*/
void
localizar_pieza (char tablero[8][8], char pieza, int *x, int *y)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 8; i = i + 1)
	{
		for (j = 0; j < 8; j = j + 1)
		{
			if (tablero[i][j] == pieza)
			*x = i;
			*y = j;
		}
	}
}

/*--------------------------------------------------------------------*/
void menu_jugador(void)
{
    printf("\n");
    printf("1- Continuar partida \n");
    printf("2- Nueva partida vs player 2 \n");
    printf("3- Nueva partida vs computer \n");
    printf("4- Score \n\n");
}

void manual(void)
{
    char retorno = 0;
    char save = 0;
    int opcion1 = 0;
    printf("Escoja alguna de las siguientes opciones");
    printf("\n 1.-Modos de juego");
    printf("\n 2.-Guardar Partida");
    printf("\n 3.-Instrucciones");

    scanf("%i", &opcion1);
    switch (opcion1)
    {
        case 1:
            printf("\nExisten 2  diferentes modos de juego, usted puede elegir entre jugar con un "
                   "amigo uno a uno o jugar contra la maquina");
            printf("\nPresione r para regresar al manual");
            scanf("%c", &retorno);
            if (retorno == 'r')
            {
                manual();
            }
            break;
        case 2:
            printf("\nPara salvar la partida presione la letra  G");
            scanf("%c", &save);
            if (save == 'G')
            {
                /*salvar_partida ();------------------> funcion en construccion*/
                printf("Partida guardada con exito");
            }
            printf("\nPresione r para regresar al manual");
            scanf("%c", &retorno);
            if (retorno == 'r')
            {
                manual();
            }
            break;

        case 3:
            printf(
                "\nInstrucciones de juego"); /*Pido permiso de usar la función existente para las
                                                funciones, para agregarlo a este menu*/
            printf("\nPresione r para regresar al manual");
            scanf("%c", &retorno);
            if (retorno == 'r')
            {
                manual();
            }
    }
}

void iniciar_sesion()
{
    int resp1 = 0;
    int resp2 = 0;
    char user[99999] = "usuario";
    char password[99999] = "clave";
    char usuario[99999];
    char clave[99999];
    char buffer1[99999];
    char buffer2[99999];

    printf("\n");
    printf("Ingrese usuario ");

    fgets(buffer1, 128, stdin);
    sscanf(buffer1, "%s", &usuario);

    printf("\n");

    printf("Ingrese clave   ");

    fgets(buffer2, 128, stdin);
    sscanf(buffer2, "%s", &clave);

    resp1 = strcmp(user, usuario);
    resp2 = strcmp(password, clave);

    if (resp1 == 0 && resp2 == 0)
    {
        menu_jugador();
    }
    else
    {
        printf("\n");
        printf("Usuario incorrecto");
    }
}

menu(void)
{
    int condicion = 0;

    printf("Bienvenido \n\n");

    printf("1- Iniciar sesion \n");
    printf("2- Manual/Instruciones \n");
    printf("3- Salir \n\n");

    char buffer[128];
    fgets(buffer, 128, stdin);
    sscanf(buffer, "%d", &condicion);

    if (condicion == 1)
    {
        iniciar_sesion();
    }
    if (condicion == 2)
    {
        manual();
    }
}

/*--------------------------------------------------------------------*/
void
menu_jugador (void)
{
  printf ("\n");
  printf ("1- Continuar partida \n");
  printf ("2- Juega con un amigo :D \n");
  printf ("3- Juega con la computadora \n");
  printf ("4- Puntuacion \n\n");
}

void
manual (void)
{
  char cond = 's';
  int opc = 0, temp = 1, sn = 1;

  do
    {
      printf ("Escoja alguna de las siguientes opciones");
      printf ("\n 1.-Modos de juego");
      printf ("\n 2.-Guardar Partida");
      printf ("\n 3.-Instrucciones");
      printf ("\n 4.-Salir\n");
      scanf ("%d", &opc);

      do
	{
	  switch (opc)
	    {
	    case 1:
	      printf
		("\nExisten 2  diferentes modos de juego, usted puede elegir");
	      printf
		(" entre jugar con un amigo uno a uno o jugar contra la maquina");
	      break;
	    case 2:
	      printf
		("Para salvar la partida presione la letra G, aparecera un ");
	      printf ("mensaje que dira -se ha salvado correctamente- ");
	      break;
	    case 3:
	      printf ("\nInstrucciones de juego\n");
	      break;
	    case 4:
	      main (void);
	      break;
	    }
	  printf ("\n Presione n para salir\n");

	  scanf ("%c", &cond);
	  if (cond == 'n')
	    {
	      temp = -1;
	    }
	}
      while (temp >= 0);

      manual ();
    }
  while (sn >= 0);
}

void
iniciar_sesion ()
{
  int resp1 = 0, resp2 = 0;
  char user[99999] = "usuario", password[99999] = "clave";
  char usuario[99999], clave[99999];
  char buffer1[99999], buffer2[99999];

  printf ("\n");
  printf ("Ingrese usuario ");

  fgets (buffer1, 128, stdin);
  sscanf (buffer1, "%s", &usuario);

  printf ("\n");

  printf ("Ingrese clave   ");

  fgets (buffer2, 128, stdin);
  sscanf (buffer2, "%s", &clave);

  resp1 = strcmp (user, usuario);
  resp2 = strcmp (password, clave);

  if (resp1 == 0 && resp2 == 0)
    {
      menu_jugador ();
    }
  else
    {
      printf ("\n");
      printf ("Usuario incorrecto");
    }
}

int
menu2 (void)
{
  int condicion = 0, test = 1;
  printf ("Bienvenido \n\n");

  printf ("1- Iniciar sesion \n");
  printf ("2- Manual/Instruciones \n");
  printf ("3- Salir \n\n");

  char buffer[128];
  fgets (buffer, 128, stdin);
  sscanf (buffer, "%d", &condicion);

  while (test >= 0)
    {
      switch (condicion)
	{
	case 1:
	  iniciar_sesion ();
	  break;
	case 2:
	  manual ();
	  break;
	case 3:
	  test = -1;
	  break;
	default:
	  printf ("Valor fuera del dominio \n");
	  break;
	}
      scanf ("%d", &condicion);
    }
  printf ("\n");
  return 0;
}

/*--------------------------------------------------------------------*/

void modalidad_de_juego ()
{
    printf("Ajedrez.\n");
    printf("Escoge una opción.\n");
    printf("1.Soliario.\n 2.Multijugador.\n 3.Tutorial \n 4.Salir");
    
    switch(opcion){
        case 1:
        printf("\n");
        jugar_vs_ia(); //Enviar a la función
        return 0;
        break;
            
            case 2:
            printf("\n");
            jugar_vs_persona(); //Enviar a la función
            return 0;
            break;
            
                case 3:
                printf("\n");
                instrucciones();
                return 0;
                break;
                
                    case 4
                    return 0;
                    break;
            
        default: //Otra opción.
           printf("Opción inválida.\n");
           printf("Intenta otra vez.\n");
           return 0; 

    }
}

/*--------------------------------------------------------------------*/

int
mover_horizontalmente (char tablero[8][8], int coodenadas_iniciales[2],
		       int coodenadas_finales[2])
{
  int i = 0;
  char vacio = '0';
  if (coodenadas_iniciales[0] > coodenadas_finales[0])	/*se mueve a la izquierda */
    {

      vacio = tablero[filai][coodenadas_iniciales[0] - 1];
      i = i + 1;
      while (coordenadas_iniciales[0] - i != coodenadas_finales[0])
	{

	  if (tablero[coodenadas_iniciales[1]][coodenadas_iniciales[0] - i] !=
	      vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  if (coodenadas_iniciales[0] < coodenadas_finales[0])	/*se mueve a la derecha */
    {

      vacio = tablero[filai][coodenadas_iniciales[0] + 1];
      i = i + 1;
      while (coodenadas_iniciales[0] + i != coodenadas_finales[0])
	{
	  if (tablero[coodenadas_iniciales[1]][coodenadas_iniciales[0] + i] !=
	      vacio)
	    {
	      return 1;
	    }
	  switch (vacio)
	    {
	    case 'X':
	      vacio = ' ';
	      break;

	    case ' ':
	      vacio = 'X';
	      break;
	    }
	  i = i + 1;
	}
      return 0;
    }
  return 1;
}

/*--------------------------------------------------------------------*/
int
ofrecer_tablas(tablero[8][8])
{
  int opcion1, opcion2;
  printf("Estás seguro de que queres ofrecer tablas a tu oponente?");
  printf("1._Si\t2._No");
  scanf("%d", &opcion1);
    
  if(opcion1 == 1)
  {
  printf("Tu oponente desea ofrecer tablas. Estas de acuerdo?");
  printf("1._ Aceptar\t2._rechazar\t3._Ver Tabla");
  scanf("%d", &opcion2);
  switch (opcion)
  {
  case 1:
    tablas(tablero[8][8]) = true; /*Aqui sería directamente declarar tablas*/
    break;
  case 2:
  return 0;
  case 3:
    ver tablero(tablero[8][8]);
    printf("Tu oponente desea ofrecer tablas. Estas de acuerdo?");
    printf("1._ Aceptar\t2._rechazar\t3._Ver Tabla");
    scanf("%d", &opcion2);
    if(opcion2 == 1)
    tablas(tablero[8][8]) = true;
    break;
  }
  else
  {
    return 0;
  }
  return 0;
}

/*--------------------------------------------------------------------*/
int
opciones_movimiento_rey (char tablero[8][8], int rey[2])
{
  int i = 0;
  int n;
  int rey_prueba[2];
  rey_prueba[0] = rey[0] - 1;
  rey_prueba[1] = rey[1] - 1;
  while (i < 9)
    {
      while (i < 3)
	{
	  n = validar_movimiento_rey (rey, rey_prueba);
	  if (n == 0)
	    {
	      return n;
	    }
	  rey_prueba[0] = rey_prueba[0] + 1;
	  i = i + 1;
	}
      rey_prueba[1] = rey_prueba[1] + 1;
    }
  return n;
}

/*--------------------------------------------------------------------*/
void print_row(char board[8][8], int j) {
	int i = 0;

	while (i < 8) {
		printf("%c ", board[j][i]);
		i = i + 1;
	}
	printf("\n");
}

void print(char board[8][8]) {
	int i = 0;

	while (i < 8) {
		print_row(board, i);
		i = i + 1;
	}
}

/*--------------------------------------------------------------------*/
int revisar_casilla_vacia(char tablero[8][8], int i, int j)
{
     /* Se verifica si la casilla introducida está vacía, si es así, se regresa el entero 1 */
	if(tablero[i][j]!='\0')
	 {
	   return -1;
	 }
	return 1;
}

/*--------------------------------------------------------------------*/

int 
empieza_jugador() {
	srand( time( NULL ) );
	int empiezajugador = 1;
	int num = 0;
	num = rand();
	if ( num %= 2 ){
	 empiezajugador = 2 ;
	}
	return empiezajugador;
}
/*--------------------------------------------------------------------*/

int
situacion_1(char tablero[8][8], int coor_x, int coor_y)
{
 int copia_x = coor_x;
 int copia_y = coor_y;
 int num_jaque = 0;
 while(copia_x<9)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal*/
  copia_x = copia_x + 1;
 }
 while(copia_x>0)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque horizontal*/
  copia_x = copia_x - 1;
 }
 while(copia_y<9)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque vertical*/
  copia_y = copia_y + 1;
 }
 while(copia_y>0)
 {
  verificar_casilla(tablero[8][8], copia_x, copia_y); /*Verifica jaque vertical*/
  copia_y = copia_y - 1;
 }
}
/*--------------------------------------------------------------------*/

void
finjuego(char tablero[8][8])
{
  int i = 0;
  for (int j = 0; j <= 7; j = j + 1)
    {
      for (int k = 0; k <= 7; k = k + 1)
        {
          if ((tablero[j][k] == "k1") || (tablero[j][k] == "k2"))
            {
              i = i + 1;
            }
        }
    }
  if (i == 2)
    {
      return 0;
    }
  else
    {
      return 1;
    }

/*--------------------------------------------------------------------*/

void
validar_comer_al_paso_blancas( char tablero[8][8], int cord_x ,int cord_y, int  )
{
  if(tablero[cord_y][cord_x] == 'P')
  {
    
return 0;
}

void
validar_comer_al_paso_negras( char tablero[8][8] )
{
return 0;
}
/*--------------------------------------------------------------------*/

int
validar_enroque_corto_negro (int mov_torre_rey_negra, int mov_rey_negro, char tablero[8][8])
{
  int se_puede = 1;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }
  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (casilla_atacada
      (tablero[7][4], tablero[7][5], tablero[7][6]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[7][5]), tablero[7][6] != -1)
    {
      se_puede = 0;
    }
  return se_puede;
}

/*--------------------------------------------------------------------*/

int
validar_enroque_largo_negro (int mov_torre_dama_negra, int mov_rey_negro, char tablero[8][8])
{
  int se_puede = 1;

  if (mov_torre != 0)
    {
      se_puede = 0;
    }
  if (mov_rey != 0)
    {
      se_puede = 0;
    }

  /* Función para verificar que con el enroque el rey no se ve amenazado */
  if (casilla_atacada
      (tablero[7][4], tablero[7][3], tablero[7][2]) != 0)
    {
      se puede = 0;
    }
/*
   Función para verificar si no hay piezas que interrumpan el 
   movimiento entre la torre y el Rey.
*/
  if (revisar_casilla (tablero[7][3]), tablero[7][2] != -1)
    {
      se_puede = 0;
    }
  return se_puede;
}

/*--------------------------------------------------------------------*/

int
validar_mov_peon_blanco (int posicion_ini_x, int posicion_ini_y, int posicion_y, int posicion_x, char tablero[8][8])
{
  if(tablero [posicion_ini_x][posicion_ini_y]=='P')
  {
    for(int i=0;i<8;i=i+1;)
    {
     if(tablero[i][2])
     {
       if(posicion_y==posicion_ini_y)
       {
         if(posicion_x==1||posicion_x==2)
         {
           return 1;
         }
       }   
      else
       {
        return -1;
       }
     }
    for(int j=3;j<8;j=j+1;)
    {
     if(tablero[i][j])
     {
       if(posicion_y==posicion_ini_y)
       {
         if(posicion_x==1)
         {
           return 1;
         }
       }   
      else
       {
        return -1;
       }
     }
    }  
  }
  else
     { 
    return -1;
     }
}
/*--------------------------------------------------------------------*/

int
validar_movimiento (char tablero[8][8], int posicion_ini_x int posicion_ini_y,
		    int posicion_x, int posicion_y, char pieza)
{
  int resultado = 0;
	switch (pieza)
	{
		case 'P' :
			
      resultado =
	validar_movimiento_peon_blanco (posicion_ini_x, posicion_ini_y,
					posicion_y, posicion_x, tablero);
			break;
  
		case 'p' :
      resultado =
	validar_movimiento_peon_negro (posicion_ini_x, posicion_ini_y,
				       posicion_y, posicion_x, tablero);
    break;
  
		case 'T' :
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
			break;
   
		case 't' :
      resultado =
	validar_movimiento_torre (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
			/*termina alfredo 1cm1 */
     break;
		case 'C':
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
			break; 
			
		case 'c':
      resultado =
	validar_movimiento_caballo (posicion_ini_x, posicion_ini_y,
				    posicion_y, posicion_x, tablero);
			break;

		case 'A':
    
      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
			break;
			
  case 'a':
    
      resultado =
	validar_movimiento_alfil (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
			break;
			
		case 'R':
   
      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
			break;
		case 'r':
    
      resultado =
	validar_movimiento_rey (posicion_ini_x, posicion_ini_y, posicion_y,
				posicion_x, tablero);
    break;
		case 'D':
   
      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    break;
		case 'd':
   
      resultado =
	validar_movimiento_reina (posicion_ini_x, posicion_ini_y, posicion_y,
				  posicion_x, tablero);
    break;
}
  return resultado;
}

/*--------------------------------------------------------------------*/

int revisar_coordenada(int pos_i_x, int pos_i_y, char tablero [8][8])
 {
   /* Para poder saber si esta vacia la casilla se tiene que saber el char que
   esta en la posicion que se desea revisar. 
   Suopongamos que 0 = negras, 1 = blancas.
   Para poder comparar si esta o no ocupada hacemos un cast*/

 if ( ((int)tablero [pos_i_x][pos_i_y]) > 1 )
 } 
    return -1;
 }
 return 1;  
 }

int ver_coordenada(int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y)
{ 
 int resultado = 0;
   if ((x_i + 1 == x_f) && (y_i + 2 == x_f))
    {
     resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i + 2 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i + 1 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i - 2 == x_f) && (y_i - 1 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i - 1 == x_f) && (y_i - 2 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i + 1 == x_f) && (y_i - 2 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i + 1 == y_f))
    {
     resultado = 1;
    }
  else if ((x_i + 2 == x_f) && (y_i - 1 == y_f))
    {
     resultado = 1;
    }
  else
    {
     resultado = -1;
    }
  return resultado;
}

int validar_movimiento_caballo(int pos_i_x, int pos_i_y, int pos_f_y, int pos_f_x,
 char tablero[8][8])
 { 
    /* pos_i=Posicion inicial. pos_f=Posicion final.
    Para todas las afirmaciones se usara un 1 y para las negaciociones -1 */

  int resultado = 1;
 if( revisar_coordenada(pos_i_x, pos_i_y, tablero [8][8]) == -1)
  {
    resultado = -1;
  } 
 if (ver_coordenada(int pos_i_x, int pos_i_y, int pos_f_x, int pos_f_y) == -1)
  {
    resultado = -1;
  } 
 if (resultado == -1)
  {
    printf("Tu movimiento no es valido");
  }
 else 
 {
    printf("Tu movimiento es valido");
 }
 return resultado;
}


/*--------------------------------------------------------------------*/

int
validar_movimiento_diagonal(char tablero[8][8], int x1, int y1, int x2, int y2){
	int i = 0;
	int siguiente_x = 0;
	int siguiente_y = 0;
	int direccion[4][2] = {  {1,1}, {1,-1}, {-1,1}, {-1,-1} };
	while(i < 4){
		siguiente_x = x1 + direccion[i][0];
		siguiente_y = y1 + direccion[i][1];
		while(coordenada_valida( siguiente_x , siguiente_y ) &&
		       tablero[siguiente_x][siguiente_y] == '.'){
			
			if(siguiente_x == x2 && siguiente_y == y2){
				return 1;
			}
			siguiente_x = siguiente_x + direccion[i][0];
			siguiente_y = siguiente_y + direccion[i][1];
		}
		i = i + 1;		
	}
	return -1;
}

/*--------------------------------------------------------------------*/
int
validar_peon_negro(int posi_x , int posi_y , int posf_y ,int posf_x, char tablero[8][8])
{
  int resultado;
 if (posi_x == posf_x){
  
 resultado=-1; 
 }
  else{    
  }
  return resultado;
}

/*--------------------------------------------------------------------*/
int
validar_rey (char tablero[8][8], int x, int y, char rey)
{
  int i = 0;
  int siguiente_x = 0;
  int siguiente_y = 0;
  int posicion_actual_x = 0;
  int posicion_actual_y = 0;
  int direccion[8][2] =
    { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };

  localizar_pieza (tablero, rey, &posicion_actual_x, &posicion_actual_y);
  while (i < 8)
    {
      siguiente_x = posicion_actual_x + direccion[i][0];
      siguiente_y = posicion_actual_y + direccion[i][1];
      if (coordenada_valida (siguiente_x, siguiente_y) == 1 &&
           tablero[siguiente_x][siguiente_y] == '.')
	      {
	        if (siguiente_x == x && siguiente_y == y)
		        {
		          return 1;
		        }
	      }
    }
  return -1;
}
/*--------------------------------------------------------------------*/
int
validar_movimiento_torre (char tablero[8][8], int coordenadas_iniciales[2],
			  int coodenadas_finales[2])
{
  int i = -1;
  if ((tablero[coordenadas_iniciales[0]][coodenadas_iniciales[1]] == "T")
      || (tablero[coordenadas_iniciales[0]][coodenadas_iniciales[1]] == "t"))
    {
      i =
	mover_horizontalmente (tablero, coodenadas_iniciales, coodenadas_finales);
    }}
return i;
}
