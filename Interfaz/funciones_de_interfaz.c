/* Esta función recopila funciones que imprimen el tablero y menús en pantalla, estará cambiando pues faltan funciones. */
#include "funciones_de_interfaz.h"
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
