#include "main.h"
#include <string.h>
/**
 * _strstr - concantination fuction
 * @haystack : The character to print destination
 * @needle : the character that print source
 *
 * Return: return @n
 */
char *_strstr(char *haystack, char *needle)
{
char *n;
n = strstr(haystack, needle);
return (n);
}
