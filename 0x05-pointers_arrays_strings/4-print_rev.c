#include "main.h"

/**
 * print_rev - reversed str is printed \n
 * @s: pointer to be printed for thr str
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
