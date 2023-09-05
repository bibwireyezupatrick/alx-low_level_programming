#include "main.h"
/**
 * _strlen_recursion - followed by a new line
 * @s : The character to print destination
 * Return: return @s
 */
int _strlen_recursion(char *s)
{
int n;
n = 0;

if (*s)
{
n = n + 1;
n += _strlen_recursion(s + 1);
}
return (n);
}
