#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int Size;
Size = sizeof(char);	
printf("Size of a char: %d byte(s)\n", Size);
Size = sizeof(int);
printf("Size of a int: %d byte(s)\n", Size);
Size = sizeof(long int);
printf("Size of a long int: %d byte(s)\n", Size);
Size = sizeof(long long int);
printf("Size of a long long int: %d byte(s)\n", Size);
Size = sizeof(float);
printf("Size of a float: %d byte(s)\n", Size);


	return (0);
}
