/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writepointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:06:33 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 15:16:15 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_displaypointer(size_t nb, int in_lowercase)
{
    char    output;
    int        len;

    len = 0;
    if (nb >= 16)
        len += ft_displaypointer(nb / 16, in_lowercase);
    output = nb % 16;
    if (output >= 10)
        output = (output - 10) + ('A' + 32 * (in_lowercase != 0));
    else
        output = output + '0';
    ft_putchar_fd(output, 1);
    return (len + 1);
}
size_t	ft_writepointer(size_t nb, int in_lowercase)
{
	if (!nb || nb < 0)
		return (ft_writenil());
	ft_putstr_fd("0x", 1);
	return (ft_displaypointer(nb, in_lowercase) + 2);
}


