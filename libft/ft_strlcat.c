/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:38:23 by sservant          #+#    #+#             */
/*   Updated: 2025/11/13 11:01:28 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;
	size_t	size_src;
	size_t	size_dst;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (!size)
		return (size_src);
	if (size > size_dst)
		res = size_src + size_dst;
	else
		res = size_src + size;
	while (src[i] && size_dst < size - 1)
	{
		dst[size_dst] = src[i];
		size_dst++;
		i++;
	}
	dst[size_dst] = '\0';
	return (res);
}
