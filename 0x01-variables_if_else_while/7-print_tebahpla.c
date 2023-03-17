#include<stdio.h>

/**
 * main - a function which prints a string in reverse order
 * Return: Always 0.
 */

int main(void)
{
	char k;

	for (k = 'z'; k > 'a'; k--)
		putchar(k);

	putchar('\n');

	return (0);
}
