/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writenb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:18:32 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 09:21:23 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	ft_numlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
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

static size_t	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

size_t	ft_writenb(int nb)
{
	ft_putnbr_fd(nb, 1);
	return (ft_intlen(nb));
}

size_t	ft_writeunb(unsigned int nb)
{
	ft_putnbr_sizet(nb);
	return (ft_numlen(nb));
}
