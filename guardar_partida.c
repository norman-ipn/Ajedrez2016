void
guardar_partida (char a[8][8])
{

 FILE *archivo;

 archivo = fopen("tablero.tab", "w");

 fwrite (a, sizeof (char), 64, archivo);

 fclose (archivo);

 printf ("La partida se guardo exitosamente \n\n");

 pausa(void);
}
