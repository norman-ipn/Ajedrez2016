
void continuar_partida(char archivo[100])
{

    FILE* fp = 0;
    char tablero[8][8];

    size_t n = 0;

    fp = fopen(archivo, "r");
    if (fp == 0)
    {
        printf("No se pudo abrir el archivo");
    }

    n = fread(tablero, sizeof(char), 64, fp);
    if (n == 64)
    {
        printf("Se leyeron los datos correctamente");
    }

    fclose(fp);
}
