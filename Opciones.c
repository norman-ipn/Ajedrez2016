void Opciones()
{
int opcion=-1;
char vacia[2], retorno[2];

	printf("Opciones\n");
	printf("-1- Volver al menu principal\n");
	printf("-2- Guardar la partida\n");
	printf("-0- Volver a la partida\n");

	printf("Opcion?");
	scanf("%d",&opcion);
	switch (opcion)
	{
		case 1 :main();
			break;
		case 2 :GuardarPartida();
			break;
		case 0 :c--;
			NuevaPartida();
			break;
		default :printf("Error\n");
			 printf("Presione cualquier tecla!\n");
			 scanf("%s",vacia);
			 scanf("%s",retorno);
			 c--;
			 NuevaPartida();
			 break;
	}
}
