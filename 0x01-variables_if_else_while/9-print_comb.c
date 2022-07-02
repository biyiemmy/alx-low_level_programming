#include <stdio.h>
#include <stdlib.h>
/**
 * main - block to be executed
 * Description: print out all single digits
 * Return: 0 Success
 */
int main(void)
{
	int c = 0;

	while (c < 10)

	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
