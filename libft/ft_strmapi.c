/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:35:53 by sservant          #+#    #+#             */
/*   Updated: 2025/11/10 15:40:09 by sservant         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*output;

	i = 0;
	size = ft_strlen((const char *) str);
	output = ft_calloc(size + 1, sizeof(char));
	if (!output)
		return (0);
	while (str[i])
	{
		output[i] = (*f)(i, str[i]);
		i++;
	}
	output[size] = 0;
	return (output);
}
