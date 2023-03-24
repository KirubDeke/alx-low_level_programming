#include "main.h"

/**
 * _isdigit - a function which checks if a function is a digit
 * @c: input
 * Return: 1 if it is a digit or 0 if it is not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
