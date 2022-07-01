#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block to be executed
 * Description: write program that prints all the combinations of two digits
 * Numbers to be separated with ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits
 * Print just the smallest combination of two digits
 * Numbers should be printed in ascending order
 * Putchar is the only function to be used
 * all other functions are forbidden( printf, puts, etc..)
 * Putchar to be use five times maximum
 * You are not allowed to use any variable of type char
 * all code should be in main function
 *Return: 0 Success
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
