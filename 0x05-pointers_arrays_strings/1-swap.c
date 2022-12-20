#include "math.h"

/**
 * swap_int - a function that swap the values of two integers.
 * @a: the integer address
 * @b: the integer address
 * return 1 or 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

*a = *b;
*b = c;
}
