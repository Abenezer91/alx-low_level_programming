#include "main.h"
/**
  *_memcpy - a function copies memory area
  *@dest: memory were stored
  *@src: memory were copied
  *@n: number of bytes
  *
  *Return: Returns a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
