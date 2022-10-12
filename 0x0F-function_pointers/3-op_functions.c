#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract b from a
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: First number
 * @b: Second number
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a%b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
