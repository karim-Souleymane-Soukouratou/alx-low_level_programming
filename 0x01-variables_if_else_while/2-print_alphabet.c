#include <stdio.h>

/**
 *entry int main
 *description: print the alphabets in lowercase
 *return success(0)
 */

int main(void)
{
	char var = 'a';
	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
