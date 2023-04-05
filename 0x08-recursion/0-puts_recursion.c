#include "main.h"

/**
 * _puts_recursion(char *s) - prints a sting followed by a new line
 * @s - string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	putchar(*s);
	s++;
	return;
}
