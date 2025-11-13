/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:26:16 by sservant          #+#    #+#             */
/*   Updated: 2025/11/13 12:51:19 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	index_of(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

t_format	parse_format(char *str, size_t *i)
{
	t_format	f;

	(*i)++;
	ft_memset(&f.flags, 0, 6);
	f.width = 0;
	f.precision = -1;
	while (str[*i] && ft_strchr("-0.# +", str[*i]))
	{
		f.flags[index_of(str[*i], "-0.# +") % 6] = str[*i];
		(*i)++;
	}
	while (ft_isdigit(str[*i]))
	{
		f.width = ft_atoi(&str[*i]);
		while (ft_isdigit(str[*i]))
			(*i)++;
	}
	if (str[*i] == '.')
	{
		(*i)++;
		while (ft_isdigit(str[*i]))
		{
			f.precision = ft_atoi(&str[*i]);
			while (ft_isdigit(str[*i]))
				(*i)++;
		}
	}
	f.type = str[(*i)++];
	return (f);
}

int	format_str(t_format format, va_list parameters_infos)
{
	if (!format.type)
		return (-1);
	if (format.type == 'c')
		return (ft_writechar(va_arg(parameters_infos, int), format));
	if (format.type == 'i' || format.type == 'd')
		return (ft_writenb(va_arg(parameters_infos, int), format));
	if (format.type == 'u')
		return (ft_writeunb(va_arg(parameters_infos, unsigned int), format));
	if (format.type == 's')
		return (ft_writestr(va_arg(parameters_infos, char *), format));
	if (format.type == 'p')
		return (ft_writepointer(va_arg(parameters_infos, void *), 1, format));
	if (format.type == 'x')
		return (ft_writehex(va_arg(parameters_infos, unsigned int), 1, format));
	if (format.type == 'X')
		return (ft_writehex(va_arg(parameters_infos, unsigned int), 0, format));
	if (format.type == '%')
		return (ft_writechar('%', format));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int			read_len;
	size_t		i;
	size_t		written;
	va_list		parameters_infos;

	va_start(parameters_infos, str);
	i = 0;
	written = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			read_len = format_str(parse_format((char *) str, &i), parameters_infos);
			if (read_len < 0)
				return (-1);
			written += read_len - 1;
		}
		else
			ft_putchar_fd(str[i++], 1);
		written++;
	}
	va_end(parameters_infos);
	return (written);
}
