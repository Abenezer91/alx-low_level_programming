#include "main.h"
/**
  *_strchr - Entry point
  *@s: input
  *@c: input
  *Return: Returns a pointer to the first occurrence of the character
  */
char *_strchr(char *s, char c)
{
	int p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (&s[p]);
	}
	return (0);
}
