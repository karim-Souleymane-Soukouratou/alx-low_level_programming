#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints all single digit characters of base 10
 *
 *Return: always zero
 *
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
		putchar(nb + '0');
	}
	putchar('\n');
	return (0);
}
