#include <stdio.h>

/**
 *main - Entry point
 *and print the last digit of the number stored in the variable n
 *Return: Alwayss 0 (Sucess)
 */
int main(void);
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{

		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
