#include "main.h"

/**
 * get_percision - Gets the precision from the format string
 * @p: The format string
 * @ap: The argument pointer
 * @params: The parameters struct
 *
 * Return: New pointer
 */
char *get_percision(char *p, va_list ap, params_t *params)
{
	int d = 0;

	if(*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while(_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}
	params->precision = d;
	return (p);
}
