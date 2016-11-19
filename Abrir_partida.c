
void continuar_partida(char archivo[100])
{

    FILE* fp = 0;
    char tablero[8][8];

    size_t n = 0;

    fp = fopen(archivo, "r");

    n = fread(tablero, sizeof(char), 64, fp);

    fclose(fp);
}
