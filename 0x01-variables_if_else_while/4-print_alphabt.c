#include <stdio.h>
#include <unistd.h>

/**
 *main : entry point
 *description : a program that prints the alphabet in lowercase, followed by a new line.
 *return : 0 Always (success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
