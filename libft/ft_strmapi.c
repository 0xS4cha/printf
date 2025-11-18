/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sservant <sservant@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:35:53 by sservant          #+#    #+#             */
/*   Updated: 2025/11/12 21:33:47 by sservant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*output;

	if (!str || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(str);
	output = ft_calloc(size + 1, sizeof(char));
	if (!output)
		return (NULL);
	while (str[i])
	{
		output[i] = f(i, str[i]);
		i++;
	}
	return (output);
}
