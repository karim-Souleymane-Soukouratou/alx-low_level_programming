#include "main.h"

/**
 *_strncpy - function that copies a strin
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting strin
 */
char *_strncpy(char *dest, char *src, int
{
int i;

	for (i = 0; i < n && *(src + i); 
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
