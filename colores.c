#include <stdio.h>


/*Prueba de la impresión de colores con caracteres*/

#include "rojo.h"
#include "verde.h"
#include "negro.h"
#include "azul.h"
#include "magenta.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_RESET   "\x1b[0m"

enum colores
{ rojo, verde, negro, azul, magenta};


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
  printf (ANSI_COLOR_GREEN "4.Verde" ANSI_COLOR_RESET"\n");
  printf (ANSI_COLOR_BLUE "5.Azul" ANSI_COLOR_RESET"\n");
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
      colr = rojo();
      break;
    case 4:
      colr = verde();
      break;
    case 5:
      colr = azul();
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
