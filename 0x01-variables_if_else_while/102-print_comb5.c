#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
				if (d != e && e < d)
				{
					putchar('0' + e);
					putchar('0' + d);

					if (d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
