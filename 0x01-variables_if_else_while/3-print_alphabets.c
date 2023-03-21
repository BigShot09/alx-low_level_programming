#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char s;
	char b;

	for (s = 'a' ; s <= 'z' ; s++)
		putchar(s);
	for (b = 'A' ; b <= 'Z' ; b++)
		putchar(b);
	putchar ('\n');
	return (0);
}
