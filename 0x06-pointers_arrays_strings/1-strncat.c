#include "main.h"
#include <string.h>
/**
 * _strncat - concantination fuction
 * @dest : The character to print destination
 * @src : the character that print source
 * @n : value n
 * Return: return @dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
