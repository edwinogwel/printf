#include "main.h"

/**
 * print_unsignedToBinary - prints an integer.
 * @arg: argument
 * Return: 0
 */
int print_unsignedToBinary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int printed;

	print_binary(n, &printed);
	print_binary(n, &printed);

	return (printed);
}
