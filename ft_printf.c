/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:52:13 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 23:29:27 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_str(const char *str, va_list parametersInfos)
{
    if (str[1] == 'c')
        return (ft_writechar(va_arg(parametersInfos, int)));
    if (str[1] == 'i' || str[1] == 'd')
        return (ft_writenb(va_arg(parametersInfos, int)));
    if (str[1] == 'u')
        return (ft_writeunb(va_arg(parametersInfos, unsigned int)));
    if (str[1] == 's')
        return (ft_writestr(va_arg(parametersInfos, char *)));
    if (str[1] == 'p')
        return (ft_writepointer(va_arg(parametersInfos, void *), 1));
    if (str[1] == 'x')
        return (ft_writehex(va_arg(parametersInfos, unsigned int), 1));
    if (str[1] == 'X')
        return (ft_writehex(va_arg(parametersInfos, unsigned int), 0));
    if (str[1] == '%')
        return (ft_writechar('%'));
    return (-1);
}

int	ft_printf(const char *str, ...)
{
    size_t i;
    size_t written;
    int read_len;
    va_list parametersInfos;
    va_start( parametersInfos, str );

    i = 0;
    written = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            read_len = format_str(&str[i], parametersInfos);
            if (read_len < 0)
                return (-1);
            written += read_len;
            i += 2;
        }
        else
        {
            ft_putchar_fd(str[i], 1);
            written++;
            i++;
        }
    }
    va_end(parametersInfos);
    return (written);
}