#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if((c != 'q') & (c != 'e'))
			putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
