#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program multiplies two numbers.
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int x, y;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	/*
	 * for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		mul = mul * argv[i];
	}
	}
	else
	*/
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}

