#include "main.h"
#include <string.h>
/**
 * _strchr - concantination fuction
 * @s : The character to print destination
 * @c : the character that print source
 *
 * Return: return @n
 */
char *_strchr(char *s, char c)
{
char *n;
n = strchr(s, c);
return (n);
}
