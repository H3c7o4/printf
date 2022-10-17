#include "main.h"

/**
 * _position - return position on string
 * @s: string
 * @n: int
 * Return: postion on string
 */

int _position(const char *s, int n)
{
	int i;

	i = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
		{
			return (i);
		}
		n++;
		i++;
	}
	return (0);
}

/**
 *  _strlen - string length
 *  @s: string
 *  Return: length of string int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: char pointer
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _abs - absolute value
 * @n: int
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
