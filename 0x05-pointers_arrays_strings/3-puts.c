#include "main.h"
/**
 * _puts - prints a string, folowed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
