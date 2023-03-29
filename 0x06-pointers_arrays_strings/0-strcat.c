#include "main.h"

/**
 * _strcat - concat 2 st
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest
{
	char *s = dest;

	while (*dest != 
	{
		dest++;
	}

	while (*src != '
	{
		*dest = 
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

