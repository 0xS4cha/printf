/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:47:57 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 12:52:08 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	return (0);
}
