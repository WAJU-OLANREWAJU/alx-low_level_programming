#include <stdio.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)

{
	int n;

	for (n = 0; n < 16; n++)
		putchar("%d", n);

	putchar('\n');

	return (0);
}
