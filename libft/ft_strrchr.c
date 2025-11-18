/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:05:54 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 21:48:28 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*ptr;
	size_t	len;

	i = 0;
	ptr = NULL;
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == (char) c)
			ptr = (char *) &str[i];
		i++;
	}
	return (ptr);
}
