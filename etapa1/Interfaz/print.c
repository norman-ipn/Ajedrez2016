#include <stdio.h>

void
print_row (char board[8][8], int j)
{
  int i = 0;

  while (i < 8)
    {
      printf ("%c ", board[j][i]);
      i = i + 1;
    }
  printf ("\n");
}

void
print (char board[8][8])
{
  int i = 0;

  while (i < 8)
    {
      print_row (board, i);
      i = i + 1;
    }
}
