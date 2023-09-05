#include "main.h"
/**
 * _print_rev_recursion - followed by a new line
 * @s : The character to print destination
 * Return: return @s
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
