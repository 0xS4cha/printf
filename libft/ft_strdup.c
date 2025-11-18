/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:55:50 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 21:42:46 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(str);
	copy = ft_calloc(len + 1, sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, str, len + 1);
	return (copy);
}
