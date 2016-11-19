void
finjuego(char tablero[8][8])
{
  int i = 0;
  for (int j = 0; j <= 7; j = j + 1)
    {
      for (int k = 0; k <= 7; k = k + 1)
        {
          if ((tablero[j][k] == "k1") || (tablero[j][k] == "k2"))
            {
              i = i + 1;
            }
        }
    }

  if (i == 2)
    {
      return 0;
    }

  else
    {
      return 1;
    }

