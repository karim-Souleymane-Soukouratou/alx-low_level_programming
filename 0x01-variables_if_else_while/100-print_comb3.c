#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	
	for (i  = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
