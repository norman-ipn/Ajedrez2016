/* Recibe dos enteros, representando una coordenada,
   devolvera el numero 1 si la coordenada esta dentro del tablero,
   devolvera el numero -1 si la coordenada esta fuera del tablero. */

int
coordenada_valida (int x, int y)
{
  if (x < 0 || y < 0)
    {
      return -1;
    }

  if (x >= 8 || y >= 8)
    {
      return -1;
    }

  return 1;
}

/*Se ve bastante bien */
