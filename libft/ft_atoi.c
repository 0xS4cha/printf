/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:46:09 by sservant          #+#    #+#             */
/*   Updated: 2025/11/11 10:06:36 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischarset(int first, int second)
{
	int	first_ok;
	int	second_ok;

	first_ok = (ft_isdigit(first) || first == '+' || first == '-');
	second_ok = (second != '+' && second != '-');
	return (first_ok && second_ok);
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		value;
	size_t	i;

	i = 0;
	value = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (ischarset(nptr[i], nptr[i + 1]))
	{
		if (nptr[i] == '-')
			sign = -sign;
		if (!ft_isdigit(nptr[i]))
			i++;
	}
	else
		return (0);
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		value = value * 10 + nptr[i] - '0';
		i++;
	}
	return (value * sign);
}
