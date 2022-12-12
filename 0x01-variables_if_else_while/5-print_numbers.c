#include <stdio.h>

/**
 * main - My program that prints all single digit numbers of base 10
 *
 * Return: Always 0
 */

int main(void)

{
	int a = 0;

	while (a < 10)
	{	printf("%d", a);

		a = a + 1;
	}
	printf('\n');
	return (0);

}
