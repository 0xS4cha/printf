/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:26:16 by sservant          #+#    #+#             */
/*   Updated: 2025/11/13 14:38:26 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_str(const char *str, va_list parameters_infos)
{
	if (str[1] == 'c')
		return (ft_writechar(va_arg(parameters_infos, int)));
	if (str[1] == 'i' || str[1] == 'd')
		return (ft_writenb(va_arg(parameters_infos, int)));
	if (str[1] == 'u')
		return (ft_writeunb(va_arg(parameters_infos, unsigned int)));
	if (str[1] == 's')
		return (ft_writestr(va_arg(parameters_infos, char *)));
	if (str[1] == 'p')
		return (ft_writepointer(va_arg(parameters_infos, void *), 1));
	if (str[1] == 'x')
		return (ft_writehex(va_arg(parameters_infos, unsigned int), 1));
	if (str[1] == 'X')
		return (ft_writehex(va_arg(parameters_infos, unsigned int), 0));
	if (str[1] == '%')
		return (ft_writechar('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	written;
	int		read_len;
	va_list	parameters_infos;

	va_start(parameters_infos, str);
	i = 0;
	written = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			read_len = format_str(&str[i], parameters_infos);
			if (read_len < 0)
				return (-1);
			written += read_len - 1;
			i += 2;
		}
		else
			ft_putchar_fd(str[i++], 1);
		written++;
	}
	va_end(parameters_infos);
	return (written);
}
