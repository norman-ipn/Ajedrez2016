#include <stdio.h>
enum colores
{ azul, negro, rojo, verde };

int
menu_colores (void)
{
  int i = 0;
  char color[2];		/*aasasasas */

  printf ("¿Qué color prefieres?\n");
  printf ("1.Azul\n");
  printf ("2.Negro\n");
  printf ("3.Rojo\n");
  printf ("4.Verde\n");
  fgets (color, 2, stdin);
  sscanf (color, "%d", &i);

  switch (i)
    {
    case 1:
      printf ("azul \n");
      break;
    case 2:
      printf ("negro \n");
      break;
    case 3:
      printf ("rojo \n");
      break;
    case 4:
      printf ("verdesillo \n");
      break;
    }
  return 0;

}

