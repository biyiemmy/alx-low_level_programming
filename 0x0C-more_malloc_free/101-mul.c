#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _puts - prints a string
  * @str: pointer to the string
  * Return: void
  */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
}


/**
 * _atoi - convert a string to n integer
 * @s: string
 * Return: converted integer
 */

int _atoi(const char *s)
{
	int X  = 1;
	unsigned long int Y = 0, myNum, A;

	for (myNum = 0; !(s[myNum] >= 48 && s[myNum] <= 57); myNum++)
	{
		if (s[myNum] == '-')
		{
			X = X * -1;
		}
	}

	for (A = myNum; s[A] >= 48 && s[A] <= 57; A++)
	{
		Y = Y * 10;
		Y = Y + (s[A] - 48);
	}

	return (X * Y);
}

/**
 * print_int - prints an interger
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int Div = 1, B, rep;

	for (B = 0; n / Div > 9; B++)
		Div = Div * 10;

	for (; Div >= 1; n = n % Div, Div = Div / 10)
	{
		rep = n / Div;
		_putchar('0' + rep);
	}
}

/**
 * main - print the result of the multiplication
 * @argc: int
 * @argv: list
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
