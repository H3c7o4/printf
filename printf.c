#include "main.h"

/**
 * _printf - custom function that format and print data
 * @format:  list of types of arguments passed to the function
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list list;
	int idx, j;
	int len_buf = 0;
	char *s;
	char *create_buff;

	type_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{"b", print_bin},
		{NULL, NULL}
	};
	create_buff = malloc(1024 * sizeof(char));
	if (create_buff == NULL)
	{
		free(create_buff);
		return (-1);
	}
	va_start(list, format);
	if (format == NULL || list == NULL)
		return (-1);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%' && format[idx + 1] == '%')
			continue;
		else if (format[idx] == '%')
		{
			if (format[idx + 1] == ' ')
				idx += _position(format, idx);
			for (j = 0; ops[j].f != NULL; j++)
			{
				if (format[idx + 1] == *(ops[j].op))
				{
					s = ops[j].f(list);
					if (s == NULL)
						return (-1);
					_strlen(s);
					_strcat(create_buff, s, len_buf);
					len_buf += _strlen(s);
					idx++;
					break;
				}
			}
			if (ops[j].f == NULL)
			{
				create_buff[len_buf] = format[idx];
				len_buf++;
			}
		}
		else
		{
			create_buff[len_buf] = format[idx];
			len_buf++;
		}
	}
	create_buff[len_buf] = '\0';
	write(1, create_buff, len_buf);
	va_end(list);
	free(create_buff);
	return (len_buf);
}
