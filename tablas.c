void tablas (char tablero[8][8])
{
  int i = 0;
  int j = 0;
  int k = 0;

  while (j <= 7)
    {
      j = j + 1;
      while (k <= 7)
	{
	  k = k + 1;
	  if ((tablero[j][k] == "k1") || (tablero[j][k] == "k2"))
	    {
	      i = i + 1;
	    }
	}
    }

  while (j == 2)
    {
      return false;
      if (j != 2)
	{
	  return true;
	}
    }
