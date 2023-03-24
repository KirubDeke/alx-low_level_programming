#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers from 0 to 14.
 * Return: Always 0.
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 14; k++)
		{
			if (k >= 10)
			{
				_putchar((i / 10) + '0');
			}
			 _putchar((i % 10) + '0');
		}
		 _putchar('\n');
	}
}
