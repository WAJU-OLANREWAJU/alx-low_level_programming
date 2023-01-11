#include <stdio.h>

/**
 * main - this program prints all arguments it receives.
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
