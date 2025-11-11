/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:05:54 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 12:58:43 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (str[i])
	{
		if (str[i] == (char) c)
			ptr = (char *) &str[i];
		i++;
	}
	if (str[i] == (char) c)
		ptr = (char *) &str[i];
	return (ptr);
}
