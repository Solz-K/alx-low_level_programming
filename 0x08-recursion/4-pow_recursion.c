#include "main.h"
#include <stddef.h>

/**
 * _pow_recursion - returns x to the power y
 * @x: base
 * @y: exponent
 *
 * Return: integer result, -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
