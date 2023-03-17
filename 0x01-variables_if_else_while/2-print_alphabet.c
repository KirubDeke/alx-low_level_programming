#include <stdio.h>

/**
 * main - a function that prints lower case alphabets
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
		putchar(letter);

	putchar('\n');


	return (0);
}
