#include "main.h"
#include <string.h>
/**
 * _strpbrk - concantination fuction
 * @s : The character to print destination
 * @accept : the character that print source
 *
 * Return: return @n
 */
char *_strpbrk(char *s, char *accept)
{
char *n;
n = strpbrk(s, accept);
return (n);
}
