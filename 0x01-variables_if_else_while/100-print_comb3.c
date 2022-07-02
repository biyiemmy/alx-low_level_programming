#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block to be executed
 * Description: write a program that prints all the combinations of two digits
 * numbers to be seperated with ,, followed by a space
 * Return: 0 Success
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;

		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
