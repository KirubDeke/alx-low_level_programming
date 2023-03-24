#include "main.h"
/**
 *  _isdigit - a function which checks if a function is a digit
 *  @c: a variable input to be checked
 *  Return: 1 if it is a digit or 0 if it is not
 */
int _isdigit(int c)
{
	if((c >= 0) &&(c <= 10))
		return (1);
	else
		return (0);
}
