#include "main.h"

/**
 * _numlen - length of number
 * @n: int
 * Return: length
 */

int _numlen(int n)
{
	int len = 0;

	while (n / 10 != 0)
        {
		len++;
                n /= 10;
        }
        return (len);
}

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void *rev_string(char *s)
{
        int i = 0;
        int aux = 0;
        char ltemp;

        while (*(s + i) != '\0')
                i += 1;
        i -= 1;

        while (aux < i)
        {
                ltemp = s[i];
                s[i] = s[aux];
                s[aux] = ltemp;
                aux++;
                i--;
        }
        return (s);
}
