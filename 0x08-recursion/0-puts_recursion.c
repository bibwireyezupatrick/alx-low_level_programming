#include "main.h"
/**
 * _puts_recursion - followed by a new line
 * @s : The character to print destination
 * Return: return @s
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
