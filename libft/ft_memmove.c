/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:44:47 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 13:33:09 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (0);
	if (((char *) dest) > ((char *) src))
		while (n-- > 0)
			((char *) dest)[n] = ((char *) src)[n];
	else
		while (++i < n)
			((char *) dest)[i] = ((char *) src)[i];
	return (dest);
}
