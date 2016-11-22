include < stdio.h > enum colores =
{ azul, negro, rojo, verde };

int
main (void)
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
      azul break;
    case 2:
      negro break;
    case 3:
      rojo break;
    case 4:
      verde break;
    }


}
