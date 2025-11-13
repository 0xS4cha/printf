/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writepointer_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:06:33 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 13:30:17 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

static size_t	ft_displaypointer(unsigned long nb, int in_lowercase)
{
	char	output;
	size_t	len;

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

size_t	ft_writepointer(void *ptr, int in_lowercase, t_format format)
{
	unsigned long	nb;

	if (!ptr)
		return (ft_writenil(format));
	nb = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	return (ft_displaypointer(nb, in_lowercase) + 2);
}
