#include <stdio.h>
#include <string.h>

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

main(void)
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
