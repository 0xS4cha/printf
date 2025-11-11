/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:26:24 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 15:52:07 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
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

static void	setchar(char *str, int isnegative, int last)
{
	if (isnegative)
		str[0] = '-';
	str[last] = '\0';
}

static char	*dupvalue(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup(""));
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		negative;
	int		i;

	i = -1;
	negative = 0;
	if (n == 0 || n == -2147483648)
		return (dupvalue(n));
	if (n < 0)
	{
		negative = 1;
		n *= -1;
	}
	len = ft_numlen(n) + negative;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	while (++i < len)
	{
		str[len - i - 1] = ((n % 10) + 48);
		n = n / 10;
	}
	setchar(str, negative, len);
	return (str);
}
