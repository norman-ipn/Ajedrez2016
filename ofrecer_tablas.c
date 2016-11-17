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
