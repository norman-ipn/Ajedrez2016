#include <stdio.h>


/*Prueba de la impresión de colores con caracteres*/

#include "magenta.h"
#include "negro.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_RESET   "\x1b[0m"

enum colores
{ azul, cNegro, rojo, verde };


int
menu_colores (void)
{
  int i = 0;
  int colr = 0;
  char color[2];

  printf ("¿Qué color prefieres?\n");
  printf (ANSI_COLOR_MAGENTA "1.Magenta" ANSI_COLOR_RESET "\n");
  printf (ANSI_COLOR_BLACK "2.Negro" ANSI_COLOR_RESET "\n");
  printf (ANSI_COLOR_RED "3.Rojo" ANSI_COLOR_RESET "\n");
  printf (ANSI_COLOR_GREEN "4.Verde\n" ANSI_COLOR_RESET);
  printf ("\n");
  printf ("Teclea el numero\n");
  fgets (color, 2, stdin);
  sscanf (color, "%d", &i);

  switch (i)
    {
    case 1:
      colr = magenta ();
      break;
    case 2:
      colr = negro ();
      break;
    case 3:
      printf (ANSI_COLOR_RED "Rojo" ANSI_COLOR_RESET " \n");
      break;
    case 4:
      printf (ANSI_COLOR_GREEN "Verde" ANSI_COLOR_RESET "\n");
      break;
    }
  return 0;

}

int
main (void)
{
  int color = 0;
  color = menu_colores ();

}
