#include "main.h"
#include <string.h>
/**
 * _memcpy - concantination fuction
 * @dest : The character to print destination
 * @src : the character that print source
 * @n : intiger
 * Return: return @desti
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
