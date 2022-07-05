#include "main.h"

/**
 * main - main block
 * Description: Write a function that prints the alphabet, in lowercase
 * followed by a new line.
 * Return: 0 Success
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n')
}
