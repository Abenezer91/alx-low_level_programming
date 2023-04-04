#include "main.h"
#include <stdio.h>
/**
  *print_diagrams - Entry point
  *@a: input
  *@size: input
  *Return: to make sure you understand how an array of array
  */
void print_diagsums(int *a, int size)
{
	int num1, num2, p;

	num1 = 0;
	num2 = 0;

	for (p = 0; p < size; p++)
	{
		num1 = num1 + a[p * size + p];
	}

	for (p = size - 1; p >= 0; p--)
	{
		num2 += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", num1, num2);
}

