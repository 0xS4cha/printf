/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:11:01 by sservant          #+#    #+#             */
/*   Updated: 2025/11/13 11:03:37 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	total_size;

	if (count > 0 && size > INT_MAX / count)
		return (NULL);
	total_size = count * size;
	tmp = malloc(total_size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, total_size);
	return (tmp);
}
