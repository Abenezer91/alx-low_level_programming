#include "main.h"
/**
  *print_chessboard - Entry point
  *@a: array
  *Return: Chess is mental torture
  */
void print_chessboard(char (*a)[8])
{
	int p;
	int d;

	for (p = 0; p < 8; p++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[p][d]);
		_putchar('\n');
	}
}
