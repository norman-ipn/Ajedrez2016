void guardar_partida(char tablero[8][8])
{
    FILE* archivo = 0;
 

    size_t numero = 0;

    archivo = fopen("tablero.txt", "w");

    numero = fwrite(tablero, sizeof(char), 64, archivo);

    fclose(archivo);
}


