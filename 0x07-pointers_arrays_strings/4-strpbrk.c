#include "main.h"
/**
  *_strpbrk - Entry point
  *@s: input
  *@accept: input
  *Return: Returns a pointer to the byte
  */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
		if (*s == accept[c])
		return (s);
		}
	s++;
	}

		return ('\0');
}

