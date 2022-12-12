#include <stdio.h>
/**
 * main - My program that Prints all the letters except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}


	putcher('\n');

	return (0);
}
