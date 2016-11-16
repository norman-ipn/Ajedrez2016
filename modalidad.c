    // Funcion para escoger una modalidad de juego

void modalidad_de_juego (int opcion)
{
    printf("Ajedrez.\n");
    printf("Escoge una opción.\n");
    printf("1.Soliario.  2.Multijugador.\n");
    if(opcion==1) //Jugar en solitario
    {
        printf("\n");
        jugar_vs_ia();//Enviar a la función
        return 0;
    }
     if(opcion==2) //Jugar vs persona
    {
        printf("\n");
        jugar_vs_persona();//Enviar a la función
        return 0;
    }
    else
    {
        printf("Opción inválida.\n");
        printf("Intenta otra vez.\n");
        return 0;
    }
}
