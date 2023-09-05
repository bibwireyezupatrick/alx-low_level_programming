#include "main.h"
#include <string.h>
/**
 * _strspn - concantination fuction
 * @s : The character to print destination
 * @accept : the character that print source
 *
 * Return: return @n
 */
unsigned int _strspn(char *s, char *accept)
{
int n;
n = strspn(s, accept);
return (n);
}
