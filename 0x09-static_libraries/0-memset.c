#include "main.h"
#include <string.h>
/**
 * _memset - concantination fuction
 * @s : The character to print destination
 * @b : the character that print source
 * @n : intiger
 * Return: return @s
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
