/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:18:32 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 16:34:49 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_numlen(size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_sizet(unsigned int nb)
{
	unsigned int	nbr;

	nbr = nb;

	if (nbr > 9)
	{
		ft_putnbr_sizet((nbr / 10));
		ft_putnbr_sizet((nbr % 10));
	}
	else
		ft_putchar_fd((nbr + '0'), 1);
}

size_t	ft_writenb(int nb)
{
	int	isnegative;

	isnegative = 0;
	if ((int) nb <= 0)
		isnegative = 1;
	ft_putnbr_fd(nb, 1);
	return (ft_numlen(nb) + isnegative);
}

size_t	ft_writeunb(size_t nb)
{
	ft_putnbr_sizet(nb);
	return (ft_numlen(nb));
}
