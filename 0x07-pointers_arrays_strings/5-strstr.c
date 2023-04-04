#include "main.h"
/**
  *_strstr - Entry point
  *@haystack: input
  *@needle: input
  *Return: Returns a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *d = needle;

		while (*r == *d && *d != '\0')
		{
			r++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (0);
}
