#include "main.h"
/**
 * three_dig - prints the series of characters if i * j is > 100
 * @n: number to analyze
 *
 * Return: nothing
 */
void three_dig(int n)
{
	_putchar(',');
	_putchar(' ');
	_putchar(n / 100 + '0');
	if ((n / 10) % 10 <= 0)
		_putchar('0');
	else
		_putchar((n % 100) / 10 + '0');
	_putchar(n % 10 + '0');
}
