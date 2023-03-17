#include <stdio.h>

/**
 * main -Prints the alphabet in lowercase, and then in uppercase.
 * 
 * Return: Always 0 (Success)
**/
 int main(void)
{
	char ch;
	printf("\nLowercase characters : \n");

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		printf("%c ", ch);
	}
	printf("Uppercase characters : \n");

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		printf("%c ", ch);
	}
	return 0;
}
