#include "main.h"

/**
 * _puts - prints str followed by a new line
 * @str: pointer to the string to point
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
