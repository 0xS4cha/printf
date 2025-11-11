/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writehex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:40:00 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 23:29:54 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


static size_t	ft_displayhex(unsigned int nb, int in_lowercase)
{
	char	output;
	size_t	len;

	len = 0;
	if (nb >= 16)
		len += ft_displayhex(nb / 16, in_lowercase);
	output = nb % 16;
	if (output >= 10)
		output = (output - 10) + ('A' + 32 * (in_lowercase != 0));
	else
		output = output + '0';
	ft_putchar_fd(output, 1);
	return (len + 1);
}

size_t	ft_writehex(unsigned int nb, int in_lowercase)
{
	if (nb == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_displayhex(nb, in_lowercase));
}

