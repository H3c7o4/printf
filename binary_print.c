#include "main.h"
/**
 * print_bin - print binary
 * @list: va_list
 * Return: pointer to string of binary
 */
char *print_bin(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char s[1024];
	char *b;
	int i;

	b = s;
	i = 0;

	if (n == 0)
	{
		s[++i] = '0';
	}
	while (n != 0)
	{
		s[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}
	rev_string(s);
	s[i] = '\0';
	return (b);
}
